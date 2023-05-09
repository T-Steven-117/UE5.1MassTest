// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointTargetActor_PawnMoving() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_PawnMoving();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_PawnMoving_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyPawn_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UMovingUIWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	void APointTargetActor_PawnMoving::StaticRegisterNativesAPointTargetActor_PawnMoving()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointTargetActor_PawnMoving);
	UClass* Z_Construct_UClass_APointTargetActor_PawnMoving_NoRegister()
	{
		return APointTargetActor_PawnMoving::StaticClass();
	}
	struct Z_Construct_UClass_APointTargetActor_PawnMoving_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapBound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MiniMapBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimapTex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapTex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachePawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachePawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pc_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_pc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MovingUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingUIClass2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MovingUIClass2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingUIPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingUIPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APointTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MiniMapBound_MetaData[] = {
		{ "Category", "PointTargetActor_PawnMoving" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MiniMapBound = { "MiniMapBound", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, MiniMapBound), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MiniMapBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MiniMapBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MinimapTex_MetaData[] = {
		{ "Category", "PointTargetActor_PawnMoving" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MinimapTex = { "MinimapTex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, MinimapTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MinimapTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MinimapTex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_CachePawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_CachePawn = { "CachePawn", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, CachePawn), Z_Construct_UClass_ARealtyPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_CachePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_CachePawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_pc_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_pc = { "pc", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, pc), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_pc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_pc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass = { "MovingUIClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, MovingUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovingUIWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass2_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass2 = { "MovingUIClass2", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, MovingUIClass2), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovingUIWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIPtr_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIPtr = { "MovingUIPtr", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointTargetActor_PawnMoving, MovingUIPtr), Z_Construct_UClass_UMovingUIWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MiniMapBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MinimapTex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_CachePawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_pc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIClass2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::NewProp_MovingUIPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointTargetActor_PawnMoving>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::ClassParams = {
		&APointTargetActor_PawnMoving::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointTargetActor_PawnMoving()
	{
		if (!Z_Registration_Info_UClass_APointTargetActor_PawnMoving.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointTargetActor_PawnMoving.OuterSingleton, Z_Construct_UClass_APointTargetActor_PawnMoving_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointTargetActor_PawnMoving.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<APointTargetActor_PawnMoving>()
	{
		return APointTargetActor_PawnMoving::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointTargetActor_PawnMoving);
	APointTargetActor_PawnMoving::~APointTargetActor_PawnMoving() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_PawnMoving_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_PawnMoving_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointTargetActor_PawnMoving, APointTargetActor_PawnMoving::StaticClass, TEXT("APointTargetActor_PawnMoving"), &Z_Registration_Info_UClass_APointTargetActor_PawnMoving, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointTargetActor_PawnMoving), 735343242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_PawnMoving_h_3690727199(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_PawnMoving_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_PointTargetActor_PawnMoving_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
