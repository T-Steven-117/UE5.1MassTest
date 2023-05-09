// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/RealtyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyGameModeBase() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyGameModeBase();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void ARealtyGameModeBase::StaticRegisterNativesARealtyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtyGameModeBase);
	UClass* Z_Construct_UClass_ARealtyGameModeBase_NoRegister()
	{
		return ARealtyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARealtyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealtyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Runtime/RealtyGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealtyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtyGameModeBase_Statics::ClassParams = {
		&ARealtyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARealtyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealtyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARealtyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtyGameModeBase.OuterSingleton, Z_Construct_UClass_ARealtyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealtyGameModeBase.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARealtyGameModeBase>()
	{
		return ARealtyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtyGameModeBase);
	ARealtyGameModeBase::~ARealtyGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealtyGameModeBase, ARealtyGameModeBase::StaticClass, TEXT("ARealtyGameModeBase"), &Z_Registration_Info_UClass_ARealtyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtyGameModeBase), 1359132647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyGameModeBase_h_3185606145(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
