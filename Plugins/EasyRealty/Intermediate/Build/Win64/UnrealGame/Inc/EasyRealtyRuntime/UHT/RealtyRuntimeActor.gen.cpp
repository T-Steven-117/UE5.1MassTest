// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/Runtime/RealtyRuntimeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyRuntimeActor() {}
// Cross Module References
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyRuntimeActor();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_ARealtyRuntimeActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyAsset_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase_NoRegister();
	EASYREALTYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature();
	EASYREALTYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature();
	EASYREALTYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FUIMapping();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIMapping;
class UScriptStruct* FUIMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIMapping, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("UIMapping"));
	}
	return Z_Registration_Info_UScriptStruct_UIMapping.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FUIMapping>()
{
	return FUIMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uiPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_uiPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_NodeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIMapping, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_uiPtr_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_uiPtr = { "uiPtr", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIMapping, uiPtr), Z_Construct_UClass_URealtyUserWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_uiPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_uiPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_NodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIMapping_Statics::NewProp_uiPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"UIMapping",
		sizeof(FUIMapping),
		alignof(FUIMapping),
		Z_Construct_UScriptStruct_FUIMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_UIMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIMapping.InnerSingleton, Z_Construct_UScriptStruct_FUIMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIMapping.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics
	{
		struct _Script_EasyRealtyRuntime_eventOnRightPressed_Parms
		{
			bool bShouldClean;
		};
		static void NewProp_bShouldClean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::NewProp_bShouldClean_SetBit(void* Obj)
	{
		((_Script_EasyRealtyRuntime_eventOnRightPressed_Parms*)Obj)->bShouldClean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::NewProp_bShouldClean = { "bShouldClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EasyRealtyRuntime_eventOnRightPressed_Parms), &Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::NewProp_bShouldClean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::NewProp_bShouldClean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyRealtyRuntime, nullptr, "OnRightPressed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::_Script_EasyRealtyRuntime_eventOnRightPressed_Parms), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics
	{
		struct _Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms
		{
			bool bIsShow;
		};
		static void NewProp_bIsShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::NewProp_bIsShow_SetBit(void* Obj)
	{
		((_Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms*)Obj)->bIsShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::NewProp_bIsShow = { "bIsShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms), &Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::NewProp_bIsShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::NewProp_bIsShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyRealtyRuntime, nullptr, "OnLerpDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::_Script_EasyRealtyRuntime_eventOnLerpDelegate_Parms), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EasyRealtyRuntime, nullptr, "OnAfterClicked__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARealtyRuntimeActor::execGetTopUIPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealtyUserWidgetBase**)Z_Param__Result=P_THIS->GetTopUIPtr();
		P_NATIVE_END;
	}
	void ARealtyRuntimeActor::StaticRegisterNativesARealtyRuntimeActor()
	{
		UClass* Class = ARealtyRuntimeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTopUIPtr", &ARealtyRuntimeActor::execGetTopUIPtr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics
	{
		struct RealtyRuntimeActor_eventGetTopUIPtr_Parms
		{
			URealtyUserWidgetBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyRuntimeActor_eventGetTopUIPtr_Parms, ReturnValue), Z_Construct_UClass_URealtyUserWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARealtyRuntimeActor, nullptr, "GetTopUIPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::RealtyRuntimeActor_eventGetTopUIPtr_Parms), Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARealtyRuntimeActor);
	UClass* Z_Construct_UClass_ARealtyRuntimeActor_NoRegister()
	{
		return ARealtyRuntimeActor::StaticClass();
	}
	struct Z_Construct_UClass_ARealtyRuntimeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtyAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RealtyAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UIMappingStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMappingStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UIMappingStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachePreName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachePreName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseRangeLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseRangeLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRightPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLerpUI_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLerpUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AfterClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterClicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARealtyRuntimeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARealtyRuntimeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARealtyRuntimeActor_GetTopUIPtr, "GetTopUIPtr" }, // 1477112445
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Runtime/RealtyRuntimeActor.h" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_RealtyAsset_MetaData[] = {
		{ "Category", "RealtyRuntimeActor" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_RealtyAsset = { "RealtyAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, RealtyAsset), Z_Construct_UClass_URealtyAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_RealtyAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_RealtyAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack_Inner = { "UIMappingStack", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIMapping, METADATA_PARAMS(nullptr, 0) }; // 1825154972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack = { "UIMappingStack", nullptr, (EPropertyFlags)0x0010008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, UIMappingStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack_MetaData)) }; // 1825154972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CacheName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CacheName = { "CacheName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, CacheName), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CacheName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CacheName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CachePreName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CachePreName = { "CachePreName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, CachePreName), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CachePreName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CachePreName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_PreName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_PreName = { "PreName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, PreName), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_PreName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_PreName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CurName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CurName = { "CurName", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, CurName), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CurName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CurName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_ArmLenght_MetaData[] = {
		{ "Category", "HightValue" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_ArmLenght = { "ArmLenght", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, ArmLenght), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_ArmLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_ArmLenght_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CloseRangeLenght_MetaData[] = {
		{ "Category", "CloseRange" },
		{ "DisplayName", "\xe8\xbf\x91\xe6\x99\xaf\xe5\xb1\x82\xe7\xba\xa7\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CloseRangeLenght = { "CloseRangeLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, CloseRangeLenght), METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CloseRangeLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CloseRangeLenght_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnRightPressed_MetaData[] = {
		{ "Category", "RightPressed" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnRightPressed = { "OnRightPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, OnRightPressed), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnRightPressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnRightPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnRightPressed_MetaData)) }; // 1911304701
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnLerpUI_MetaData[] = {
		{ "Category", "OnLerpShowUI" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnLerpUI = { "OnLerpUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, OnLerpUI), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnLerpDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnLerpUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnLerpUI_MetaData)) }; // 2927702857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_AfterClicked_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/Runtime/RealtyRuntimeActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_AfterClicked = { "AfterClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARealtyRuntimeActor, AfterClicked), Z_Construct_UDelegateFunction_EasyRealtyRuntime_OnAfterClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_AfterClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_AfterClicked_MetaData)) }; // 3398644673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARealtyRuntimeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_RealtyAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_UIMappingStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CacheName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CachePreName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_PreName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CurName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_ArmLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_CloseRangeLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnRightPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_OnLerpUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARealtyRuntimeActor_Statics::NewProp_AfterClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARealtyRuntimeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARealtyRuntimeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARealtyRuntimeActor_Statics::ClassParams = {
		&ARealtyRuntimeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARealtyRuntimeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARealtyRuntimeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARealtyRuntimeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARealtyRuntimeActor()
	{
		if (!Z_Registration_Info_UClass_ARealtyRuntimeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARealtyRuntimeActor.OuterSingleton, Z_Construct_UClass_ARealtyRuntimeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARealtyRuntimeActor.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<ARealtyRuntimeActor>()
	{
		return ARealtyRuntimeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARealtyRuntimeActor);
	ARealtyRuntimeActor::~ARealtyRuntimeActor() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ScriptStructInfo[] = {
		{ FUIMapping::StaticStruct, Z_Construct_UScriptStruct_FUIMapping_Statics::NewStructOps, TEXT("UIMapping"), &Z_Registration_Info_UScriptStruct_UIMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIMapping), 1825154972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARealtyRuntimeActor, ARealtyRuntimeActor::StaticClass, TEXT("ARealtyRuntimeActor"), &Z_Registration_Info_UClass_ARealtyRuntimeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARealtyRuntimeActor), 3786017251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_2809125741(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_Runtime_RealtyRuntimeActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
