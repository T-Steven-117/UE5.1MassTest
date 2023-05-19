// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/Simple360Widget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimple360Widget() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ASimple360SkyActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_USimple360Widget();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_USimple360Widget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void USimple360Widget::StaticRegisterNativesUSimple360Widget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimple360Widget);
	UClass* Z_Construct_UClass_USimple360Widget_NoRegister()
	{
		return USimple360Widget::StaticClass();
	}
	struct Z_Construct_UClass_USimple360Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simple360SkyActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Simple360SkyActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simple360DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Simple360DataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimple360Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimple360Widget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Xiangmu/Simple360Widget.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360Widget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360SkyActor_MetaData[] = {
		{ "Category", "Simple360Widget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360Widget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360SkyActor = { "Simple360SkyActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimple360Widget, Simple360SkyActor), Z_Construct_UClass_ASimple360SkyActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360SkyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360SkyActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360DataAsset_MetaData[] = {
		{ "Category", "Simple360Widget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360Widget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360DataAsset = { "Simple360DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimple360Widget, Simple360DataAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360DataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360DataAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimple360Widget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360SkyActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimple360Widget_Statics::NewProp_Simple360DataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimple360Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimple360Widget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimple360Widget_Statics::ClassParams = {
		&USimple360Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimple360Widget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimple360Widget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimple360Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimple360Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimple360Widget()
	{
		if (!Z_Registration_Info_UClass_USimple360Widget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimple360Widget.OuterSingleton, Z_Construct_UClass_USimple360Widget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimple360Widget.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<USimple360Widget>()
	{
		return USimple360Widget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimple360Widget);
	USimple360Widget::~USimple360Widget() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360Widget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360Widget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimple360Widget, USimple360Widget::StaticClass, TEXT("USimple360Widget"), &Z_Registration_Info_UClass_USimple360Widget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimple360Widget), 2765325970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360Widget_h_2218591997(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360Widget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360Widget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
