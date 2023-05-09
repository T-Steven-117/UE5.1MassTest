// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Component/CenterRoamComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCenterRoamComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UCenterRoamComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UCenterRoamComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void UCenterRoamComponent::StaticRegisterNativesUCenterRoamComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCenterRoamComponent);
	UClass* Z_Construct_UClass_UCenterRoamComponent_NoRegister()
	{
		return UCenterRoamComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCenterRoamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlaneZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlaneZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCenterRoamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCenterRoamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Component/CenterRoamComponent.h" },
		{ "ModuleRelativePath", "Public/Component/CenterRoamComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_MinPlaneZ_MetaData[] = {
		{ "Category", "CenterRoamComponent" },
		{ "ModuleRelativePath", "Public/Component/CenterRoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_MinPlaneZ = { "MinPlaneZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCenterRoamComponent, MinPlaneZ), METADATA_PARAMS(Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_MinPlaneZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_MinPlaneZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_CenterLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/CenterRoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCenterRoamComponent, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_CenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_CenterLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCenterRoamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_MinPlaneZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCenterRoamComponent_Statics::NewProp_CenterLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCenterRoamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCenterRoamComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCenterRoamComponent_Statics::ClassParams = {
		&UCenterRoamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCenterRoamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCenterRoamComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCenterRoamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCenterRoamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCenterRoamComponent()
	{
		if (!Z_Registration_Info_UClass_UCenterRoamComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCenterRoamComponent.OuterSingleton, Z_Construct_UClass_UCenterRoamComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCenterRoamComponent.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<UCenterRoamComponent>()
	{
		return UCenterRoamComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCenterRoamComponent);
	UCenterRoamComponent::~UCenterRoamComponent() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_CenterRoamComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_CenterRoamComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCenterRoamComponent, UCenterRoamComponent::StaticClass, TEXT("UCenterRoamComponent"), &Z_Registration_Info_UClass_UCenterRoamComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCenterRoamComponent), 3274351443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_CenterRoamComponent_h_183866077(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_CenterRoamComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_CenterRoamComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
