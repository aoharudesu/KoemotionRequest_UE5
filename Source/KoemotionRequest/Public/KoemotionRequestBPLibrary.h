#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "Json.h"
#include "KoemotionRequestBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FKoemotionAPIResponseDelegate, bool, bWasSuccessful, FString, JsonResponse);

UCLASS()
class UKoemotionRequestBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "KoemotionRequest")
    static void RequestKoemotionAPIAsync(FString ApiKey, FString Text, float SpeakerX, float SpeakerY, FString Style, int32 Seed, float Speed, float Volume, FString OutputFormat, FString OutputBitrate, FKoemotionAPIResponseDelegate ResponseDelegate);
};











