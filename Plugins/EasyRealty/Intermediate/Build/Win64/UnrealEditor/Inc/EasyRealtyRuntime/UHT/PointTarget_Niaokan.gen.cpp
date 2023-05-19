// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Niaokan/PointTarget_Niaokan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTarget_Niaokan() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_Niaokan();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_Niaokan_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void APointTarget_Niaokan::StaticRegisterNativesAPointTarget_Niaokan()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTarget_Niaokan);
	UClass* Z_Construct_UClass_APointTarget_Niaokan_NoRegister()
	{
		return APointTarget_Niaokan::StaticClass();
	}
	struct Z_Construct_UClass_APointTarget_Niaokan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoamComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoamComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoamComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoMoving_MetaData[];
#endif
		static void NewProp_bNoMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTarget_Niaokan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_Niaokan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Niaokan/PointTarget_Niaokan.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_Niaokan.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponentClass_MetaData[] = {
		{ "Category", "PointTarget_Niaokan" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_Niaokan.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponentClass = { "RoamComponentClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_Niaokan, RoamComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponent_MetaData[] = {
		{ "Category", "PointTarget_Niaokan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_Niaokan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponent = { "RoamComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_Niaokan, RoamComponent), Z_Construct_UClass_URoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving_MetaData[] = {
		{ "Category", "PointTarget_Niaokan" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_Niaokan.h" },
	};
#endif
	void Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving_SetBit(void* Obj)
	{
		((APointTarget_Niaokan*)Obj)->bNoMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving = { "bNoMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APointTarget_Niaokan), &Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTarget_Niaokan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_RoamComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_Niaokan_Statics::NewProp_bNoMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTarget_Niaokan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTarget_Niaokan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTarget_Niaokan_Statics::ClassParams = {
		&APointTarget_Niaokan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointTarget_Niaokan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_Niaokan_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTarget_Niaokan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_Niaokan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTarget_Niaokan()
	{
		if (!Z_Registration_Info_UClass_APointTarget_Niaokan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTarget_Niaokan.OuterSingleton, Z_Construct_UClass_APointTarget_Niaokan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTarget_Niaokan.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTarget_Niaokan>()
	{
		return APointTarget_Niaokan::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTarget_Niaokan);
	APointTarget_Niaokan::~APointTarget_Niaokan() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_Niaokan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_Niaokan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTarget_Niaokan, APointTarget_Niaokan::StaticClass, TEXT("APointTarget_Niaokan"), &Z_Registration_Info_UClass_APointTarget_Niaokan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTarget_Niaokan), 2314004202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_Niaokan_h_1711451224(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_Niaokan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_Niaokan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
