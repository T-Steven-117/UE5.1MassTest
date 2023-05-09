// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/Simple360SkyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimple360SkyActor() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ASimple360SkyActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ASimple360SkyActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ASimple360SkyActor::execSet360Texture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_t);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Set360Texture(Z_Param_t);
		P_NATIVE_END;
	}
	void ASimple360SkyActor::StaticRegisterNativesASimple360SkyActor()
	{
		UClass* Class = ASimple360SkyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Set360Texture", &ASimple360SkyActor::execSet360Texture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics
	{
		struct Simple360SkyActor_eventSet360Texture_Parms
		{
			UTexture2D* t;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_t;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Simple360SkyActor_eventSet360Texture_Parms, t), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Simple360SkyActor_eventSet360Texture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Simple360SkyActor_eventSet360Texture_Parms), &Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360SkyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimple360SkyActor, nullptr, "Set360Texture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::Simple360SkyActor_eventSet360Texture_Parms), Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASimple360SkyActor_Set360Texture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimple360SkyActor_Set360Texture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimple360SkyActor);
	UClass* Z_Construct_UClass_ASimple360SkyActor_NoRegister()
	{
		return ASimple360SkyActor::StaticClass();
	}
	struct Z_Construct_UClass_ASimple360SkyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedSkyMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedSkyMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimple360SkyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASimple360SkyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimple360SkyActor_Set360Texture, "Set360Texture" }, // 426559557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimple360SkyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectContent/Xiangmu/Simple360SkyActor.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360SkyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyComp_MetaData[] = {
		{ "Category", "Simple360SkyActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360SkyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyComp = { "SkyComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASimple360SkyActor, SkyComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyMat_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360SkyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyMat = { "SkyMat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASimple360SkyActor, SkyMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_InstancedSkyMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/Simple360SkyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_InstancedSkyMaterial = { "InstancedSkyMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASimple360SkyActor, InstancedSkyMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_InstancedSkyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_InstancedSkyMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimple360SkyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_SkyMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimple360SkyActor_Statics::NewProp_InstancedSkyMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimple360SkyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimple360SkyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimple360SkyActor_Statics::ClassParams = {
		&ASimple360SkyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASimple360SkyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASimple360SkyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASimple360SkyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimple360SkyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimple360SkyActor()
	{
		if (!Z_Registration_Info_UClass_ASimple360SkyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimple360SkyActor.OuterSingleton, Z_Construct_UClass_ASimple360SkyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimple360SkyActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ASimple360SkyActor>()
	{
		return ASimple360SkyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimple360SkyActor);
	ASimple360SkyActor::~ASimple360SkyActor() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360SkyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360SkyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimple360SkyActor, ASimple360SkyActor::StaticClass, TEXT("ASimple360SkyActor"), &Z_Registration_Info_UClass_ASimple360SkyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimple360SkyActor), 3790014457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360SkyActor_h_2543386346(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360SkyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_Simple360SkyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
