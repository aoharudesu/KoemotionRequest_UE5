// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KoemotionRequestBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KOEMOTIONREQUEST_KoemotionRequestBPLibrary_generated_h
#error "KoemotionRequestBPLibrary.generated.h already included, missing '#pragma once' in KoemotionRequestBPLibrary.h"
#endif
#define KOEMOTIONREQUEST_KoemotionRequestBPLibrary_generated_h

#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_9_DELEGATE \
struct _Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms \
{ \
	bool bWasSuccessful; \
	FString JsonResponse; \
}; \
static inline void FKoemotionAPIResponseDelegate_DelegateWrapper(const FScriptDelegate& KoemotionAPIResponseDelegate, bool bWasSuccessful, const FString& JsonResponse) \
{ \
	_Script_KoemotionRequest_eventKoemotionAPIResponseDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.JsonResponse=JsonResponse; \
	KoemotionAPIResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestKoemotionAPIAsync);


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestKoemotionAPIAsync);


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_ACCESSORS
#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKoemotionRequestBPLibrary(); \
	friend struct Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKoemotionRequestBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KoemotionRequest"), NO_API) \
	DECLARE_SERIALIZER(UKoemotionRequestBPLibrary)


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKoemotionRequestBPLibrary(); \
	friend struct Z_Construct_UClass_UKoemotionRequestBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UKoemotionRequestBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KoemotionRequest"), NO_API) \
	DECLARE_SERIALIZER(UKoemotionRequestBPLibrary)


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKoemotionRequestBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKoemotionRequestBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKoemotionRequestBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKoemotionRequestBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKoemotionRequestBPLibrary(UKoemotionRequestBPLibrary&&); \
	NO_API UKoemotionRequestBPLibrary(const UKoemotionRequestBPLibrary&); \
public: \
	NO_API virtual ~UKoemotionRequestBPLibrary();


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKoemotionRequestBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKoemotionRequestBPLibrary(UKoemotionRequestBPLibrary&&); \
	NO_API UKoemotionRequestBPLibrary(const UKoemotionRequestBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKoemotionRequestBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKoemotionRequestBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKoemotionRequestBPLibrary) \
	NO_API virtual ~UKoemotionRequestBPLibrary();


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_11_PROLOG
#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_ACCESSORS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_INCLASS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_ACCESSORS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KoemotionRequestBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KOEMOTIONREQUEST_API UClass* StaticClass<class UKoemotionRequestBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_KoemotionRequest_Source_KoemotionRequest_Public_KoemotionRequestBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
