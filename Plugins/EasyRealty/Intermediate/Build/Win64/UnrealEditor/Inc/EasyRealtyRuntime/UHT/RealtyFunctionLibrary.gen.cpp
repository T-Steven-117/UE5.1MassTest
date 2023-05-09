// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/RealtyFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyFunctionLibrary();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	DEFINE_FUNCTION(URealtyFunctionLibrary::execIsInSeamlessTravel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URealtyFunctionLibrary::IsInSeamlessTravel(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execLoadMainMap)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::LoadMainMap(Z_Param_WorldContextObject,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execSetAtmosphereSunDiskColorScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_DirectionalLightComponent);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::SetAtmosphereSunDiskColorScale(Z_Param_WorldContextObject,Z_Param_DirectionalLightComponent,Z_Param_Out_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execSetSkyLightAngle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USkyLightComponent,Z_Param_SkyLightComp);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::SetSkyLightAngle(Z_Param_WorldContextObject,Z_Param_SkyLightComp,Z_Param_Out_angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execRealtyLoadMap)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::RealtyLoadMap(Z_Param_WorldContextObject,Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execGoNodeSimple)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedTime);
		P_GET_UBOOL(Z_Param_bRemainSequenceState);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::GoNodeSimple(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_SpeedTime,Z_Param_bRemainSequenceState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execGoNodeFast)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_ForceRefreshWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::GoNodeFast(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_ForceRefreshWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execGoBackNode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_ForceRefreshWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::GoBackNode(Z_Param_WorldContextObject,Z_Param_ForceRefreshWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execGoNode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_ForceRefreshWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::GoNode(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_ForceRefreshWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execStart)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::Start(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyFunctionLibrary::execReStart)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		URealtyFunctionLibrary::ReStart(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void URealtyFunctionLibrary::StaticRegisterNativesURealtyFunctionLibrary()
	{
		UClass* Class = URealtyFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoBackNode", &URealtyFunctionLibrary::execGoBackNode },
			{ "GoNode", &URealtyFunctionLibrary::execGoNode },
			{ "GoNodeFast", &URealtyFunctionLibrary::execGoNodeFast },
			{ "GoNodeSimple", &URealtyFunctionLibrary::execGoNodeSimple },
			{ "IsInSeamlessTravel", &URealtyFunctionLibrary::execIsInSeamlessTravel },
			{ "LoadMainMap", &URealtyFunctionLibrary::execLoadMainMap },
			{ "RealtyLoadMap", &URealtyFunctionLibrary::execRealtyLoadMap },
			{ "ReStart", &URealtyFunctionLibrary::execReStart },
			{ "SetAtmosphereSunDiskColorScale", &URealtyFunctionLibrary::execSetAtmosphereSunDiskColorScale },
			{ "SetSkyLightAngle", &URealtyFunctionLibrary::execSetSkyLightAngle },
			{ "Start", &URealtyFunctionLibrary::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics
	{
		struct RealtyFunctionLibrary_eventGoBackNode_Parms
		{
			const UObject* WorldContextObject;
			bool ForceRefreshWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ForceRefreshWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceRefreshWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoBackNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_ForceRefreshWidget_SetBit(void* Obj)
	{
		((RealtyFunctionLibrary_eventGoBackNode_Parms*)Obj)->ForceRefreshWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_ForceRefreshWidget = { "ForceRefreshWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealtyFunctionLibrary_eventGoBackNode_Parms), &Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_ForceRefreshWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::NewProp_ForceRefreshWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "GoBackNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::RealtyFunctionLibrary_eventGoBackNode_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics
	{
		struct RealtyFunctionLibrary_eventGoNode_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			bool ForceRefreshWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ForceRefreshWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceRefreshWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNode_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_ForceRefreshWidget_SetBit(void* Obj)
	{
		((RealtyFunctionLibrary_eventGoNode_Parms*)Obj)->ForceRefreshWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_ForceRefreshWidget = { "ForceRefreshWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealtyFunctionLibrary_eventGoNode_Parms), &Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_ForceRefreshWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::NewProp_ForceRefreshWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ForceRefreshWidget", "false" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "GoNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::RealtyFunctionLibrary_eventGoNode_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_GoNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_GoNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics
	{
		struct RealtyFunctionLibrary_eventGoNodeFast_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			bool ForceRefreshWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ForceRefreshWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceRefreshWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNodeFast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNodeFast_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_ForceRefreshWidget_SetBit(void* Obj)
	{
		((RealtyFunctionLibrary_eventGoNodeFast_Parms*)Obj)->ForceRefreshWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_ForceRefreshWidget = { "ForceRefreshWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealtyFunctionLibrary_eventGoNodeFast_Parms), &Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_ForceRefreshWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::NewProp_ForceRefreshWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ForceRefreshWidget", "false" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "GoNodeFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::RealtyFunctionLibrary_eventGoNodeFast_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics
	{
		struct RealtyFunctionLibrary_eventGoNodeSimple_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			float SpeedTime;
			bool bRemainSequenceState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedTime;
		static void NewProp_bRemainSequenceState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemainSequenceState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNodeSimple_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNodeSimple_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_SpeedTime = { "SpeedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventGoNodeSimple_Parms, SpeedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_bRemainSequenceState_SetBit(void* Obj)
	{
		((RealtyFunctionLibrary_eventGoNodeSimple_Parms*)Obj)->bRemainSequenceState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_bRemainSequenceState = { "bRemainSequenceState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealtyFunctionLibrary_eventGoNodeSimple_Parms), &Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_bRemainSequenceState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_SpeedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::NewProp_bRemainSequenceState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_bRemainSequenceState", "false" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "GoNodeSimple", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::RealtyFunctionLibrary_eventGoNodeSimple_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics
	{
		struct RealtyFunctionLibrary_eventIsInSeamlessTravel_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventIsInSeamlessTravel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RealtyFunctionLibrary_eventIsInSeamlessTravel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RealtyFunctionLibrary_eventIsInSeamlessTravel_Parms), &Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "IsInSeamlessTravel", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::RealtyFunctionLibrary_eventIsInSeamlessTravel_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics
	{
		struct RealtyFunctionLibrary_eventLoadMainMap_Parms
		{
			const UObject* WorldContextObject;
			FString URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventLoadMainMap_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventLoadMainMap_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "LoadMainMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::RealtyFunctionLibrary_eventLoadMainMap_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics
	{
		struct RealtyFunctionLibrary_eventRealtyLoadMap_Parms
		{
			const UObject* WorldContextObject;
			FString url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventRealtyLoadMap_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventRealtyLoadMap_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "RealtyLoadMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::RealtyFunctionLibrary_eventRealtyLoadMap_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics
	{
		struct RealtyFunctionLibrary_eventReStart_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventReStart_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "ReStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::RealtyFunctionLibrary_eventReStart_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_ReStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_ReStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics
	{
		struct RealtyFunctionLibrary_eventSetAtmosphereSunDiskColorScale_Parms
		{
			const UObject* WorldContextObject;
			UDirectionalLightComponent* DirectionalLightComponent;
			FLinearColor color;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionalLightComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetAtmosphereSunDiskColorScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_DirectionalLightComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_DirectionalLightComponent = { "DirectionalLightComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetAtmosphereSunDiskColorScale_Parms, DirectionalLightComponent), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_DirectionalLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_DirectionalLightComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetAtmosphereSunDiskColorScale_Parms, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_DirectionalLightComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "SetAtmosphereSunDiskColorScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::RealtyFunctionLibrary_eventSetAtmosphereSunDiskColorScale_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics
	{
		struct RealtyFunctionLibrary_eventSetSkyLightAngle_Parms
		{
			const UObject* WorldContextObject;
			USkyLightComponent* SkyLightComp;
			float angle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyLightComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetSkyLightAngle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_SkyLightComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_SkyLightComp = { "SkyLightComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetSkyLightAngle_Parms, SkyLightComp), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_SkyLightComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_SkyLightComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventSetSkyLightAngle_Parms, angle), METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_SkyLightComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::NewProp_angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "SetSkyLightAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::RealtyFunctionLibrary_eventSetSkyLightAngle_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics
	{
		struct RealtyFunctionLibrary_eventStart_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyFunctionLibrary_eventStart_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyFunctionLibrary, nullptr, "Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::RealtyFunctionLibrary_eventStart_Parms), Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyFunctionLibrary_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyFunctionLibrary_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyFunctionLibrary);
	UClass* Z_Construct_UClass_URealtyFunctionLibrary_NoRegister()
	{
		return URealtyFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URealtyFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealtyFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_GoBackNode, "GoBackNode" }, // 546969674
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_GoNode, "GoNode" }, // 299831505
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeFast, "GoNodeFast" }, // 570167624
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_GoNodeSimple, "GoNodeSimple" }, // 1270629884
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_IsInSeamlessTravel, "IsInSeamlessTravel" }, // 2649866106
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_LoadMainMap, "LoadMainMap" }, // 197762613
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_RealtyLoadMap, "RealtyLoadMap" }, // 349397923
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_ReStart, "ReStart" }, // 1618515408
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_SetAtmosphereSunDiskColorScale, "SetAtmosphereSunDiskColorScale" }, // 2249444298
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_SetSkyLightAngle, "SetSkyLightAngle" }, // 3448875330
		{ &Z_Construct_UFunction_URealtyFunctionLibrary_Start, "Start" }, // 1575289690
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Runtime/RealtyFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyFunctionLibrary_Statics::ClassParams = {
		&URealtyFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URealtyFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyFunctionLibrary.OuterSingleton, Z_Construct_UClass_URealtyFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyFunctionLibrary.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URealtyFunctionLibrary>()
	{
		return URealtyFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyFunctionLibrary);
	URealtyFunctionLibrary::~URealtyFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyFunctionLibrary, URealtyFunctionLibrary::StaticClass, TEXT("URealtyFunctionLibrary"), &Z_Registration_Info_UClass_URealtyFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyFunctionLibrary), 71458539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_4270818971(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
