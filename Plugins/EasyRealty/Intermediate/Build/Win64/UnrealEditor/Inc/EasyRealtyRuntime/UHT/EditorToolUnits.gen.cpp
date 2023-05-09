// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Road/EditorToolUnits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorToolUnits() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_AAreaNoiseActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_AAreaNoiseActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void AAreaNoiseActor::StaticRegisterNativesAAreaNoiseActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAreaNoiseActor);
	UClass* Z_Construct_UClass_AAreaNoiseActor_NoRegister()
	{
		return AAreaNoiseActor::StaticClass();
	}
	struct Z_Construct_UClass_AAreaNoiseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreaNoiseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaNoiseActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Road/EditorToolUnits.h" },
		{ "ModuleRelativePath", "Public/Road/EditorToolUnits.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaNoiseActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "AreaNoiseActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Road/EditorToolUnits.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaNoiseActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAreaNoiseActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaNoiseActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaNoiseActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreaNoiseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaNoiseActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreaNoiseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreaNoiseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAreaNoiseActor_Statics::ClassParams = {
		&AAreaNoiseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAreaNoiseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAreaNoiseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAreaNoiseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaNoiseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAreaNoiseActor()
	{
		if (!Z_Registration_Info_UClass_AAreaNoiseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAreaNoiseActor.OuterSingleton, Z_Construct_UClass_AAreaNoiseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAreaNoiseActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<AAreaNoiseActor>()
	{
		return AAreaNoiseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAreaNoiseActor);
	AAreaNoiseActor::~AAreaNoiseActor() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_EditorToolUnits_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_EditorToolUnits_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAreaNoiseActor, AAreaNoiseActor::StaticClass, TEXT("AAreaNoiseActor"), &Z_Registration_Info_UClass_AAreaNoiseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAreaNoiseActor), 373908075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_EditorToolUnits_h_759564312(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_EditorToolUnits_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_EditorToolUnits_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
