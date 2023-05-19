// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CacheInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTSUBSYSTEM_CacheInstanceSubsystem_generated_h
#error "CacheInstanceSubsystem.generated.h already included, missing '#pragma once' in CacheInstanceSubsystem.h"
#endif
#define PROJECTSUBSYSTEM_CacheInstanceSubsystem_generated_h

#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_SPARSE_DATA
#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnMApActor);


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnMApActor);


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_ACCESSORS
#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_CALLBACK_WRAPPERS
#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCacheInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UCacheInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCacheInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProjectSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UCacheInstanceSubsystem)


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCacheInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UCacheInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCacheInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProjectSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UCacheInstanceSubsystem)


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCacheInstanceSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCacheInstanceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCacheInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheInstanceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCacheInstanceSubsystem(UCacheInstanceSubsystem&&); \
	NO_API UCacheInstanceSubsystem(const UCacheInstanceSubsystem&); \
public: \
	NO_API virtual ~UCacheInstanceSubsystem();


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCacheInstanceSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCacheInstanceSubsystem(UCacheInstanceSubsystem&&); \
	NO_API UCacheInstanceSubsystem(const UCacheInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCacheInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCacheInstanceSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCacheInstanceSubsystem) \
	NO_API virtual ~UCacheInstanceSubsystem();


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_16_PROLOG
#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_SPARSE_DATA \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_RPC_WRAPPERS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_ACCESSORS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_CALLBACK_WRAPPERS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_INCLASS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_SPARSE_DATA \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_ACCESSORS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_CALLBACK_WRAPPERS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTSUBSYSTEM_API UClass* StaticClass<class UCacheInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
