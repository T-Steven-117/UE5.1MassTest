// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/PreviewScene/PreviewSceneEnviromentActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewSceneEnviromentActor() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APreviewSceneEnviromentActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APreviewSceneEnviromentActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void APreviewSceneEnviromentActor::StaticRegisterNativesAPreviewSceneEnviromentActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreviewSceneEnviromentActor);
	UClass* Z_Construct_UClass_APreviewSceneEnviromentActor_NoRegister()
	{
		return APreviewSceneEnviromentActor::StaticClass();
	}
	struct Z_Construct_UClass_APreviewSceneEnviromentActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PreviewScene/PreviewSceneEnviromentActor.h" },
		{ "ModuleRelativePath", "Public/PreviewScene/PreviewSceneEnviromentActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_SkyComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PreviewScene/PreviewSceneEnviromentActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_SkyComponent = { "SkyComponent", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APreviewSceneEnviromentActor, SkyComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_SkyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_SkyComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_MID_MetaData[] = {
		{ "ModuleRelativePath", "Public/PreviewScene/PreviewSceneEnviromentActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APreviewSceneEnviromentActor, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_MID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_MID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_SkyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::NewProp_MID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreviewSceneEnviromentActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::ClassParams = {
		&APreviewSceneEnviromentActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APreviewSceneEnviromentActor()
	{
		if (!Z_Registration_Info_UClass_APreviewSceneEnviromentActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreviewSceneEnviromentActor.OuterSingleton, Z_Construct_UClass_APreviewSceneEnviromentActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreviewSceneEnviromentActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APreviewSceneEnviromentActor>()
	{
		return APreviewSceneEnviromentActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreviewSceneEnviromentActor);
	APreviewSceneEnviromentActor::~APreviewSceneEnviromentActor() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_PreviewScene_PreviewSceneEnviromentActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_PreviewScene_PreviewSceneEnviromentActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreviewSceneEnviromentActor, APreviewSceneEnviromentActor::StaticClass, TEXT("APreviewSceneEnviromentActor"), &Z_Registration_Info_UClass_APreviewSceneEnviromentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreviewSceneEnviromentActor), 1792243598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_PreviewScene_PreviewSceneEnviromentActor_h_3342518171(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_PreviewScene_PreviewSceneEnviromentActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_PreviewScene_PreviewSceneEnviromentActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
