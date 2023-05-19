// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Component/RoamComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoamComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPlayerController_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyRuntimeActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoamActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARoamActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URoamComponent_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UYWSpringArmComponent();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UYWSpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void UYWSpringArmComponent::StaticRegisterNativesUYWSpringArmComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYWSpringArmComponent);
	UClass* Z_Construct_UClass_UYWSpringArmComponent_NoRegister()
	{
		return UYWSpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UYWSpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYWSpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYWSpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Component/RoamComponent.h" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYWSpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYWSpringArmComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYWSpringArmComponent_Statics::ClassParams = {
		&UYWSpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UYWSpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYWSpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYWSpringArmComponent()
	{
		if (!Z_Registration_Info_UClass_UYWSpringArmComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYWSpringArmComponent.OuterSingleton, Z_Construct_UClass_UYWSpringArmComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYWSpringArmComponent.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<UYWSpringArmComponent>()
	{
		return UYWSpringArmComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYWSpringArmComponent);
	UYWSpringArmComponent::~UYWSpringArmComponent() {}
	void ARoamActor::StaticRegisterNativesARoamActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoamActor);
	UClass* Z_Construct_UClass_ARoamActor_NoRegister()
	{
		return ARoamActor::StaticClass();
	}
	struct Z_Construct_UClass_ARoamActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoamActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoamActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Component/RoamComponent.h" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoamActor_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "RoamActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoamActor_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARoamActor, SpringArmComp), Z_Construct_UClass_UYWSpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoamActor_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoamActor_Statics::NewProp_SpringArmComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoamActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoamActor_Statics::NewProp_SpringArmComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoamActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoamActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoamActor_Statics::ClassParams = {
		&ARoamActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoamActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoamActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoamActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoamActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoamActor()
	{
		if (!Z_Registration_Info_UClass_ARoamActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoamActor.OuterSingleton, Z_Construct_UClass_ARoamActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoamActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARoamActor>()
	{
		return ARoamActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoamActor);
	ARoamActor::~ARoamActor() {}
	void URoamComponent::StaticRegisterNativesURoamComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoamComponent);
	UClass* Z_Construct_UClass_URoamComponent_NoRegister()
	{
		return URoamComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachePC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachePC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePawnActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsePawnActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMinMaxLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMinMaxLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentBound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_double_click_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right_double_click_time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrginLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrginLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtyActorRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtyActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Component/RoamComponent.h" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_LastName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, LastName), METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_LastName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_CachePC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_CachePC = { "CachePC", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, CachePC), Z_Construct_UClass_ARealtyPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_CachePC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_CachePC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_UsePawnActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_UsePawnActor = { "UsePawnActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, UsePawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_UsePawnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_UsePawnActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleMinMaxLength_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleMinMaxLength = { "ScaleMinMaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, ScaleMinMaxLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleMinMaxLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleMinMaxLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_RotationClamp_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_RotationClamp = { "RotationClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, RotationClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_RotationClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_RotationClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_BoundCenter_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_BoundCenter = { "BoundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, BoundCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_BoundCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_BoundCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_ExtentBound_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_ExtentBound = { "ExtentBound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, ExtentBound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_ExtentBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_ExtentBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_Right_double_click_time_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_Right_double_click_time = { "Right_double_click_time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, Right_double_click_time), METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_Right_double_click_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_Right_double_click_time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleSpeed_MetaData[] = {
		{ "Category", "RoamComponent" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleSpeed = { "ScaleSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, ScaleSpeed), METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_OrginLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_OrginLocation = { "OrginLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, OrginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_OrginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_OrginLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_RA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_RA = { "RA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, RA), Z_Construct_UClass_ARoamActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_RA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_RA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveCurve = { "MoveCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, MoveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveFactor_MetaData[] = {
		{ "Comment", "//UPROPERTY() float UCurveFloat* RotateFactor = nullptr;\n" },
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
		{ "ToolTip", "UPROPERTY() float UCurveFloat* RotateFactor = nullptr;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveFactor = { "MoveFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, MoveFactor), METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, ScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, ScaleFactor), METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoamComponent_Statics::NewProp_RealtyActorRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Component/RoamComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoamComponent_Statics::NewProp_RealtyActorRef = { "RealtyActorRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URoamComponent, RealtyActorRef), Z_Construct_UClass_ARealtyRuntimeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::NewProp_RealtyActorRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::NewProp_RealtyActorRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_LastName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_CachePC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_UsePawnActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleMinMaxLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_RotationClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_BoundCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_ExtentBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_Right_double_click_time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_OrginLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_RA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_MoveFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_ScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoamComponent_Statics::NewProp_RealtyActorRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoamComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoamComponent_Statics::ClassParams = {
		&URoamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URoamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoamComponent()
	{
		if (!Z_Registration_Info_UClass_URoamComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoamComponent.OuterSingleton, Z_Construct_UClass_URoamComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoamComponent.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URoamComponent>()
	{
		return URoamComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoamComponent);
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_RoamComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_RoamComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYWSpringArmComponent, UYWSpringArmComponent::StaticClass, TEXT("UYWSpringArmComponent"), &Z_Registration_Info_UClass_UYWSpringArmComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYWSpringArmComponent), 3952778104U) },
		{ Z_Construct_UClass_ARoamActor, ARoamActor::StaticClass, TEXT("ARoamActor"), &Z_Registration_Info_UClass_ARoamActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoamActor), 3332400084U) },
		{ Z_Construct_UClass_URoamComponent, URoamComponent::StaticClass, TEXT("URoamComponent"), &Z_Registration_Info_UClass_URoamComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoamComponent), 4170293298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_RoamComponent_h_1777077268(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_RoamComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Component_RoamComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
