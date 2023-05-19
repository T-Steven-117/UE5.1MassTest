// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Niaokan/RoundPointTargetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundPointTargetActor() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoundPointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoundPointTargetActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoundSelfRoamComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void ARoundPointTargetActor::StaticRegisterNativesARoundPointTargetActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoundPointTargetActor);
	UClass* Z_Construct_UClass_ARoundPointTargetActor_NoRegister()
	{
		return ARoundPointTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_ARoundPointTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoamComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoundPointTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPointTargetActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Niaokan/RoundPointTargetActor.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/RoundPointTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPointTargetActor_Statics::NewProp_RoamComponent_MetaData[] = {
		{ "Category", "RoundPointTargetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/RoundPointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARoundPointTargetActor_Statics::NewProp_RoamComponent = { "RoamComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoundPointTargetActor, RoamComponent), Z_Construct_UClass_URoundSelfRoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoundPointTargetActor_Statics::NewProp_RoamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPointTargetActor_Statics::NewProp_RoamComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundPointTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPointTargetActor_Statics::NewProp_RoamComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoundPointTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundPointTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoundPointTargetActor_Statics::ClassParams = {
		&ARoundPointTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoundPointTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPointTargetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoundPointTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPointTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoundPointTargetActor()
	{
		if (!Z_Registration_Info_UClass_ARoundPointTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoundPointTargetActor.OuterSingleton, Z_Construct_UClass_ARoundPointTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoundPointTargetActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARoundPointTargetActor>()
	{
		return ARoundPointTargetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundPointTargetActor);
	ARoundPointTargetActor::~ARoundPointTargetActor() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_RoundPointTargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_RoundPointTargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoundPointTargetActor, ARoundPointTargetActor::StaticClass, TEXT("ARoundPointTargetActor"), &Z_Registration_Info_UClass_ARoundPointTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundPointTargetActor), 909813189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_RoundPointTargetActor_h_3141065480(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_RoundPointTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_RoundPointTargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
