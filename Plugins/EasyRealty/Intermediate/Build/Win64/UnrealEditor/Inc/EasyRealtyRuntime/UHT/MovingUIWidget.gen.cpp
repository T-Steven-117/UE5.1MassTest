// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/ProjectContent/Xiangmu/MovingUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingUIWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UMovingUIWidget();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UMovingUIWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FName NAME_UMovingUIWidget_OnInit = FName(TEXT("OnInit"));
	void UMovingUIWidget::OnInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMovingUIWidget_OnInit),NULL);
	}
	void UMovingUIWidget::StaticRegisterNativesUMovingUIWidget()
	{
	}
	struct Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovingUIWidget, nullptr, "OnInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovingUIWidget_OnInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovingUIWidget_OnInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovingUIWidget);
	UClass* Z_Construct_UClass_UMovingUIWidget_NoRegister()
	{
		return UMovingUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMovingUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundHalfX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundHalfX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundHalfY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundHalfY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimapTex_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapTex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovingUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovingUIWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovingUIWidget_OnInit, "OnInit" }, // 1294869685
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingUIWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ProjectContent/Xiangmu/MovingUIWidget.h" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundCenter_MetaData[] = {
		{ "Category", "MovingUIWidget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundCenter = { "BoundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovingUIWidget, BoundCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfX_MetaData[] = {
		{ "Category", "MovingUIWidget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfX = { "BoundHalfX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovingUIWidget, BoundHalfX), METADATA_PARAMS(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfY_MetaData[] = {
		{ "Category", "MovingUIWidget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfY = { "BoundHalfY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovingUIWidget, BoundHalfY), METADATA_PARAMS(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_MinimapTex_MetaData[] = {
		{ "Category", "MovingUIWidget" },
		{ "ModuleRelativePath", "Public/ProjectContent/Xiangmu/MovingUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_MinimapTex = { "MinimapTex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovingUIWidget, MinimapTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_MinimapTex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_MinimapTex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovingUIWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_BoundHalfY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingUIWidget_Statics::NewProp_MinimapTex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovingUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovingUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovingUIWidget_Statics::ClassParams = {
		&UMovingUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovingUIWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovingUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovingUIWidget()
	{
		if (!Z_Registration_Info_UClass_UMovingUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovingUIWidget.OuterSingleton, Z_Construct_UClass_UMovingUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovingUIWidget.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<UMovingUIWidget>()
	{
		return UMovingUIWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovingUIWidget);
	UMovingUIWidget::~UMovingUIWidget() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_MovingUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_MovingUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovingUIWidget, UMovingUIWidget::StaticClass, TEXT("UMovingUIWidget"), &Z_Registration_Info_UClass_UMovingUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovingUIWidget), 330973725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_MovingUIWidget_h_2205712818(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_MovingUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_ProjectContent_Xiangmu_MovingUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
