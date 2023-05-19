// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/PointTargetActor.h"
#include "Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTargetActor() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FName NAME_APointTargetActor_OnPossessThisPoint = FName(TEXT("OnPossessThisPoint"));
	void APointTargetActor::OnPossessThisPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_APointTargetActor_OnPossessThisPoint),NULL);
	}
	void APointTargetActor::StaticRegisterNativesAPointTargetActor()
	{
	}
	struct Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointTargetActor, nullptr, "OnPossessThisPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTargetActor);
	UClass* Z_Construct_UClass_APointTargetActor_NoRegister()
	{
		return APointTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_APointTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTransient_MetaData[];
#endif
		static void NewProp_IsTransient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTransient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSequenceSoftPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetSequenceSoftPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForSimpleUsage_MetaData[];
#endif
		static void NewProp_bForSimpleUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForSimpleUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelatedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RelatedWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointTargetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointTargetActor_OnPossessThisPoint, "OnPossessThisPoint" }, // 3262524685
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Runtime/PointTargetActor.h" },
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient_SetBit(void* Obj)
	{
		((APointTargetActor*)Obj)->IsTransient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient = { "IsTransient", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APointTargetActor), &Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient_SetBit, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, Name), METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_TargetSequenceSoftPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_TargetSequenceSoftPath = { "TargetSequenceSoftPath", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, TargetSequenceSoftPath), METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_TargetSequenceSoftPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_TargetSequenceSoftPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_PawnSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_PawnSequence = { "PawnSequence", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, PawnSequence), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_PawnSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_PawnSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_SequenceRate_MetaData[] = {
		{ "Category", "PointTargetActor" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_SequenceRate = { "SequenceRate", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, SequenceRate), METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_SequenceRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_SequenceRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_DataLayer_MetaData[] = {
		{ "Category", "PointTargetActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, DataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_DataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_DataLayer_MetaData)) }; // 1259195716
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage_MetaData[] = {
		{ "Category", "PointTargetActor" },
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage_SetBit(void* Obj)
	{
		((APointTargetActor*)Obj)->bForSimpleUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage = { "bForSimpleUsage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APointTargetActor), &Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_Statics::NewProp_RelatedWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/PointTargetActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_APointTargetActor_Statics::NewProp_RelatedWidget = { "RelatedWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor, RelatedWidget), Z_Construct_UClass_URealtyUserWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::NewProp_RelatedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::NewProp_RelatedWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTargetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_IsTransient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_TargetSequenceSoftPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_PawnSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_SequenceRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_bForSimpleUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_Statics::NewProp_RelatedWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTargetActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTargetActor_Statics::ClassParams = {
		&APointTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APointTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTargetActor()
	{
		if (!Z_Registration_Info_UClass_APointTargetActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTargetActor.OuterSingleton, Z_Construct_UClass_APointTargetActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTargetActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTargetActor>()
	{
		return APointTargetActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTargetActor);
	APointTargetActor::~APointTargetActor() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_PointTargetActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_PointTargetActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTargetActor, APointTargetActor::StaticClass, TEXT("APointTargetActor"), &Z_Registration_Info_UClass_APointTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTargetActor), 3315470139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_PointTargetActor_h_2039159132(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_PointTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_PointTargetActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
