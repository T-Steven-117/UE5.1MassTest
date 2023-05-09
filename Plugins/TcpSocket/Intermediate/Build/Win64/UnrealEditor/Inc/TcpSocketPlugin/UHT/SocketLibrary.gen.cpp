// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpSocketPlugin/Public/SocketLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocketLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_USocketLibrary();
	TCPSOCKETPLUGIN_API UClass* Z_Construct_UClass_USocketLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TcpSocketPlugin();
// End Cross Module References
	DEFINE_FUNCTION(USocketLibrary::execGetMacAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USocketLibrary::GetMacAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USocketLibrary::execGetAllMacAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=USocketLibrary::GetAllMacAddress();
		P_NATIVE_END;
	}
	void USocketLibrary::StaticRegisterNativesUSocketLibrary()
	{
		UClass* Class = USocketLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllMacAddress", &USocketLibrary::execGetAllMacAddress },
			{ "GetMacAddress", &USocketLibrary::execGetMacAddress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics
	{
		struct SocketLibrary_eventGetAllMacAddress_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketLibrary_eventGetAllMacAddress_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketLibrary, nullptr, "GetAllMacAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::SocketLibrary_eventGetAllMacAddress_Parms), Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketLibrary_GetAllMacAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketLibrary_GetAllMacAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics
	{
		struct SocketLibrary_eventGetMacAddress_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SocketLibrary_eventGetMacAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocketLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocketLibrary, nullptr, "GetMacAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::SocketLibrary_eventGetMacAddress_Parms), Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocketLibrary_GetMacAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USocketLibrary_GetMacAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocketLibrary);
	UClass* Z_Construct_UClass_USocketLibrary_NoRegister()
	{
		return USocketLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USocketLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocketLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpSocketPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocketLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocketLibrary_GetAllMacAddress, "GetAllMacAddress" }, // 553586679
		{ &Z_Construct_UFunction_USocketLibrary_GetMacAddress, "GetMacAddress" }, // 2422139480
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocketLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SocketLibrary.h" },
		{ "ModuleRelativePath", "Public/SocketLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocketLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocketLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocketLibrary_Statics::ClassParams = {
		&USocketLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USocketLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocketLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocketLibrary()
	{
		if (!Z_Registration_Info_UClass_USocketLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocketLibrary.OuterSingleton, Z_Construct_UClass_USocketLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocketLibrary.OuterSingleton;
	}
	template<> TCPSOCKETPLUGIN_API UClass* StaticClass<USocketLibrary>()
	{
		return USocketLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocketLibrary);
	USocketLibrary::~USocketLibrary() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocketLibrary, USocketLibrary::StaticClass, TEXT("USocketLibrary"), &Z_Registration_Info_UClass_USocketLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocketLibrary), 4033386037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_3398224571(TEXT("/Script/TcpSocketPlugin"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_TcpSocket_Source_TcpSocketPlugin_Public_SocketLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
