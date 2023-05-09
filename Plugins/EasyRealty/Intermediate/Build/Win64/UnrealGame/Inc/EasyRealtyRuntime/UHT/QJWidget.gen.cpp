// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/UMG/QJWidget.h"
#include "SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQJWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UQJWidget();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_UQJWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UQJWidget::execOnFinish)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_yaw);
		P_GET_STRUCT(FSoftObjectPath,Z_Param_tt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinish(Z_Param_yaw,Z_Param_tt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execMouseLeave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseLeave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execMouseMove)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseMove(Z_Param_Out_delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execMouseUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execMouseDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MouseDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execSetTexture2)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_t);
		P_GET_PROPERTY(FFloatProperty,Z_Param_yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture2(Z_Param_t,Z_Param_yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execSetTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_t);
		P_GET_PROPERTY(FFloatProperty,Z_Param_yaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PawnPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_t,Z_Param_yaw,Z_Param_PawnPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execUpdate)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_Out_ViewSize,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQJWidget::execGetBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetBrush();
		P_NATIVE_END;
	}
	void UQJWidget::StaticRegisterNativesUQJWidget()
	{
		UClass* Class = UQJWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrush", &UQJWidget::execGetBrush },
			{ "MouseDown", &UQJWidget::execMouseDown },
			{ "MouseLeave", &UQJWidget::execMouseLeave },
			{ "MouseMove", &UQJWidget::execMouseMove },
			{ "MouseUp", &UQJWidget::execMouseUp },
			{ "OnFinish", &UQJWidget::execOnFinish },
			{ "SetTexture", &UQJWidget::execSetTexture },
			{ "SetTexture2", &UQJWidget::execSetTexture2 },
			{ "Update", &UQJWidget::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQJWidget_GetBrush_Statics
	{
		struct QJWidget_eventGetBrush_Parms
		{
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQJWidget_GetBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventGetBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 608192703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_GetBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_GetBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_GetBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_GetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "GetBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_GetBrush_Statics::QJWidget_eventGetBrush_Parms), Z_Construct_UFunction_UQJWidget_GetBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_GetBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_GetBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_GetBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_GetBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_GetBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_MouseDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_MouseDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_MouseDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "MouseDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_MouseDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_MouseDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_MouseDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_MouseLeave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_MouseLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_MouseLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "MouseLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_MouseLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_MouseLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_MouseLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_MouseMove_Statics
	{
		struct QJWidget_eventMouseMove_Parms
		{
			FVector2D delta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_MouseMove_Statics::NewProp_delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQJWidget_MouseMove_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventMouseMove_Parms, delta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::NewProp_delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::NewProp_delta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_MouseMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_MouseMove_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_MouseMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_MouseMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "MouseMove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::QJWidget_eventMouseMove_Parms), Z_Construct_UFunction_UQJWidget_MouseMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_MouseMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_MouseMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_MouseUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_MouseUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_MouseUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "MouseUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_MouseUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_MouseUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_MouseUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_MouseUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_OnFinish_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct QJWidget_eventOnFinish_Parms
		{
			float yaw;
			FSoftObjectPath tt;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yaw;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQJWidget_OnFinish_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventOnFinish_Parms, yaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQJWidget_OnFinish_Statics::NewProp_tt = { "tt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventOnFinish_Parms, tt), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_OnFinish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_OnFinish_Statics::NewProp_yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_OnFinish_Statics::NewProp_tt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_OnFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_OnFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "OnFinish", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_OnFinish_Statics::QJWidget_eventOnFinish_Parms), Z_Construct_UFunction_UQJWidget_OnFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_OnFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_OnFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_OnFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_OnFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_OnFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_SetTexture_Statics
	{
		struct QJWidget_eventSetTexture_Parms
		{
			UTexture2D* t;
			float yaw;
			float PawnPitch;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_t;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yaw;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PawnPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventSetTexture_Parms, t), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventSetTexture_Parms, yaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_PawnPitch = { "PawnPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventSetTexture_Parms, PawnPitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_SetTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_SetTexture_Statics::NewProp_PawnPitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "SetTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_SetTexture_Statics::QJWidget_eventSetTexture_Parms), Z_Construct_UFunction_UQJWidget_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_SetTexture2_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct QJWidget_eventSetTexture2_Parms
		{
			FSoftObjectPath t;
			float yaw;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_t;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventSetTexture2_Parms, t), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::NewProp_yaw = { "yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventSetTexture2_Parms, yaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::NewProp_yaw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "SetTexture2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::QJWidget_eventSetTexture2_Parms), Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_SetTexture2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_SetTexture2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQJWidget_Update_Statics
	{
		struct QJWidget_eventUpdate_Parms
		{
			FVector2D ViewSize;
			float InDeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_ViewSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_ViewSize = { "ViewSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventUpdate_Parms, ViewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_ViewSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_ViewSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_InDeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QJWidget_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_InDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_InDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQJWidget_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_ViewSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQJWidget_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQJWidget_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQJWidget_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQJWidget, nullptr, "Update", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQJWidget_Update_Statics::QJWidget_eventUpdate_Parms), Z_Construct_UFunction_UQJWidget_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQJWidget_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQJWidget_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQJWidget_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQJWidget_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQJWidget);
	UClass* Z_Construct_UClass_UQJWidget_NoRegister()
	{
		return UQJWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQJWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t2d_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_t2d;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQJWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQJWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQJWidget_GetBrush, "GetBrush" }, // 1468671832
		{ &Z_Construct_UFunction_UQJWidget_MouseDown, "MouseDown" }, // 782075094
		{ &Z_Construct_UFunction_UQJWidget_MouseLeave, "MouseLeave" }, // 492527432
		{ &Z_Construct_UFunction_UQJWidget_MouseMove, "MouseMove" }, // 1853093254
		{ &Z_Construct_UFunction_UQJWidget_MouseUp, "MouseUp" }, // 3358652183
		{ &Z_Construct_UFunction_UQJWidget_OnFinish, "OnFinish" }, // 2321550410
		{ &Z_Construct_UFunction_UQJWidget_SetTexture, "SetTexture" }, // 2170826016
		{ &Z_Construct_UFunction_UQJWidget_SetTexture2, "SetTexture2" }, // 1960945970
		{ &Z_Construct_UFunction_UQJWidget_Update, "Update" }, // 4111653579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQJWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG/QJWidget.h" },
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQJWidget_Statics::NewProp_t2d_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/QJWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQJWidget_Statics::NewProp_t2d = { "t2d", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQJWidget, t2d), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQJWidget_Statics::NewProp_t2d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQJWidget_Statics::NewProp_t2d_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQJWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQJWidget_Statics::NewProp_t2d,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQJWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQJWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQJWidget_Statics::ClassParams = {
		&UQJWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQJWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQJWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQJWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQJWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQJWidget()
	{
		if (!Z_Registration_Info_UClass_UQJWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQJWidget.OuterSingleton, Z_Construct_UClass_UQJWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQJWidget.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<UQJWidget>()
	{
		return UQJWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQJWidget);
	UQJWidget::~UQJWidget() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_QJWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_QJWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQJWidget, UQJWidget::StaticClass, TEXT("UQJWidget"), &Z_Registration_Info_UClass_UQJWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQJWidget), 2160495138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_QJWidget_h_2691270179(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_QJWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_QJWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
