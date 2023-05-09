// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TcpSocketConnection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCPSOCKETPLUGIN_TcpSocketConnection_generated_h
#error "TcpSocketConnection.generated.h already included, missing '#pragma once' in TcpSocketConnection.h"
#endif
#define TCPSOCKETPLUGIN_TcpSocketConnection_generated_h

#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_13_DELEGATE \
struct _Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketDisconnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketDisconnectDelegate, int32 ConnectionId) \
{ \
	_Script_TcpSocketPlugin_eventTcpSocketDisconnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketDisconnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_14_DELEGATE \
struct _Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms \
{ \
	int32 ConnectionId; \
}; \
static inline void FTcpSocketConnectDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketConnectDelegate, int32 ConnectionId) \
{ \
	_Script_TcpSocketPlugin_eventTcpSocketConnectDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	TcpSocketConnectDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_15_DELEGATE \
struct _Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms \
{ \
	int32 ConnectionId; \
	TArray<uint8> Message; \
}; \
static inline void FTcpSocketReceivedMessageDelegate_DelegateWrapper(const FScriptDelegate& TcpSocketReceivedMessageDelegate, int32 ConnectionId, TArray<uint8>& Message) \
{ \
	_Script_TcpSocketPlugin_eventTcpSocketReceivedMessageDelegate_Parms Parms; \
	Parms.ConnectionId=ConnectionId; \
	Parms.Message=Message; \
	TcpSocketReceivedMessageDelegate.ProcessDelegate<UObject>(&Parms); \
	Message=Parms.Message; \
}


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA
#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisConnected); \
	DECLARE_FUNCTION(execMessage_ReadString); \
	DECLARE_FUNCTION(execMessage_ReadFloat); \
	DECLARE_FUNCTION(execMessage_ReadBytes); \
	DECLARE_FUNCTION(execMessage_ReadByte); \
	DECLARE_FUNCTION(execMessage_ReadInt); \
	DECLARE_FUNCTION(execConv_ByteToBytes); \
	DECLARE_FUNCTION(execConv_FloatToBytes); \
	DECLARE_FUNCTION(execConv_StringToBytes); \
	DECLARE_FUNCTION(execConv_IntToBytes); \
	DECLARE_FUNCTION(execConcat_BytesBytes); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ACCESSORS
#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATcpSocketConnection(); \
	friend struct Z_Construct_UClass_ATcpSocketConnection_Statics; \
public: \
	DECLARE_CLASS(ATcpSocketConnection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TcpSocketPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATcpSocketConnection)


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATcpSocketConnection(); \
	friend struct Z_Construct_UClass_ATcpSocketConnection_Statics; \
public: \
	DECLARE_CLASS(ATcpSocketConnection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TcpSocketPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATcpSocketConnection)


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATcpSocketConnection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATcpSocketConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATcpSocketConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATcpSocketConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATcpSocketConnection(ATcpSocketConnection&&); \
	NO_API ATcpSocketConnection(const ATcpSocketConnection&); \
public: \
	NO_API virtual ~ATcpSocketConnection();


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATcpSocketConnection(ATcpSocketConnection&&); \
	NO_API ATcpSocketConnection(const ATcpSocketConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATcpSocketConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATcpSocketConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATcpSocketConnection) \
	NO_API virtual ~ATcpSocketConnection();


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_17_PROLOG
#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ACCESSORS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_SPARSE_DATA \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ACCESSORS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPSOCKETPLUGIN_API UClass* StaticClass<class ATcpSocketConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_TcpSocketConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
