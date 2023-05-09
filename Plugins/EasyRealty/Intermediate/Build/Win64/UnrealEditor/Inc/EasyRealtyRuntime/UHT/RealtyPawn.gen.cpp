// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/RealtyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPawn();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPawn_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPlayerController_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ARealtyPawn::execInitComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARealtyPawn::execSetCameraLagSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLagSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraLagSpeed(Z_Param_InLagSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARealtyPawn::execAddPawnWorldOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_DeltaLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPawnWorldOffset(Z_Param_DeltaLocation);
		P_NATIVE_END;
	}
	void ARealtyPawn::StaticRegisterNativesARealtyPawn()
	{
		UClass* Class = ARealtyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPawnWorldOffset", &ARealtyPawn::execAddPawnWorldOffset },
			{ "InitComp", &ARealtyPawn::execInitComp },
			{ "SetCameraLagSpeed", &ARealtyPawn::execSetCameraLagSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics
	{
		struct RealtyPawn_eventAddPawnWorldOffset_Parms
		{
			FVector DeltaLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyPawn_eventAddPawnWorldOffset_Parms, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::NewProp_DeltaLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyPawn, nullptr, "AddPawnWorldOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::RealtyPawn_eventAddPawnWorldOffset_Parms), Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARealtyPawn_InitComp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyPawn_InitComp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//360\n" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
		{ "ToolTip", "360" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyPawn_InitComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyPawn, nullptr, "InitComp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyPawn_InitComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPawn_InitComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyPawn_InitComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyPawn_InitComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics
	{
		struct RealtyPawn_eventSetCameraLagSpeed_Parms
		{
			float InLagSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLagSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::NewProp_InLagSpeed = { "InLagSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyPawn_eventSetCameraLagSpeed_Parms, InLagSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::NewProp_InLagSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyPawn, nullptr, "SetCameraLagSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::RealtyPawn_eventSetCameraLagSpeed_Parms), Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtyPawn);
	UClass* Z_Construct_UClass_ARealtyPawn_NoRegister()
	{
		return ARealtyPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARealtyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedRoamComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedRoamComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cachePC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cachePC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealtyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARealtyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARealtyPawn_AddPawnWorldOffset, "AddPawnWorldOffset" }, // 474106466
		{ &Z_Construct_UFunction_ARealtyPawn_InitComp, "InitComp" }, // 1521753774
		{ &Z_Construct_UFunction_ARealtyPawn_SetCameraLagSpeed, "SetCameraLagSpeed" }, // 3853046711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Runtime/RealtyPawn.h" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPawn_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "RealtyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RealtyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPawn_Statics::NewProp_ConnectedRoamComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyPawn_Statics::NewProp_ConnectedRoamComp = { "ConnectedRoamComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPawn, ConnectedRoamComp), Z_Construct_UClass_URoamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_ConnectedRoamComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_ConnectedRoamComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyPawn_Statics::NewProp_cachePC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARealtyPawn_Statics::NewProp_cachePC = { "cachePC", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyPawn, cachePC), Z_Construct_UClass_ARealtyPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_cachePC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::NewProp_cachePC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtyPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPawn_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPawn_Statics::NewProp_ConnectedRoamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyPawn_Statics::NewProp_cachePC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealtyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtyPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtyPawn_Statics::ClassParams = {
		&ARealtyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARealtyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARealtyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealtyPawn()
	{
		if (!Z_Registration_Info_UClass_ARealtyPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtyPawn.OuterSingleton, Z_Construct_UClass_ARealtyPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealtyPawn.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARealtyPawn>()
	{
		return ARealtyPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtyPawn);
	ARealtyPawn::~ARealtyPawn() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealtyPawn, ARealtyPawn::StaticClass, TEXT("ARealtyPawn"), &Z_Registration_Info_UClass_ARealtyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtyPawn), 3931721493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_3048825130(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
