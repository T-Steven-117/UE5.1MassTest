// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Runtime/RealtyFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDirectionalLightComponent;
class UObject;
class USkyLightComponent;
struct FLinearColor;
#ifdef EASYREALTYRUNTIME_RealtyFunctionLibrary_generated_h
#error "RealtyFunctionLibrary.generated.h already included, missing '#pragma once' in RealtyFunctionLibrary.h"
#endif
#define EASYREALTYRUNTIME_RealtyFunctionLibrary_generated_h

#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_SPARSE_DATA
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInSeamlessTravel); \
	DECLARE_FUNCTION(execLoadMainMap); \
	DECLARE_FUNCTION(execSetAtmosphereSunDiskColorScale); \
	DECLARE_FUNCTION(execSetSkyLightAngle); \
	DECLARE_FUNCTION(execRealtyLoadMap); \
	DECLARE_FUNCTION(execGoNodeSimple); \
	DECLARE_FUNCTION(execGoNodeFast); \
	DECLARE_FUNCTION(execGoBackNode); \
	DECLARE_FUNCTION(execGoNode); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execReStart);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInSeamlessTravel); \
	DECLARE_FUNCTION(execLoadMainMap); \
	DECLARE_FUNCTION(execSetAtmosphereSunDiskColorScale); \
	DECLARE_FUNCTION(execSetSkyLightAngle); \
	DECLARE_FUNCTION(execRealtyLoadMap); \
	DECLARE_FUNCTION(execGoNodeSimple); \
	DECLARE_FUNCTION(execGoNodeFast); \
	DECLARE_FUNCTION(execGoBackNode); \
	DECLARE_FUNCTION(execGoNode); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execReStart);


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_ACCESSORS
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtyFunctionLibrary(); \
	friend struct Z_Construct_UClass_URealtyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URealtyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(URealtyFunctionLibrary)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURealtyFunctionLibrary(); \
	friend struct Z_Construct_UClass_URealtyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URealtyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyRealtyRuntime"), NO_API) \
	DECLARE_SERIALIZER(URealtyFunctionLibrary)


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtyFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtyFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtyFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtyFunctionLibrary(URealtyFunctionLibrary&&); \
	NO_API URealtyFunctionLibrary(const URealtyFunctionLibrary&); \
public: \
	NO_API virtual ~URealtyFunctionLibrary();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtyFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealtyFunctionLibrary(URealtyFunctionLibrary&&); \
	NO_API URealtyFunctionLibrary(const URealtyFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtyFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtyFunctionLibrary) \
	NO_API virtual ~URealtyFunctionLibrary();


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_13_PROLOG
#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_RPC_WRAPPERS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_INCLASS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_SPARSE_DATA \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_ACCESSORS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYREALTYRUNTIME_API UClass* StaticClass<class URealtyFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
