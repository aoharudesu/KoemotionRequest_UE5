// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKoemotionRequest_init() {}
	KOEMOTIONREQUEST_API UFunction* Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KoemotionRequest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KoemotionRequest()
	{
		if (!Z_Registration_Info_UPackage__Script_KoemotionRequest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KoemotionRequest_KoemotionAPIResponseDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KoemotionRequest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF4793FC1,
				0x8A3A1283,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KoemotionRequest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KoemotionRequest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KoemotionRequest(Z_Construct_UPackage__Script_KoemotionRequest, TEXT("/Script/KoemotionRequest"), Z_Registration_Info_UPackage__Script_KoemotionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF4793FC1, 0x8A3A1283));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
