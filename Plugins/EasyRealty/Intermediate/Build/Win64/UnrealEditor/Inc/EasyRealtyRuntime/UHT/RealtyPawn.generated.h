// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Runtime/RealtyPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYREALTYRUNTIME_RealtyPawn_generated_h
#error "RealtyPawn.generated.h already included, missing '#pragma once' in RealtyPawn.h"
#endif
#define EASYREALTYRUNTIME_RealtyPawn_generated_h

#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_SPARSE_DATA
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitComp); \
	DECLARE_FUNCTION(execSetCameraLagSpeed); \
	DECLARE_FUNCTION(execAddPawnWorldOffset);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitComp); \
	DECLARE_FUNCTION(execSetCameraLagSpeed); \
	DECLARE_FUNCTION(execAddPawnWorldOffset);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_ACCESSORS
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARealtyPawn(); \
	friend struct Z_Construct_UClass_ARealtyPawn_Statics; \
public: \
	DECLARE_CLASS(ARealtyPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(ARealtyPawn)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARealtyPawn(); \
	friend struct Z_Construct_UClass_ARealtyPawn_Statics; \
public: \
	DECLARE_CLASS(ARealtyPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(ARealtyPawn)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARealtyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARealtyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARealtyPawn(ARealtyPawn&&); \
	NO_API ARealtyPawn(const ARealtyPawn&); \
public: \
	NO_API virtual ~ARealtyPawn();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARealtyPawn(ARealtyPawn&&); \
	NO_API ARealtyPawn(const ARealtyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARealtyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARealtyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARealtyPawn) \
	NO_API virtual ~ARealtyPawn();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_9_PROLOG
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_RPC_WRAPPERS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_INCLASS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYREALTYRUNTIME_API UClass* StaticClass<class ARealtyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
