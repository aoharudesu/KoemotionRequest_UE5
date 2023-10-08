#include "KoemotionRequestBPLibrary.h"
#include "Misc/Base64.h"

UKoemotionRequestBPLibrary::UKoemotionRequestBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UKoemotionRequestBPLibrary::RequestKoemotionAPIAsync(FString ApiKey, FString Text, float SpeakerX, float SpeakerY, FString Style, int32 Seed, float Speed, float Volume, FString OutputFormat, FString OutputBitrate, FKoemotionAPIResponseDelegate ResponseDelegate)
{
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->SetVerb("POST");
	HttpRequest->SetURL("https://api.rinna.co.jp/koeiromap/v1.0/infer");
	HttpRequest->SetHeader("Content-Type", "application/json");
	HttpRequest->SetHeader("Ocp-Apim-Subscription-Key", ApiKey);

	// Construct the JSON data.
	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	JsonObj->SetStringField("text", Text);
	JsonObj->SetNumberField("speaker_x", SpeakerX);
	JsonObj->SetNumberField("speaker_y", SpeakerY);
	JsonObj->SetStringField("style", Style);
	JsonObj->SetNumberField("seed", Seed);
	JsonObj->SetNumberField("speed", Speed);
	JsonObj->SetNumberField("volume", Volume);
	JsonObj->SetStringField("output_format", OutputFormat);
	JsonObj->SetStringField("output_bitrate", OutputBitrate);

	FString Content;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Content);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), Writer);

	HttpRequest->SetContentAsString(Content);

	HttpRequest->OnProcessRequestComplete().BindLambda([ResponseDelegate](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess)
		{
			if (bSuccess && Response->GetResponseCode() == 200)
			{
				FString JsonResponseContent = Response->GetContentAsString();
				ResponseDelegate.ExecuteIfBound(true, JsonResponseContent);
			}
			else
			{
				ResponseDelegate.ExecuteIfBound(false, FString("Failed to get a valid response"));
			}
		});

	HttpRequest->ProcessRequest();
}













