// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Runtime/RealtyRuntimeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtyUserWidgetBase;
#ifdef EASYREALTYRUNTIME_RealtyRuntimeActor_generated_h
#error "RealtyRuntimeActor.generated.h already included, missing '#pragma once' in RealtyRuntimeActor.h"
#endif
#define EASYREALTYRUNTIME_RealtyRuntimeActor_generated_h

#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIMapping_Statics; \
	EASYREALTYRUNTIME_API static class UScriptStruct* StaticStruct();


template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<struct FUIMapping>();

#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_22_DELEGATE \
struct _Script_EasyRealtyRuntime_eventOnRightPressed_Parms \
{ \
	bool bShouldClean; \
}; \
static inline void FOnRightPressed_DelegateWrapper(const FMulticastScriptDelegate& OnRightPressed, bool bShouldClean) \
{ \
	_Script_EasyRealtyRuntime_eventOnRightPressed_Parms Parms; \
	Parms.bShouldClean=bShouldClean ? true : false; \
	OnRightPressed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_24_DELEGATE \
struct _Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms \
{ \
	bool bIsShow; \
}; \
static inline void FOnLerpDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLerpDelegate, bool bIsShow) \
{ \
	_Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms Parms; \
	Parms.bIsShow=bIsShow ? true : false; \
	OnLerpDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_25_DELEGATE \
static inline void FOnAfterClicked_DelegateWrapper(const FMulticastScriptDelegate& OnAfterClicked) \
{ \
	OnAfterClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_SPARSE_DATA
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTopUIPtr);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTopUIPtr);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_ACCESSORS
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARealtyRuntimeActor(); \
	friend struct Z_Construct_UClass_ARealtyRuntimeActor_Statics; \
public: \
	DECLARE_CLASS(ARealtyRuntimeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(ARealtyRuntimeActor)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesARealtyRuntimeActor(); \
	friend struct Z_Construct_UClass_ARealtyRuntimeActor_Statics; \
public: \
	DECLARE_CLASS(ARealtyRuntimeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(ARealtyRuntimeActor)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARealtyRuntimeActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARealtyRuntimeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtyRuntimeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtyRuntimeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARealtyRuntimeActor(ARealtyRuntimeActor&&); \
	NO_API ARealtyRuntimeActor(const ARealtyRuntimeActor&); \
public: \
	NO_API virtual ~ARealtyRuntimeActor();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARealtyRuntimeActor(ARealtyRuntimeActor&&); \
	NO_API ARealtyRuntimeActor(const ARealtyRuntimeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtyRuntimeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtyRuntimeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARealtyRuntimeActor) \
	NO_API virtual ~ARealtyRuntimeActor();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_27_PROLOG
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_RPC_WRAPPERS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_INCLASS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_INCLASS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYREALTYRUNTIME_API UClass* StaticClass<class ARealtyRuntimeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
