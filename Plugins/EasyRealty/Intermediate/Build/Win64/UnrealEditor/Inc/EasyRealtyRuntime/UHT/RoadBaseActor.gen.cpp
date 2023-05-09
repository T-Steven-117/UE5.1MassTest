// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Road/RoadBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadBaseActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoadBaseActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoadBaseActor_NoRegister();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAreaRandomParam();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNoiseInfo();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadInfo();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadInfoParam();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadType();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTransformParam();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTransformStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoadInfoParam;
class UScriptStruct* FRoadInfoParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoadInfoParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoadInfoParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadInfoParam, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("RoadInfoParam"));
	}
	return Z_Registration_Info_UScriptStruct_RoadInfoParam.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FRoadInfoParam>()
{
	return FRoadInfoParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoadInfoParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseArea_MetaData[];
#endif
		static void NewProp_bUseArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRandomRotation_MetaData[];
#endif
		static void NewProp_IsRandomRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRandomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadInfoParam>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea_MetaData[] = {
		{ "Category", "RoadInfoParam" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea_SetBit(void* Obj)
	{
		((FRoadInfoParam*)Obj)->bUseArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea = { "bUseArea", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRoadInfoParam), &Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "RoadInfoParam" },
		{ "EditCondition", "CanProbability || bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfoParam, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation_MetaData[] = {
		{ "Category", "RoadInfoParam" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation_SetBit(void* Obj)
	{
		((FRoadInfoParam*)Obj)->IsRandomRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation = { "IsRandomRotation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRoadInfoParam), &Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_AdditionalYaw_MetaData[] = {
		{ "Category", "RoadInfoParam" },
		{ "EditCondition", "!IsRandomRotation" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_AdditionalYaw = { "AdditionalYaw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfoParam, AdditionalYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_AdditionalYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_AdditionalYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_ScaleRange_MetaData[] = {
		{ "Category", "RoadInfoParam" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfoParam, ScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_ScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_ScaleRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoadInfoParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_bUseArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_Probability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_IsRandomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_AdditionalYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewProp_ScaleRange,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoadInfoParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"RoadInfoParam",
		sizeof(FRoadInfoParam),
		alignof(FRoadInfoParam),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfoParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoadInfoParam()
	{
		if (!Z_Registration_Info_UScriptStruct_RoadInfoParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoadInfoParam.InnerSingleton, Z_Construct_UScriptStruct_FRoadInfoParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoadInfoParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnTransformParam;
class UScriptStruct* FSpawnTransformParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTransformParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnTransformParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnTransformParam, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("SpawnTransformParam"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnTransformParam.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FSpawnTransformParam>()
{
	return FSpawnTransformParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnTransformParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tf_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[];
#endif
		static void NewProp_LR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnTransformParam>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_tf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_tf = { "tf", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpawnTransformParam, tf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_tf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_tf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR_SetBit(void* Obj)
	{
		((FSpawnTransformParam*)Obj)->LR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR = { "LR", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpawnTransformParam), &Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_tf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewProp_LR,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"SpawnTransformParam",
		sizeof(FSpawnTransformParam),
		alignof(FSpawnTransformParam),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnTransformParam()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnTransformParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnTransformParam.InnerSingleton, Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnTransformParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnTransformStruct;
class UScriptStruct* FSpawnTransformStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTransformStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnTransformStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnTransformStruct, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("SpawnTransformStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnTransformStruct.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FSpawnTransformStruct>()
{
	return FSpawnTransformStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnTransformStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"SpawnTransformStruct",
		sizeof(FSpawnTransformStruct),
		alignof(FSpawnTransformStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnTransformStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnTransformStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnTransformStruct.InnerSingleton, Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnTransformStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoadInfo;
class UScriptStruct* FRoadInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoadInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoadInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadInfo, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("RoadInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RoadInfo.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FRoadInfo>()
{
	return FRoadInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoadInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseArea_MetaData[];
#endif
		static void NewProp_bUseArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseArea;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshs_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CullDistance;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoadInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea_MetaData[] = {
		{ "Category", "RoadInfo" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea_SetBit(void* Obj)
	{
		((FRoadInfo*)Obj)->bUseArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea = { "bUseArea", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRoadInfo), &Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_ValueProp = { "StaticMeshs", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRoadInfoParam, METADATA_PARAMS(nullptr, 0) }; // 412195885
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_Key_KeyProp = { "StaticMeshs_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_MetaData[] = {
		{ "Category", "RoadInfo" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs = { "StaticMeshs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfo, StaticMeshs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_MetaData)) }; // 412195885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "RoadInfo" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfo, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_CullDistance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps_Inner = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadInfo, MeshComps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoadInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_bUseArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_StaticMeshs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_CullDistance,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadInfo_Statics::NewProp_MeshComps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoadInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"RoadInfo",
		sizeof(FRoadInfo),
		alignof(FRoadInfo),
		Z_Construct_UScriptStruct_FRoadInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoadInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RoadInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoadInfo.InnerSingleton, Z_Construct_UScriptStruct_FRoadInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoadInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AreaRandomParam;
class UScriptStruct* FAreaRandomParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AreaRandomParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AreaRandomParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAreaRandomParam, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("AreaRandomParam"));
	}
	return Z_Registration_Info_UScriptStruct_AreaRandomParam.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FAreaRandomParam>()
{
	return FAreaRandomParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAreaRandomParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRandomRotationArea_MetaData[];
#endif
		static void NewProp_IsRandomRotationArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRandomRotationArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalYawArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalYawArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaRandomParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAreaRandomParam>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea_MetaData[] = {
		{ "Category", "AreaRandomParam" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea_SetBit(void* Obj)
	{
		((FAreaRandomParam*)Obj)->IsRandomRotationArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea = { "IsRandomRotationArea", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAreaRandomParam), &Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_AdditionalYawArea_MetaData[] = {
		{ "Category", "AreaRandomParam" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_AdditionalYawArea = { "AdditionalYawArea", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAreaRandomParam, AdditionalYawArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_AdditionalYawArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_AdditionalYawArea_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAreaRandomParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_IsRandomRotationArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewProp_AdditionalYawArea,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAreaRandomParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"AreaRandomParam",
		sizeof(FAreaRandomParam),
		alignof(FAreaRandomParam),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAreaRandomParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAreaRandomParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AreaRandomParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AreaRandomParam.InnerSingleton, Z_Construct_UScriptStruct_FAreaRandomParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AreaRandomParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NoiseInfo;
class UScriptStruct* FNoiseInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NoiseInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NoiseInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNoiseInfo, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("NoiseInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NoiseInfo.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FNoiseInfo>()
{
	return FNoiseInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNoiseInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_H_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_H;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawResult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawResult;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadInfos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNoiseInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_NoiseCenter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_NoiseCenter = { "NoiseCenter", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseInfo, NoiseCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_NoiseCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_NoiseCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseInfo, W), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_W_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_H_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseInfo, H), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_H_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_YawResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_YawResult = { "YawResult", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseInfo, YawResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_YawResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_YawResult_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_RoadInfos_MetaData[] = {
		{ "Category", "NoiseInfo" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_RoadInfos = { "RoadInfos", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNoiseInfo, RoadInfos), Z_Construct_UScriptStruct_FRoadInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_RoadInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_RoadInfos_MetaData)) }; // 1975111829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNoiseInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_NoiseCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_H,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_YawResult,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewProp_RoadInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNoiseInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"NoiseInfo",
		sizeof(FNoiseInfo),
		alignof(FNoiseInfo),
		Z_Construct_UScriptStruct_FNoiseInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNoiseInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNoiseInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNoiseInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NoiseInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NoiseInfo.InnerSingleton, Z_Construct_UScriptStruct_FNoiseInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NoiseInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoadType;
class UScriptStruct* FRoadType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoadType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoadType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadType, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("RoadType"));
	}
	return Z_Registration_Info_UScriptStruct_RoadType.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FRoadType>()
{
	return FRoadType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoadType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseArea_MetaData[];
#endif
		static void NewProp_bUseArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineCollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LineCollisionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraceZOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadInfos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoadType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadType>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea_MetaData[] = {
		{ "Category", "RoadType" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea_SetBit(void* Obj)
	{
		((FRoadType*)Obj)->bUseArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea = { "bUseArea", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRoadType), &Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RoadType" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "RoadType" },
		{ "EditCondition", "!bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, Step), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Step_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "RoadType" },
		{ "EditCondition", "!bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_LineCollisionRadius_MetaData[] = {
		{ "Category", "RoadType" },
		{ "EditCondition", "!bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_LineCollisionRadius = { "LineCollisionRadius", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, LineCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_LineCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_LineCollisionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_TraceZOffset_MetaData[] = {
		{ "Category", "RoadType" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_TraceZOffset = { "TraceZOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, TraceZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_TraceZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_TraceZOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_RoadInfos_MetaData[] = {
		{ "Category", "RoadType" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_RoadInfos = { "RoadInfos", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoadType, RoadInfos), Z_Construct_UScriptStruct_FRoadInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_RoadInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_RoadInfos_MetaData)) }; // 1975111829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoadType_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_bUseArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Step,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_LineCollisionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_TraceZOffset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoadType_Statics::NewProp_RoadInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoadType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"RoadType",
		sizeof(FRoadType),
		alignof(FRoadType),
		Z_Construct_UScriptStruct_FRoadType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoadType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoadType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoadType()
	{
		if (!Z_Registration_Info_UScriptStruct_RoadType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoadType.InnerSingleton, Z_Construct_UScriptStruct_FRoadType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoadType.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ARoadBaseActor::execBuildAreaEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildAreaEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoadBaseActor::execBuildLineEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildLineEvent();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ARoadBaseActor::StaticRegisterNativesARoadBaseActor()
	{
#if WITH_EDITOR
		UClass* Class = ARoadBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildAreaEvent", &ARoadBaseActor::execBuildAreaEvent },
			{ "BuildLineEvent", &ARoadBaseActor::execBuildLineEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoadBaseActor, nullptr, "BuildAreaEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoadBaseActor, nullptr, "BuildLineEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoadBaseActor);
	UClass* Z_Construct_UClass_ARoadBaseActor_NoRegister()
	{
		return ARoadBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_ARoadBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadTypes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransformS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransformS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnTransformS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseInfoS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseInfoS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseArea_MetaData[];
#endif
		static void NewProp_bUseArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadStep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AreaRadStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AreaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thresholdR_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_thresholdR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaRandomParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaRandomParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveRadius;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoadBaseActor_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ARoadBaseActor_BuildAreaEvent, "BuildAreaEvent" }, // 1847395530
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ARoadBaseActor_BuildLineEvent, "BuildLineEvent" }, // 3112077738
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Road/RoadBaseActor.h" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "RoadBaseActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes_Inner = { "RoadTypes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRoadType, METADATA_PARAMS(nullptr, 0) }; // 10376345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes = { "RoadTypes", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, RoadTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes_MetaData)) }; // 10376345
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS_Inner = { "SpawnTransformS", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpawnTransformStruct, METADATA_PARAMS(nullptr, 0) }; // 3226018525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS = { "SpawnTransformS", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, SpawnTransformS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS_MetaData)) }; // 3226018525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseInfoS_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseInfoS = { "NoiseInfoS", nullptr, (EPropertyFlags)0x0010008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, NoiseInfoS), Z_Construct_UScriptStruct_FNoiseInfo, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseInfoS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseInfoS_MetaData)) }; // 268815224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	void Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea_SetBit(void* Obj)
	{
		((ARoadBaseActor*)Obj)->bUseArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea = { "bUseArea", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARoadBaseActor), &Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, TraceLength), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaIntensity_MetaData[] = {
		{ "Category", "Tree" },
		{ "Comment", "/**\n\x09* \xe9\x9d\xa2\xe7\xa7\xaf\xe5\xaf\x86\xe5\xba\xa6\n\x09*/" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
		{ "ToolTip", "\xe9\x9d\xa2\xe7\xa7\xaf\xe5\xaf\x86\xe5\xba\xa6" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaIntensity = { "AreaIntensity", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, AreaIntensity), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadStep_MetaData[] = {
		{ "Category", "Tree" },
		{ "Comment", "/**\n\x09* \xe9\x9d\xa2\xe7\xa7\xaf\xe6\xad\xa5\xe8\xbf\x9b\n\x09*/" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
		{ "ToolTip", "\xe9\x9d\xa2\xe7\xa7\xaf\xe6\xad\xa5\xe8\xbf\x9b" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadStep = { "AreaRadStep", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, AreaRadStep), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadius_MetaData[] = {
		{ "Category", "Tree" },
		{ "Comment", "/**\n\x09*\xe5\x89\x94\xe9\x99\xa4\xe8\x8c\x83\xe5\x9b\xb4\xe5\xaf\x86\xe5\xba\xa6\n\x09*/" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
		{ "ToolTip", "\xe5\x89\x94\xe9\x99\xa4\xe8\x8c\x83\xe5\x9b\xb4\xe5\xaf\x86\xe5\xba\xa6" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, AreaRadius), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_thresholdR_MetaData[] = {
		{ "Category", "Tree" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_thresholdR = { "thresholdR", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, thresholdR), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_thresholdR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_thresholdR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseResolution_MetaData[] = {
		{ "Category", "Tree" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseResolution = { "NoiseResolution", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, NoiseResolution), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseMat_MetaData[] = {
		{ "Category", "Tree" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseMat = { "NoiseMat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, NoiseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRandomParams_MetaData[] = {
		{ "Category", "Tree" },
		{ "EditCondition", "bUseArea" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRandomParams = { "AreaRandomParams", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, AreaRandomParams), Z_Construct_UScriptStruct_FAreaRandomParam, METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRandomParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRandomParams_MetaData)) }; // 3302325544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RemoveRadius_MetaData[] = {
		{ "Category", "RoadBaseActor" },
		{ "ModuleRelativePath", "Public/Road/RoadBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RemoveRadius = { "RemoveRadius", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoadBaseActor, RemoveRadius), METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RemoveRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RemoveRadius_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoadBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RoadTypes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_SpawnTransformS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseInfoS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_bUseArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_thresholdR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_NoiseMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_AreaRandomParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoadBaseActor_Statics::NewProp_RemoveRadius,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoadBaseActor_Statics::ClassParams = {
		&ARoadBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ARoadBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoadBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadBaseActor()
	{
		if (!Z_Registration_Info_UClass_ARoadBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadBaseActor.OuterSingleton, Z_Construct_UClass_ARoadBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoadBaseActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARoadBaseActor>()
	{
		return ARoadBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadBaseActor);
	ARoadBaseActor::~ARoadBaseActor() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ScriptStructInfo[] = {
		{ FRoadInfoParam::StaticStruct, Z_Construct_UScriptStruct_FRoadInfoParam_Statics::NewStructOps, TEXT("RoadInfoParam"), &Z_Registration_Info_UScriptStruct_RoadInfoParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadInfoParam), 412195885U) },
		{ FSpawnTransformParam::StaticStruct, Z_Construct_UScriptStruct_FSpawnTransformParam_Statics::NewStructOps, TEXT("SpawnTransformParam"), &Z_Registration_Info_UScriptStruct_SpawnTransformParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnTransformParam), 1128350918U) },
		{ FSpawnTransformStruct::StaticStruct, Z_Construct_UScriptStruct_FSpawnTransformStruct_Statics::NewStructOps, TEXT("SpawnTransformStruct"), &Z_Registration_Info_UScriptStruct_SpawnTransformStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnTransformStruct), 3226018525U) },
		{ FRoadInfo::StaticStruct, Z_Construct_UScriptStruct_FRoadInfo_Statics::NewStructOps, TEXT("RoadInfo"), &Z_Registration_Info_UScriptStruct_RoadInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadInfo), 1975111829U) },
		{ FAreaRandomParam::StaticStruct, Z_Construct_UScriptStruct_FAreaRandomParam_Statics::NewStructOps, TEXT("AreaRandomParam"), &Z_Registration_Info_UScriptStruct_AreaRandomParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAreaRandomParam), 3302325544U) },
		{ FNoiseInfo::StaticStruct, Z_Construct_UScriptStruct_FNoiseInfo_Statics::NewStructOps, TEXT("NoiseInfo"), &Z_Registration_Info_UScriptStruct_NoiseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNoiseInfo), 268815224U) },
		{ FRoadType::StaticStruct, Z_Construct_UScriptStruct_FRoadType_Statics::NewStructOps, TEXT("RoadType"), &Z_Registration_Info_UScriptStruct_RoadType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadType), 10376345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoadBaseActor, ARoadBaseActor::StaticClass, TEXT("ARoadBaseActor"), &Z_Registration_Info_UClass_ARoadBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadBaseActor), 3780346472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_663210863(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_RoadBaseActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
