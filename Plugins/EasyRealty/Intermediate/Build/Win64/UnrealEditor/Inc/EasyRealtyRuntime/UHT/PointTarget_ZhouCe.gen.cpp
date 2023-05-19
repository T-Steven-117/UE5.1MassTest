// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTarget_ZhouCe() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_ZhouCe();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTarget_ZhouCe_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPawn_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_ZhouCe();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_ZhouCe_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(URoamComponent_ZhouCe::execSetCenterPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_NewCenterLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterPoint(Z_Param_NewCenterLocation);
		P_NATIVE_END;
	}
	void URoamComponent_ZhouCe::StaticRegisterNativesURoamComponent_ZhouCe()
	{
		UClass* Class = URoamComponent_ZhouCe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCenterPoint", &URoamComponent_ZhouCe::execSetCenterPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics
	{
		struct RoamComponent_ZhouCe_eventSetCenterPoint_Parms
		{
			FVector NewCenterLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCenterLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::NewProp_NewCenterLocation = { "NewCenterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RoamComponent_ZhouCe_eventSetCenterPoint_Parms, NewCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::NewProp_NewCenterLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoamComponent_ZhouCe, nullptr, "SetCenterPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::RoamComponent_ZhouCe_eventSetCenterPoint_Parms), Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoamComponent_ZhouCe);
	UClass* Z_Construct_UClass_URoamComponent_ZhouCe_NoRegister()
	{
		return URoamComponent_ZhouCe::StaticClass();
	}
	struct Z_Construct_UClass_URoamComponent_ZhouCe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoamComponent_ZhouCe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URoamComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoamComponent_ZhouCe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoamComponent_ZhouCe_SetCenterPoint, "SetCenterPoint" }, // 2987217571
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_ZhouCe_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoamComponent_ZhouCe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoamComponent_ZhouCe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoamComponent_ZhouCe_Statics::ClassParams = {
		&URoamComponent_ZhouCe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoamComponent_ZhouCe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_ZhouCe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoamComponent_ZhouCe()
	{
		if (!Z_Registration_Info_UClass_URoamComponent_ZhouCe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoamComponent_ZhouCe.OuterSingleton, Z_Construct_UClass_URoamComponent_ZhouCe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoamComponent_ZhouCe.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URoamComponent_ZhouCe>()
	{
		return URoamComponent_ZhouCe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoamComponent_ZhouCe);
	URoamComponent_ZhouCe::~URoamComponent_ZhouCe() {}
	DEFINE_FUNCTION(APointTarget_ZhouCe::execSetCenterPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_NewCenterLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterPoint(Z_Param_NewCenterLocation);
		P_NATIVE_END;
	}
	void APointTarget_ZhouCe::StaticRegisterNativesAPointTarget_ZhouCe()
	{
		UClass* Class = APointTarget_ZhouCe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCenterPoint", &APointTarget_ZhouCe::execSetCenterPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics
	{
		struct PointTarget_ZhouCe_eventSetCenterPoint_Parms
		{
			FVector NewCenterLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCenterLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::NewProp_NewCenterLocation = { "NewCenterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointTarget_ZhouCe_eventSetCenterPoint_Parms, NewCenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::NewProp_NewCenterLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointTarget_ZhouCe, nullptr, "SetCenterPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::PointTarget_ZhouCe_eventSetCenterPoint_Parms), Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTarget_ZhouCe);
	UClass* Z_Construct_UClass_APointTarget_ZhouCe_NoRegister()
	{
		return APointTarget_ZhouCe::StaticClass();
	}
	struct Z_Construct_UClass_APointTarget_ZhouCe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoamComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoamComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RoamComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtyPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtyPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTarget_ZhouCe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointTarget_ZhouCe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointTarget_ZhouCe_SetCenterPoint, "SetCenterPoint" }, // 3755440399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_ZhouCe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponentClass_MetaData[] = {
		{ "Category", "PointTarget_ZhouCe" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponentClass = { "RoamComponentClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_ZhouCe, RoamComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_CenterPoint_MetaData[] = {
		{ "Category", "PointTarget_ZhouCe" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_ZhouCe, CenterPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_CenterPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_CenterPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponent_MetaData[] = {
		{ "Category", "PointTarget_ZhouCe" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponent = { "RoamComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_ZhouCe, RoamComponent), Z_Construct_UClass_URoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RealtyPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Niaokan/PointTarget_ZhouCe.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RealtyPawn = { "RealtyPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTarget_ZhouCe, RealtyPawn), Z_Construct_UClass_ARealtyPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RealtyPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RealtyPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTarget_ZhouCe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_CenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RoamComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTarget_ZhouCe_Statics::NewProp_RealtyPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTarget_ZhouCe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTarget_ZhouCe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTarget_ZhouCe_Statics::ClassParams = {
		&APointTarget_ZhouCe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APointTarget_ZhouCe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTarget_ZhouCe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTarget_ZhouCe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTarget_ZhouCe()
	{
		if (!Z_Registration_Info_UClass_APointTarget_ZhouCe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTarget_ZhouCe.OuterSingleton, Z_Construct_UClass_APointTarget_ZhouCe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTarget_ZhouCe.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTarget_ZhouCe>()
	{
		return APointTarget_ZhouCe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTarget_ZhouCe);
	APointTarget_ZhouCe::~APointTarget_ZhouCe() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_ZhouCe_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_ZhouCe_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoamComponent_ZhouCe, URoamComponent_ZhouCe::StaticClass, TEXT("URoamComponent_ZhouCe"), &Z_Registration_Info_UClass_URoamComponent_ZhouCe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoamComponent_ZhouCe), 998494699U) },
		{ Z_Construct_UClass_APointTarget_ZhouCe, APointTarget_ZhouCe::StaticClass, TEXT("APointTarget_ZhouCe"), &Z_Registration_Info_UClass_APointTarget_ZhouCe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTarget_ZhouCe), 3067361002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_ZhouCe_h_286548391(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_ZhouCe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Niaokan_PointTarget_ZhouCe_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
