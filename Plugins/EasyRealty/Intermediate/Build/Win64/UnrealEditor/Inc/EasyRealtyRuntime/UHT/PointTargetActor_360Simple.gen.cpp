// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTargetActor_360Simple() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_360Simple();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_360Simple_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ASimple360SkyActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoundSelfRoamComponent_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_USimple360Widget_NoRegister();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimple360Asset();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FSimple360Asset>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSimple360Asset cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Simple360Asset;
class UScriptStruct* FSimple360Asset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Simple360Asset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Simple360Asset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimple360Asset, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("Simple360Asset"));
	}
	return Z_Registration_Info_UScriptStruct_Simple360Asset.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FSimple360Asset>()
{
	return FSimple360Asset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimple360Asset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThumbnailName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture360_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture360;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimple360Asset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimple360Asset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Simple360Asset" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimple360Asset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailName_MetaData[] = {
		{ "Category", "Simple360Asset" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailName = { "ThumbnailName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimple360Asset, ThumbnailName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "Category", "Simple360Asset" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimple360Asset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Texture360_MetaData[] = {
		{ "Category", "Simple360Asset" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Texture360 = { "Texture360", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimple360Asset, Texture360), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Texture360_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Texture360_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimple360Asset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_ThumbnailTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewProp_Texture360,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimple360Asset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Simple360Asset",
		sizeof(FSimple360Asset),
		alignof(FSimple360Asset),
		Z_Construct_UScriptStruct_FSimple360Asset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimple360Asset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimple360Asset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimple360Asset()
	{
		if (!Z_Registration_Info_UScriptStruct_Simple360Asset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Simple360Asset.InnerSingleton, Z_Construct_UScriptStruct_FSimple360Asset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Simple360Asset.InnerSingleton;
	}
	void APointTargetActor_360Simple::StaticRegisterNativesAPointTargetActor_360Simple()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTargetActor_360Simple);
	UClass* Z_Construct_UClass_APointTargetActor_360Simple_NoRegister()
	{
		return APointTargetActor_360Simple::StaticClass();
	}
	struct Z_Construct_UClass_APointTargetActor_360Simple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterRoamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CenterRoamComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simple360SkyActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Simple360SkyActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simple360Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Simple360Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simple360DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Simple360DataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_a;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTargetActor_360Simple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_CenterRoamComponent_MetaData[] = {
		{ "Category", "PointTargetActor_360Simple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_CenterRoamComponent = { "CenterRoamComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, CenterRoamComponent), Z_Construct_UClass_URoundSelfRoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_CenterRoamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_CenterRoamComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_UIClassPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_UIClassPtr = { "UIClassPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, UIClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_USimple360Widget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_UIClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_UIClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360SkyActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360SkyActor = { "Simple360SkyActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, Simple360SkyActor), Z_Construct_UClass_ASimple360SkyActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360SkyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360SkyActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360Widget = { "Simple360Widget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, Simple360Widget), Z_Construct_UClass_USimple360Widget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360DataAsset_MetaData[] = {
		{ "Category", "PointTargetActor_360Simple" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360DataAsset = { "Simple360DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, Simple360DataAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360DataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360DataAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_a_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_360Simple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_360Simple, a), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_a_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_a_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTargetActor_360Simple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_CenterRoamComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_UIClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360SkyActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_Simple360DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_360Simple_Statics::NewProp_a,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTargetActor_360Simple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTargetActor_360Simple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTargetActor_360Simple_Statics::ClassParams = {
		&APointTargetActor_360Simple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointTargetActor_360Simple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_360Simple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_360Simple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTargetActor_360Simple()
	{
		if (!Z_Registration_Info_UClass_APointTargetActor_360Simple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTargetActor_360Simple.OuterSingleton, Z_Construct_UClass_APointTargetActor_360Simple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTargetActor_360Simple.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTargetActor_360Simple>()
	{
		return APointTargetActor_360Simple::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTargetActor_360Simple);
	APointTargetActor_360Simple::~APointTargetActor_360Simple() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ScriptStructInfo[] = {
		{ FSimple360Asset::StaticStruct, Z_Construct_UScriptStruct_FSimple360Asset_Statics::NewStructOps, TEXT("Simple360Asset"), &Z_Registration_Info_UScriptStruct_Simple360Asset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimple360Asset), 2967759967U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTargetActor_360Simple, APointTargetActor_360Simple::StaticClass, TEXT("APointTargetActor_360Simple"), &Z_Registration_Info_UClass_APointTargetActor_360Simple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTargetActor_360Simple), 3273365280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_3234230788(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_360Simple_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
