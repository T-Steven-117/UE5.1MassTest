// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocketLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCPSOCKETPLUGIN_SocketLibrary_generated_h
#error "SocketLibrary.generated.h already included, missing '#pragma once' in SocketLibrary.h"
#endif
#define TCPSOCKETPLUGIN_SocketLibrary_generated_h

#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_SPARSE_DATA
#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMacAddress); \
	DECLARE_FUNCTION(execGetAllMacAddress);


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMacAddress); \
	DECLARE_FUNCTION(execGetAllMacAddress);


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_ACCESSORS
#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocketLibrary(); \
	friend struct Z_Construct_UClass_USocketLibrary_Statics; \
public: \
	DECLARE_CLASS(USocketLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TcpSocketPlugin"), NO_API) \
	DECLARE_SERIALIZER(USocketLibrary)


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSocketLibrary(); \
	friend struct Z_Construct_UClass_USocketLibrary_Statics; \
public: \
	DECLARE_CLASS(USocketLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TcpSocketPlugin"), NO_API) \
	DECLARE_SERIALIZER(USocketLibrary)


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketLibrary(USocketLibrary&&); \
	NO_API USocketLibrary(const USocketLibrary&); \
public: \
	NO_API virtual ~USocketLibrary();


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USocketLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USocketLibrary(USocketLibrary&&); \
	NO_API USocketLibrary(const USocketLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USocketLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocketLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USocketLibrary) \
	NO_API virtual ~USocketLibrary();


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_12_PROLOG
#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_SPARSE_DATA \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_RPC_WRAPPERS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_ACCESSORS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_INCLASS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_SPARSE_DATA \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_ACCESSORS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPSOCKETPLUGIN_API UClass* StaticClass<class USocketLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
