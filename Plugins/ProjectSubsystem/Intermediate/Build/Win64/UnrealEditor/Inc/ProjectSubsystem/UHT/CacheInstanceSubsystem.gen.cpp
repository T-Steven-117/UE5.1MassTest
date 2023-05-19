// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSubsystem/Public/CacheInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheInstanceSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UCacheInstanceSubsystem();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UCacheInstanceSubsystem_NoRegister();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UStrategyPageViewModel_NoRegister();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UUserTopPageViewModelBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectSubsystem();
// End Cross Module References
	DEFINE_FUNCTION(UCacheInstanceSubsystem::execSpawnMApActor)
	{
		P_GET_OBJECT(UClass,Z_Param_staticclass);
		P_GET_STRUCT(FTransform,Z_Param_ts);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_MapActorRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMApActor(Z_Param_staticclass,Z_Param_ts,Z_Param_Out_MapActorRef);
		P_NATIVE_END;
	}
	struct CacheInstanceSubsystem_eventBP_Tick_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UCacheInstanceSubsystem_BP_Tick = FName(TEXT("BP_Tick"));
	void UCacheInstanceSubsystem::BP_Tick(float DeltaTime)
	{
		CacheInstanceSubsystem_eventBP_Tick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UCacheInstanceSubsystem_BP_Tick),&Parms);
	}
	static FName NAME_UCacheInstanceSubsystem_OnExcuteBeginPlay = FName(TEXT("OnExcuteBeginPlay"));
	void UCacheInstanceSubsystem::OnExcuteBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCacheInstanceSubsystem_OnExcuteBeginPlay),NULL);
	}
	static FName NAME_UCacheInstanceSubsystem_OnExcuteDestruct = FName(TEXT("OnExcuteDestruct"));
	void UCacheInstanceSubsystem::OnExcuteDestruct()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCacheInstanceSubsystem_OnExcuteDestruct),NULL);
	}
	void UCacheInstanceSubsystem::StaticRegisterNativesUCacheInstanceSubsystem()
	{
		UClass* Class = UCacheInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnMApActor", &UCacheInstanceSubsystem::execSpawnMApActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CacheInstanceSubsystem_eventBP_Tick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance|CacheInstance" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheInstanceSubsystem, nullptr, "BP_Tick", nullptr, nullptr, sizeof(CacheInstanceSubsystem_eventBP_Tick_Parms), Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance|CacheInstance" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheInstanceSubsystem, nullptr, "OnExcuteBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance|CacheInstance" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheInstanceSubsystem, nullptr, "OnExcuteDestruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics
	{
		struct CacheInstanceSubsystem_eventSpawnMApActor_Parms
		{
			TSubclassOf<AActor>  staticclass;
			FTransform ts;
			AActor* MapActorRef;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_staticclass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ts;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_staticclass = { "staticclass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CacheInstanceSubsystem_eventSpawnMApActor_Parms, staticclass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_ts = { "ts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CacheInstanceSubsystem_eventSpawnMApActor_Parms, ts), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_MapActorRef = { "MapActorRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CacheInstanceSubsystem_eventSpawnMApActor_Parms, MapActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_staticclass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_ts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::NewProp_MapActorRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance|CacheInstance" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCacheInstanceSubsystem, nullptr, "SpawnMApActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::CacheInstanceSubsystem_eventSpawnMApActor_Parms), Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCacheInstanceSubsystem);
	UClass* Z_Construct_UClass_UCacheInstanceSubsystem_NoRegister()
	{
		return UCacheInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCacheInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheStrategyPage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CacheStrategyPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheUserTopPage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CacheUserTopPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCacheInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectSubsystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCacheInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCacheInstanceSubsystem_BP_Tick, "BP_Tick" }, // 4080839612
		{ &Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteBeginPlay, "OnExcuteBeginPlay" }, // 1052563649
		{ &Z_Construct_UFunction_UCacheInstanceSubsystem_OnExcuteDestruct, "OnExcuteDestruct" }, // 3594932296
		{ &Z_Construct_UFunction_UCacheInstanceSubsystem_SpawnMApActor, "SpawnMApActor" }, // 479188843
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Cache" },
		{ "IncludePath", "CacheInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheStrategyPage_MetaData[] = {
		{ "Category", "Cache|View" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheStrategyPage = { "CacheStrategyPage", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCacheInstanceSubsystem, CacheStrategyPage), Z_Construct_UClass_UStrategyPageViewModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheStrategyPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheStrategyPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheUserTopPage_MetaData[] = {
		{ "Category", "Cache|View" },
		{ "ModuleRelativePath", "Public/CacheInstanceSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheUserTopPage = { "CacheUserTopPage", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCacheInstanceSubsystem, CacheUserTopPage), Z_Construct_UClass_UUserTopPageViewModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheUserTopPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheUserTopPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCacheInstanceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheStrategyPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCacheInstanceSubsystem_Statics::NewProp_CacheUserTopPage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCacheInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCacheInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCacheInstanceSubsystem_Statics::ClassParams = {
		&UCacheInstanceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCacheInstanceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::PropPointers),
		0,
		0x041000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCacheInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCacheInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCacheInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCacheInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UCacheInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCacheInstanceSubsystem.OuterSingleton;
	}
	template<> PROJECTSUBSYSTEM_API UClass* StaticClass<UCacheInstanceSubsystem>()
	{
		return UCacheInstanceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCacheInstanceSubsystem);
	UCacheInstanceSubsystem::~UCacheInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCacheInstanceSubsystem, UCacheInstanceSubsystem::StaticClass, TEXT("UCacheInstanceSubsystem"), &Z_Registration_Info_UClass_UCacheInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCacheInstanceSubsystem), 3938072836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_1845931914(TEXT("/Script/ProjectSubsystem"),
		Z_CompiledInDeferFile_FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_Public_CacheInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
