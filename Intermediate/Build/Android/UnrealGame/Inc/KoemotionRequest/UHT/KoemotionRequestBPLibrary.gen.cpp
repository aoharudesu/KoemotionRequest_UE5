// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KoemotionRequest/Public/KoemotionRequestBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKoemotionRequestBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	KOEMOTIONREQUEST_API UClass* Z_Construct_UClass_UKoemotionRequestBPLibrary();
	KOEMOTIONREQUEST_API UClass* Z_Construct_UClass_UKoemotionRequestBPLibrary_NoRegister();
	KOEMOTIONREQUEST_API UFunction* Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_KoemotionRequest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms
		{
			bool bWasSuccessful;
			FString JsonResponse;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms), &Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_JsonResponse = { "JsonResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms, JsonResponse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::NewProp_JsonResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KoemotionRequestBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_KoemotionRequest, nullptr, "KoemotionAPIResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::_Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms), Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UKoemotionRequestBPLibrary::execRequestKoemotionAPIAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeakerX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeakerY);
		P_GET_PROPERTY(FStrProperty,Z_Param_Style);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputFormat);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputBitrate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResponseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKoemotionRequestBPLibrary::RequestKoemotionAPIAsync(Z_Param_ApiKey,Z_Param_Text,Z_Param_SpeakerX,Z_Param_SpeakerY,Z_Param_Style,Z_Param_Seed,Z_Param_Speed,Z_Param_Volume,Z_Param_OutputFormat,Z_Param_OutputBitrate,FKoemotionAPIResponseDelegate(Z_Param_ResponseDelegate));
		P_NATIVE_END;
	}
	void UKoemotionRequestBPLibrary::StaticRegisterNativesUKoemotionRequestBPLibrary()
	{
		UClass* Class = UKoemotionRequestBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestKoemotionAPIAsync", &UKoemotionRequestBPLibrary::execRequestKoemotionAPIAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics
	{
		struct KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms
		{
			FString ApiKey;
			FString Text;
			float SpeakerX;
			float SpeakerY;
			FString Style;
			int32 Seed;
			float Speed;
			float Volume;
			FString OutputFormat;
			FString OutputBitrate;
			FScriptDelegate ResponseDelegate;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerY;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Style;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFormat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputBitrate;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResponseDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, ApiKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_SpeakerX = { "SpeakerX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, SpeakerX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_SpeakerY = { "SpeakerY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, SpeakerY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, Style), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, OutputFormat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_OutputBitrate = { "OutputBitrate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, OutputBitrate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_ResponseDelegate = { "ResponseDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms, ResponseDelegate), Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2413093385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_SpeakerX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_SpeakerY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_OutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_OutputBitrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::NewProp_ResponseDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "KoemotionRequest" },
		{ "ModuleRelativePath", "Public/KoemotionRequestBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKoemotionRequestBPLibrary, nullptr, "RequestKoemotionAPIAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::KoemotionRequestBPLibrary_eventRequestKoemotionAPIAsync_Parms), Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKoemotionRequestBPLibrary);
	UClass* Z_Construct_UClass_UKoemotionRequestBPLibrary_NoRegister()
	{
		return UKoemotionRequestBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KoemotionRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKoemotionRequestBPLibrary_RequestKoemotionAPIAsync, "RequestKoemotionAPIAsync" }, // 4249576508
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KoemotionRequestBPLibrary.h" },
		{ "ModuleRelativePath", "Public/KoemotionRequestBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKoemotionRequestBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::ClassParams = {
		&UKoemotionRequestBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKoemotionRequestBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UKoemotionRequestBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKoemotionRequestBPLibrary.OuterSingleton, Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKoemotionRequestBPLibrary.OuterSingleton;
	}
	template<> KOEMOTIONREQUEST_API UClass* StaticClass<UKoemotionRequestBPLibrary>()
	{
		return UKoemotionRequestBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKoemotionRequestBPLibrary);
	UKoemotionRequestBPLibrary::~UKoemotionRequestBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKoemotionRequestBPLibrary, UKoemotionRequestBPLibrary::StaticClass, TEXT("UKoemotionRequestBPLibrary"), &Z_Registration_Info_UClass_UKoemotionRequestBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKoemotionRequestBPLibrary), 2633587597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_4152294845(TEXT("/Script/KoemotionRequest"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
