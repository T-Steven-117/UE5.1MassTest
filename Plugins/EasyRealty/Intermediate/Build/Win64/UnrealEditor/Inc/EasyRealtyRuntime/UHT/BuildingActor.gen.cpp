// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/BuildingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ABuildingActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ABuildingActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UFloorBoundboxComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UFloorBoundboxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void UFloorBoundboxComponent::StaticRegisterNativesUFloorBoundboxComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloorBoundboxComponent);
	UClass* Z_Construct_UClass_UFloorBoundboxComponent_NoRegister()
	{
		return UFloorBoundboxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFloorBoundboxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FloorInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloorBoundboxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShapeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBoundboxComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "ProjectContent/Xiangmu/BuildingActor.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "Category", "FloorBoundboxComponent" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloorBoundboxComponent, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "FloorBoundboxComponent" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloorBoundboxComponent, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_FloorInformation_MetaData[] = {
		{ "Category", "FloorBoundboxComponent" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_FloorInformation = { "FloorInformation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloorBoundboxComponent, FloorInformation), METADATA_PARAMS(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_FloorInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_FloorInformation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloorBoundboxComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_BoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloorBoundboxComponent_Statics::NewProp_FloorInformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloorBoundboxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorBoundboxComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorBoundboxComponent_Statics::ClassParams = {
		&UFloorBoundboxComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloorBoundboxComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBoundboxComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFloorBoundboxComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloorBoundboxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloorBoundboxComponent()
	{
		if (!Z_Registration_Info_UClass_UFloorBoundboxComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorBoundboxComponent.OuterSingleton, Z_Construct_UClass_UFloorBoundboxComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloorBoundboxComponent.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<UFloorBoundboxComponent>()
	{
		return UFloorBoundboxComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorBoundboxComponent);
	UFloorBoundboxComponent::~UFloorBoundboxComponent() {}
#if WITH_EDITOR
	DEFINE_FUNCTION(ABuildingActor::execGenerationFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerationFloor();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ABuildingActor::StaticRegisterNativesABuildingActor()
	{
#if WITH_EDITOR
		UClass* Class = ABuildingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerationFloor", &ABuildingActor::execGenerationFloor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "GenerationFloor" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingActor, nullptr, "GenerationFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingActor_GenerationFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingActor_GenerationFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingActor);
	UClass* Z_Construct_UClass_ABuildingActor_NoRegister()
	{
		return ABuildingActor::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Floors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Floors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Floors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanScenery_MetaData[];
#endif
		static void NewProp_CanScenery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanScenery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneryPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneryPoint;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FloorCount;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingActor_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ABuildingActor_GenerationFloor, "GenerationFloor" }, // 3203442802
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectContent/Xiangmu/BuildingActor.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_LookPoint_MetaData[] = {
		{ "Category", "BuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_LookPoint = { "LookPoint", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, LookPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_LookPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_LookPoint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors_Inner = { "Floors", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFloorBoundboxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors_MetaData[] = {
		{ "Category", "BuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors = { "Floors", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, Floors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery_MetaData[] = {
		{ "Category", "BuildingActor" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	void Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery_SetBit(void* Obj)
	{
		((ABuildingActor*)Obj)->CanScenery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery = { "CanScenery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABuildingActor), &Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_SceneryPoint_MetaData[] = {
		{ "Category", "BuildingActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_SceneryPoint = { "SceneryPoint", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, SceneryPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_SceneryPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_SceneryPoint_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorStep_MetaData[] = {
		{ "Category", "GenerationFloor" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorStep = { "FloorStep", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, FloorStep), METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorCount_MetaData[] = {
		{ "Category", "GenerationFloor" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/BuildingActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorCount = { "FloorCount", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingActor, FloorCount), METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_LookPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_Floors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_CanScenery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_SceneryPoint,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingActor_Statics::NewProp_FloorCount,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingActor_Statics::ClassParams = {
		&ABuildingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ABuildingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingActor()
	{
		if (!Z_Registration_Info_UClass_ABuildingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingActor.OuterSingleton, Z_Construct_UClass_ABuildingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ABuildingActor>()
	{
		return ABuildingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingActor);
	ABuildingActor::~ABuildingActor() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_BuildingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_BuildingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloorBoundboxComponent, UFloorBoundboxComponent::StaticClass, TEXT("UFloorBoundboxComponent"), &Z_Registration_Info_UClass_UFloorBoundboxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorBoundboxComponent), 36794263U) },
		{ Z_Construct_UClass_ABuildingActor, ABuildingActor::StaticClass, TEXT("ABuildingActor"), &Z_Registration_Info_UClass_ABuildingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingActor), 337284718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_BuildingActor_h_1005532597(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_BuildingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_BuildingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
