// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMVieModel/UserTopPageViewModelBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTSUBSYSTEM_UserTopPageViewModelBase_generated_h
#error "UserTopPageViewModelBase.generated.h already included, missing '#pragma once' in UserTopPageViewModelBase.h"
#endif
#define PROJECTSUBSYSTEM_UserTopPageViewModelBase_generated_h

#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_12_DELEGATE \
static inline void FOnTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnTrigger) \
{ \
	OnTrigger.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_SPARSE_DATA
#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallOnDelegate);


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallOnDelegate);


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_ACCESSORS \
static void GetLowTemp_WrapperImpl(const void* Object, void* OutValue); \
static void SetLowTemp_WrapperImpl(void* Object, const void* InValue); \
static void GetHighTemp_WrapperImpl(const void* Object, void* OutValue); \
static void SetHighTemp_WrapperImpl(void* Object, const void* InValue); \
static void GetTimeData_WrapperImpl(const void* Object, void* OutValue); \
static void SetTimeData_WrapperImpl(void* Object, const void* InValue); \
static void GetCName_WrapperImpl(const void* Object, void* OutValue); \
static void SetCName_WrapperImpl(void* Object, const void* InValue); \
static void GetEName_WrapperImpl(const void* Object, void* OutValue); \
static void SetEName_WrapperImpl(void* Object, const void* InValue);


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserTopPageViewModelBase(); \
	friend struct Z_Construct_UClass_UUserTopPageViewModelBase_Statics; \
public: \
	DECLARE_CLASS(UUserTopPageViewModelBase, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UUserTopPageViewModelBase)


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUserTopPageViewModelBase(); \
	friend struct Z_Construct_UClass_UUserTopPageViewModelBase_Statics; \
public: \
	DECLARE_CLASS(UUserTopPageViewModelBase, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UUserTopPageViewModelBase)


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserTopPageViewModelBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserTopPageViewModelBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserTopPageViewModelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserTopPageViewModelBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserTopPageViewModelBase(UUserTopPageViewModelBase&&); \
	NO_API UUserTopPageViewModelBase(const UUserTopPageViewModelBase&); \
public: \
	NO_API virtual ~UUserTopPageViewModelBase();


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserTopPageViewModelBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserTopPageViewModelBase(UUserTopPageViewModelBase&&); \
	NO_API UUserTopPageViewModelBase(const UUserTopPageViewModelBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserTopPageViewModelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserTopPageViewModelBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserTopPageViewModelBase) \
	NO_API virtual ~UUserTopPageViewModelBase();


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(PROJECTSUBSYSTEM_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(LowTemp) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(HighTemp) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(TimeData) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(CName) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(EName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(LowTemp) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(HighTemp) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(TimeData) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(CName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(EName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_14_PROLOG
#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_SPARSE_DATA \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_RPC_WRAPPERS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_ACCESSORS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_INCLASS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_STANDARD_CONSTRUCTORS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_SPARSE_DATA \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_ACCESSORS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_ENHANCED_CONSTRUCTORS \
	FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_17_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTSUBSYSTEM_API UClass* StaticClass<class UUserTopPageViewModelBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
