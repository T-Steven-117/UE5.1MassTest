// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UMG/RealtyUserWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URealtyUserWidgetBase;
#ifdef EASYREALTYRUNTIME_RealtyUserWidgetBase_generated_h
#error "RealtyUserWidgetBase.generated.h already included, missing '#pragma once' in RealtyUserWidgetBase.h"
#endif
#define EASYREALTYRUNTIME_RealtyUserWidgetBase_generated_h

#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_58_DELEGATE \
static inline void FOnRealtyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRealtyDelegate) \
{ \
	OnRealtyDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_SPARSE_DATA
#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_RPC_WRAPPERS \
	virtual void OnSelfAddToViewport_Implementation(); \
	virtual void ShowMySelf_Implementation(); \
	virtual void SelfHidden_Implementation(); \
	virtual void UnBindEventToWidget_Implementation(UObject* Binder, FName FunctionName); \
	virtual void BindEventToWidget_Implementation(UObject* Binder, FName FunctionName); \
 \
	DECLARE_FUNCTION(execGetLastUI); \
	DECLARE_FUNCTION(execOnSelfAddToViewport); \
	DECLARE_FUNCTION(execAddMySelf); \
	DECLARE_FUNCTION(execShowMySelf); \
	DECLARE_FUNCTION(execSelfHidden); \
	DECLARE_FUNCTION(execUnBindEventToWidget); \
	DECLARE_FUNCTION(execBindEventToWidget);


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SelfHidden_Implementation(); \
	virtual void UnBindEventToWidget_Implementation(UObject* Binder, FName FunctionName); \
	virtual void BindEventToWidget_Implementation(UObject* Binder, FName FunctionName); \
 \
	DECLARE_FUNCTION(execGetLastUI); \
	DECLARE_FUNCTION(execOnSelfAddToViewport); \
	DECLARE_FUNCTION(execAddMySelf); \
	DECLARE_FUNCTION(execShowMySelf); \
	DECLARE_FUNCTION(execSelfHidden); \
	DECLARE_FUNCTION(execUnBindEventToWidget); \
	DECLARE_FUNCTION(execBindEventToWidget);


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_ACCESSORS
#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_CALLBACK_WRAPPERS
#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtyUserWidgetBase(); \
	friend struct Z_Construct_UClass_URealtyUserWidgetBase_Statics; \
public: \
	DECLARE_CLASS(URealtyUserWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(URealtyUserWidgetBase)


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURealtyUserWidgetBase(); \
	friend struct Z_Construct_UClass_URealtyUserWidgetBase_Statics; \
public: \
	DECLARE_CLASS(URealtyUserWidgetBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(URealtyUserWidgetBase)


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtyUserWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtyUserWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtyUserWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtyUserWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtyUserWidgetBase(URealtyUserWidgetBase&&); \
	NO_API URealtyUserWidgetBase(const URealtyUserWidgetBase&); \
public: \
	NO_API virtual ~URealtyUserWidgetBase();


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtyUserWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtyUserWidgetBase(URealtyUserWidgetBase&&); \
	NO_API URealtyUserWidgetBase(const URealtyUserWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtyUserWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtyUserWidgetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtyUserWidgetBase) \
	NO_API virtual ~URealtyUserWidgetBase();


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_12_PROLOG
#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_SPARSE_DATA \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_RPC_WRAPPERS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_ACCESSORS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_CALLBACK_WRAPPERS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_INCLASS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_SPARSE_DATA \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_ACCESSORS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_CALLBACK_WRAPPERS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYREALTYRUNTIME_API UClass* StaticClass<class URealtyUserWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
