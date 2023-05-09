// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyUserWidget_BuildSystem() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidget_BuildSystem();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidget_BuildSystem_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(URealtyUserWidget_BuildSystem::execOnShowScenery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowScenery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidget_BuildSystem::execOnSwitchFloor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buildindex);
		P_GET_PROPERTY(FIntProperty,Z_Param_floorindex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchFloor(Z_Param_buildindex,Z_Param_floorindex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidget_BuildSystem::execOnSwitchBuild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchBuild(Z_Param_index);
		P_NATIVE_END;
	}
	void URealtyUserWidget_BuildSystem::StaticRegisterNativesURealtyUserWidget_BuildSystem()
	{
		UClass* Class = URealtyUserWidget_BuildSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnShowScenery", &URealtyUserWidget_BuildSystem::execOnShowScenery },
			{ "OnSwitchBuild", &URealtyUserWidget_BuildSystem::execOnSwitchBuild },
			{ "OnSwitchFloor", &URealtyUserWidget_BuildSystem::execOnSwitchFloor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidget_BuildSystem, nullptr, "OnShowScenery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics
	{
		struct RealtyUserWidget_BuildSystem_eventOnSwitchBuild_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidget_BuildSystem_eventOnSwitchBuild_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidget_BuildSystem, nullptr, "OnSwitchBuild", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::RealtyUserWidget_BuildSystem_eventOnSwitchBuild_Parms), Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics
	{
		struct RealtyUserWidget_BuildSystem_eventOnSwitchFloor_Parms
		{
			int32 buildindex;
			int32 floorindex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_buildindex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_floorindex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::NewProp_buildindex = { "buildindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidget_BuildSystem_eventOnSwitchFloor_Parms, buildindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::NewProp_floorindex = { "floorindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidget_BuildSystem_eventOnSwitchFloor_Parms, floorindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::NewProp_buildindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::NewProp_floorindex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidget_BuildSystem, nullptr, "OnSwitchFloor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::RealtyUserWidget_BuildSystem_eventOnSwitchFloor_Parms), Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyUserWidget_BuildSystem);
	UClass* Z_Construct_UClass_URealtyUserWidget_BuildSystem_NoRegister()
	{
		return URealtyUserWidget_BuildSystem::StaticClass();
	}
	struct Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreBuildIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreBuildIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreFloorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreFloorIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URealtyUserWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnShowScenery, "OnShowScenery" }, // 2530592691
		{ &Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchBuild, "OnSwitchBuild" }, // 2641726662
		{ &Z_Construct_UFunction_URealtyUserWidget_BuildSystem_OnSwitchFloor, "OnSwitchFloor" }, // 3509636974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreBuildIndex_MetaData[] = {
		{ "Category", "RealtyUserWidget_BuildSystem" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreBuildIndex = { "PreBuildIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyUserWidget_BuildSystem, PreBuildIndex), METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreBuildIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreBuildIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreFloorIndex_MetaData[] = {
		{ "Category", "RealtyUserWidget_BuildSystem" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreFloorIndex = { "PreFloorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyUserWidget_BuildSystem, PreFloorIndex), METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreFloorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreFloorIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreBuildIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::NewProp_PreFloorIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyUserWidget_BuildSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::ClassParams = {
		&URealtyUserWidget_BuildSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyUserWidget_BuildSystem()
	{
		if (!Z_Registration_Info_UClass_URealtyUserWidget_BuildSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyUserWidget_BuildSystem.OuterSingleton, Z_Construct_UClass_URealtyUserWidget_BuildSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyUserWidget_BuildSystem.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URealtyUserWidget_BuildSystem>()
	{
		return URealtyUserWidget_BuildSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyUserWidget_BuildSystem);
	URealtyUserWidget_BuildSystem::~URealtyUserWidget_BuildSystem() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_RealtyUserWidget_BuildSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_RealtyUserWidget_BuildSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyUserWidget_BuildSystem, URealtyUserWidget_BuildSystem::StaticClass, TEXT("URealtyUserWidget_BuildSystem"), &Z_Registration_Info_UClass_URealtyUserWidget_BuildSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyUserWidget_BuildSystem), 231706561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_RealtyUserWidget_BuildSystem_h_2114861051(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_RealtyUserWidget_BuildSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_RealtyUserWidget_BuildSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
