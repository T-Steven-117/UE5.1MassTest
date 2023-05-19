// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Niaokan/PointTarget_YiHuWatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTarget_YiHuWatching() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_YiHuWatching();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_YiHuWatching_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_PawnMoving();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void APointTarget_YiHuWatching::StaticRegisterNativesAPointTarget_YiHuWatching()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTarget_YiHuWatching);
	UClass* Z_Construct_UClass_APointTarget_YiHuWatching_NoRegister()
	{
		return APointTarget_YiHuWatching::StaticClass();
	}
	struct Z_Construct_UClass_APointTarget_YiHuWatching_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TobeDog_MetaData[];
#endif
		static void NewProp_TobeDog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TobeDog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTarget_YiHuWatching_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor_PawnMoving,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_YiHuWatching_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ProjectContent/Niaokan/PointTarget_YiHuWatching.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_YiHuWatching.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_UIIndex_MetaData[] = {
		{ "Category", "PointTarget_YiHuWatching" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_YiHuWatching.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_UIIndex = { "UIIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_YiHuWatching, UIIndex), METADATA_PARAMS(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_UIIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_UIIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog_MetaData[] = {
		{ "Category", "PointTarget_YiHuWatching" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_YiHuWatching.h" },
	};
#endif
	void Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog_SetBit(void* Obj)
	{
		((APointTarget_YiHuWatching*)Obj)->TobeDog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog = { "TobeDog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APointTarget_YiHuWatching), &Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog_SetBit, METADATA_PARAMS(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTarget_YiHuWatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_UIIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_YiHuWatching_Statics::NewProp_TobeDog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTarget_YiHuWatching_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTarget_YiHuWatching>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTarget_YiHuWatching_Statics::ClassParams = {
		&APointTarget_YiHuWatching::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointTarget_YiHuWatching_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_YiHuWatching_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTarget_YiHuWatching()
	{
		if (!Z_Registration_Info_UClass_APointTarget_YiHuWatching.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTarget_YiHuWatching.OuterSingleton, Z_Construct_UClass_APointTarget_YiHuWatching_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTarget_YiHuWatching.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTarget_YiHuWatching>()
	{
		return APointTarget_YiHuWatching::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTarget_YiHuWatching);
	APointTarget_YiHuWatching::~APointTarget_YiHuWatching() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_YiHuWatching_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_YiHuWatching_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTarget_YiHuWatching, APointTarget_YiHuWatching::StaticClass, TEXT("APointTarget_YiHuWatching"), &Z_Registration_Info_UClass_APointTarget_YiHuWatching, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTarget_YiHuWatching), 2590346883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_YiHuWatching_h_3961464483(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_YiHuWatching_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_YiHuWatching_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
