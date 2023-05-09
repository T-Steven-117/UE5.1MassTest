// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/RealtyPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyPlayerController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPlayerController();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPlayerController_NoRegister();
	EASYREALTYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyRealtyRuntime, nullptr, "OnBlendViewCompleteSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARealtyPlayerController::execOnSwitchComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARealtyPlayerController::execStopSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSequence();
		P_NATIVE_END;
	}
	void ARealtyPlayerController::StaticRegisterNativesARealtyPlayerController()
	{
		UClass* Class = ARealtyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSwitchComplete", &ARealtyPlayerController::execOnSwitchComplete },
			{ "StopSequence", &ARealtyPlayerController::execStopSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyPlayerController, nullptr, "OnSwitchComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyPlayerController, nullptr, "StopSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyPlayerController_StopSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyPlayerController_StopSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtyPlayerController);
	UClass* Z_Construct_UClass_ARealtyPlayerController_NoRegister()
	{
		return ARealtyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARealtyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePawnTargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UsePawnTargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwtichCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwtichCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CacheMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestoredTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestoredTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendViewCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendViewCompleteDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealtyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARealtyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARealtyPlayerController_OnSwitchComplete, "OnSwitchComplete" }, // 2960358937
		{ &Z_Construct_UFunction_ARealtyPlayerController_StopSequence, "StopSequence" }, // 228847113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Runtime/RealtyPlayerController.h" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_UsePawnTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_UsePawnTargetActor = { "UsePawnTargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPlayerController, UsePawnTargetActor), Z_Construct_UClass_APointTargetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_UsePawnTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_UsePawnTargetActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_SwtichCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_SwtichCurve = { "SwtichCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPlayerController, SwtichCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_SwtichCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_SwtichCurve_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_ValueProp = { "CacheMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_Key_KeyProp = { "CacheMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap = { "CacheMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPlayerController, CacheMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_RestoredTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_RestoredTarget = { "RestoredTarget", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPlayerController, RestoredTarget), Z_Construct_UClass_APointTargetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_RestoredTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_RestoredTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_OnBlendViewCompleteDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_OnBlendViewCompleteDelegate = { "OnBlendViewCompleteDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPlayerController, OnBlendViewCompleteDelegate), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnBlendViewCompleteSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_OnBlendViewCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_OnBlendViewCompleteDelegate_MetaData)) }; // 469243631
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtyPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_UsePawnTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_SwtichCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_CacheMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_RestoredTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPlayerController_Statics::NewProp_OnBlendViewCompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealtyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtyPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtyPlayerController_Statics::ClassParams = {
		&ARealtyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARealtyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARealtyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealtyPlayerController()
	{
		if (!Z_Registration_Info_UClass_ARealtyPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtyPlayerController.OuterSingleton, Z_Construct_UClass_ARealtyPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealtyPlayerController.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARealtyPlayerController>()
	{
		return ARealtyPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtyPlayerController);
	ARealtyPlayerController::~ARealtyPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealtyPlayerController, ARealtyPlayerController::StaticClass, TEXT("ARealtyPlayerController"), &Z_Registration_Info_UClass_ARealtyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtyPlayerController), 515446293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPlayerController_h_2342151914(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
