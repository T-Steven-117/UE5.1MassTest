// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpSocketPlugin_init() {}
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature();
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature();
	TCPSOCKETPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TcpSocketPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TcpSocketPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TcpSocketPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketConnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketDisconnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TcpSocketPlugin_TcpSocketReceivedMessageDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TcpSocketPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56B19FAD,
				0xD8428FC8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TcpSocketPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TcpSocketPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TcpSocketPlugin(Z_Construct_UPackage__Script_TcpSocketPlugin, TEXT("/Script/TcpSocketPlugin"), Z_Registration_Info_UPackage__Script_TcpSocketPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x56B19FAD, 0xD8428FC8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
