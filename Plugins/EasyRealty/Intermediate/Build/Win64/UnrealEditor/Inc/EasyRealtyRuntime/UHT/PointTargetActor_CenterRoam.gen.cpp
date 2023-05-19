// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/PointTargetActor_CenterRoam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTargetActor_CenterRoam() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_CenterRoam();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_CenterRoam_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UCenterRoamComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void APointTargetActor_CenterRoam::StaticRegisterNativesAPointTargetActor_CenterRoam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTargetActor_CenterRoam);
	UClass* Z_Construct_UClass_APointTargetActor_CenterRoam_NoRegister()
	{
		return APointTargetActor_CenterRoam::StaticClass();
	}
	struct Z_Construct_UClass_APointTargetActor_CenterRoam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterRoamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CenterRoamComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Xiangmu/PointTargetActor_CenterRoam.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_CenterRoam.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::NewProp_CenterRoamComponent_MetaData[] = {
		{ "Category", "PointTargetActor_CenterRoam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_CenterRoam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::NewProp_CenterRoamComponent = { "CenterRoamComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_CenterRoam, CenterRoamComponent), Z_Construct_UClass_UCenterRoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::NewProp_CenterRoamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::NewProp_CenterRoamComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::NewProp_CenterRoamComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTargetActor_CenterRoam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::ClassParams = {
		&APointTargetActor_CenterRoam::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTargetActor_CenterRoam()
	{
		if (!Z_Registration_Info_UClass_APointTargetActor_CenterRoam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTargetActor_CenterRoam.OuterSingleton, Z_Construct_UClass_APointTargetActor_CenterRoam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTargetActor_CenterRoam.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTargetActor_CenterRoam>()
	{
		return APointTargetActor_CenterRoam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTargetActor_CenterRoam);
	APointTargetActor_CenterRoam::~APointTargetActor_CenterRoam() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_CenterRoam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_CenterRoam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTargetActor_CenterRoam, APointTargetActor_CenterRoam::StaticClass, TEXT("APointTargetActor_CenterRoam"), &Z_Registration_Info_UClass_APointTargetActor_CenterRoam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTargetActor_CenterRoam), 1647576864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_CenterRoam_h_2292261015(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_CenterRoam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_CenterRoam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
