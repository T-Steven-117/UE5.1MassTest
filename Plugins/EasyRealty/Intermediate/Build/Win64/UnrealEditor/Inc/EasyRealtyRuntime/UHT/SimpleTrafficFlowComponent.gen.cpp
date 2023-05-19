// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Road/SimpleTrafficFlowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTrafficFlowComponent() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_USimpleTrafficFlowComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_USimpleTrafficFlowComponent_NoRegister();
	EASYREALTYRUNTIME_API UEnum* Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCarInfo();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficInstance();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CarInfo;
class UScriptStruct* FCarInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CarInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CarInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCarInfo, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("CarInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CarInfo.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FCarInfo>()
{
	return FCarInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCarInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCarInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCarInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCarInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"CarInfo",
		sizeof(FCarInfo),
		alignof(FCarInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCarInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCarInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CarInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CarInfo.InnerSingleton, Z_Construct_UScriptStruct_FCarInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CarInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficWayType;
	static UEnum* ETrafficWayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrafficWayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrafficWayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("ETrafficWayType"));
		}
		return Z_Registration_Info_UEnum_ETrafficWayType.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UEnum* StaticEnum<ETrafficWayType>()
	{
		return ETrafficWayType_StaticEnum();
	}
	struct Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enumerators[] = {
		{ "ETrafficWayType::ETWT_OneWay", (int64)ETrafficWayType::ETWT_OneWay },
		{ "ETrafficWayType::ETWT_TwoWay", (int64)ETrafficWayType::ETWT_TwoWay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETWT_OneWay.DisplayName", "One-Way" },
		{ "ETWT_OneWay.Name", "ETrafficWayType::ETWT_OneWay" },
		{ "ETWT_TwoWay.DisplayName", "Two-Way" },
		{ "ETWT_TwoWay.Name", "ETrafficWayType::ETWT_TwoWay" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		"ETrafficWayType",
		"ETrafficWayType",
		Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType()
	{
		if (!Z_Registration_Info_UEnum_ETrafficWayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficWayType.InnerSingleton, Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrafficWayType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrafficInstance;
class UScriptStruct* FTrafficInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrafficInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrafficInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrafficInstance, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("TrafficInstance"));
	}
	return Z_Registration_Info_UScriptStruct_TrafficInstance.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FTrafficInstance>()
{
	return FTrafficInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrafficInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMaxLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineMaxLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CarInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CarInfos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CarInfosL_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarInfosL_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CarInfosL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrafficInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrafficInstance, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineMaxLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineMaxLength = { "SplineMaxLength", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrafficInstance, SplineMaxLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineMaxLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos_Inner = { "CarInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCarInfo, METADATA_PARAMS(nullptr, 0) }; // 903363271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos = { "CarInfos", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrafficInstance, CarInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos_MetaData)) }; // 903363271
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL_Inner = { "CarInfosL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCarInfo, METADATA_PARAMS(nullptr, 0) }; // 903363271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL = { "CarInfosL", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrafficInstance, CarInfosL), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL_MetaData)) }; // 903363271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrafficInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_SplineMaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewProp_CarInfosL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrafficInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"TrafficInstance",
		sizeof(FTrafficInstance),
		alignof(FTrafficInstance),
		Z_Construct_UScriptStruct_FTrafficInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrafficInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrafficInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_TrafficInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrafficInstance.InnerSingleton, Z_Construct_UScriptStruct_FTrafficInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrafficInstance.InnerSingleton;
	}
	void USimpleTrafficFlowComponent::StaticRegisterNativesUSimpleTrafficFlowComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleTrafficFlowComponent);
	UClass* Z_Construct_UClass_USimpleTrafficFlowComponent_NoRegister()
	{
		return USimpleTrafficFlowComponent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleTrafficFlowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficFlowUseSplineTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrafficFlowUseSplineTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarMeshClass_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarMeshClass_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CarMeshClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeanDistanceOfVehicles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeanDistanceOfVehicles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomRangeAddedToMeanDistanceOfVehicles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRangeAddedToMeanDistanceOfVehicles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedOfVehicles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedOfVehicles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LROffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LROffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CarScaling;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CarStaticMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CarStaticMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CarStaticMeshComponents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheWayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheWayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheWayType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Road/SimpleTrafficFlowComponent.h" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficFlowUseSplineTag_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficFlowUseSplineTag = { "TrafficFlowUseSplineTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, TrafficFlowUseSplineTag), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficFlowUseSplineTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficFlowUseSplineTag_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass_Inner = { "CarMeshClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass = { "CarMeshClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, CarMeshClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MeanDistanceOfVehicles_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MeanDistanceOfVehicles = { "MeanDistanceOfVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, MeanDistanceOfVehicles), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MeanDistanceOfVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MeanDistanceOfVehicles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_RandomRangeAddedToMeanDistanceOfVehicles_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_RandomRangeAddedToMeanDistanceOfVehicles = { "RandomRangeAddedToMeanDistanceOfVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, RandomRangeAddedToMeanDistanceOfVehicles), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_RandomRangeAddedToMeanDistanceOfVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_RandomRangeAddedToMeanDistanceOfVehicles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MoveSpeedOfVehicles_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MoveSpeedOfVehicles = { "MoveSpeedOfVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, MoveSpeedOfVehicles), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MoveSpeedOfVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MoveSpeedOfVehicles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType = { "WayType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, WayType), Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType, METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType_MetaData)) }; // 222267072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_LROffset_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_LROffset = { "LROffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, LROffset), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_LROffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_LROffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, ZOffset), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarScaling_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarScaling = { "CarScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, CarScaling), METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarScaling_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents_Inner = { "CarStaticMeshComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents_MetaData[] = {
		{ "Category", "SimpleTrafficFlowComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents = { "CarStaticMeshComponents", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, CarStaticMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType = { "CacheWayType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, CacheWayType), Z_Construct_UEnum_EasyRealtyRuntime_ETrafficWayType, METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType_MetaData)) }; // 222267072
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances_Inner = { "TrafficInstances", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTrafficInstance, METADATA_PARAMS(nullptr, 0) }; // 2672825831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Road/SimpleTrafficFlowComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances = { "TrafficInstances", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleTrafficFlowComponent, TrafficInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances_MetaData)) }; // 2672825831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficFlowUseSplineTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarMeshClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MeanDistanceOfVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_RandomRangeAddedToMeanDistanceOfVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_MoveSpeedOfVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_WayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_LROffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CarStaticMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_CacheWayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::NewProp_TrafficInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleTrafficFlowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::ClassParams = {
		&USimpleTrafficFlowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleTrafficFlowComponent()
	{
		if (!Z_Registration_Info_UClass_USimpleTrafficFlowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleTrafficFlowComponent.OuterSingleton, Z_Construct_UClass_USimpleTrafficFlowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleTrafficFlowComponent.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<USimpleTrafficFlowComponent>()
	{
		return USimpleTrafficFlowComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleTrafficFlowComponent);
	USimpleTrafficFlowComponent::~USimpleTrafficFlowComponent() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::EnumInfo[] = {
		{ ETrafficWayType_StaticEnum, TEXT("ETrafficWayType"), &Z_Registration_Info_UEnum_ETrafficWayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 222267072U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ScriptStructInfo[] = {
		{ FCarInfo::StaticStruct, Z_Construct_UScriptStruct_FCarInfo_Statics::NewStructOps, TEXT("CarInfo"), &Z_Registration_Info_UScriptStruct_CarInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCarInfo), 903363271U) },
		{ FTrafficInstance::StaticStruct, Z_Construct_UScriptStruct_FTrafficInstance_Statics::NewStructOps, TEXT("TrafficInstance"), &Z_Registration_Info_UScriptStruct_TrafficInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrafficInstance), 2672825831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleTrafficFlowComponent, USimpleTrafficFlowComponent::StaticClass, TEXT("USimpleTrafficFlowComponent"), &Z_Registration_Info_UClass_USimpleTrafficFlowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleTrafficFlowComponent), 2284275683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_2717793201(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Road_SimpleTrafficFlowComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
