// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/UMG/RealtyUserWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyUserWidgetBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase_NoRegister();
	EASYREALTYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "OnRealtyDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execGetLastUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URealtyUserWidgetBase**)Z_Param__Result=P_THIS->GetLastUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execOnSelfAddToViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelfAddToViewport_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execAddMySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMySelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execShowMySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMySelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execSelfHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelfHidden_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execUnBindEventToWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_Binder);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnBindEventToWidget_Implementation(Z_Param_Binder,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URealtyUserWidgetBase::execBindEventToWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_Binder);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindEventToWidget_Implementation(Z_Param_Binder,Z_Param_FunctionName);
		P_NATIVE_END;
	}
	struct RealtyUserWidgetBase_eventBindEventToWidget_Parms
	{
		UObject* Binder;
		FName FunctionName;
	};
	struct RealtyUserWidgetBase_eventUnBindEventToWidget_Parms
	{
		UObject* Binder;
		FName FunctionName;
	};
	static FName NAME_URealtyUserWidgetBase_BindEventToWidget = FName(TEXT("BindEventToWidget"));
	void URealtyUserWidgetBase::BindEventToWidget(UObject* Binder, FName FunctionName)
	{
		RealtyUserWidgetBase_eventBindEventToWidget_Parms Parms;
		Parms.Binder=Binder;
		Parms.FunctionName=FunctionName;
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_BindEventToWidget),&Parms);
	}
	static FName NAME_URealtyUserWidgetBase_OnSelfAddToViewport = FName(TEXT("OnSelfAddToViewport"));
	void URealtyUserWidgetBase::OnSelfAddToViewport()
	{
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_OnSelfAddToViewport),NULL);
	}
	static FName NAME_URealtyUserWidgetBase_PostProcess = FName(TEXT("PostProcess"));
	void URealtyUserWidgetBase::PostProcess()
	{
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_PostProcess),NULL);
	}
	static FName NAME_URealtyUserWidgetBase_SelfHidden = FName(TEXT("SelfHidden"));
	void URealtyUserWidgetBase::SelfHidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_SelfHidden),NULL);
	}
	static FName NAME_URealtyUserWidgetBase_ShowMySelf = FName(TEXT("ShowMySelf"));
	void URealtyUserWidgetBase::ShowMySelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_ShowMySelf),NULL);
	}
	static FName NAME_URealtyUserWidgetBase_UnBindEventToWidget = FName(TEXT("UnBindEventToWidget"));
	void URealtyUserWidgetBase::UnBindEventToWidget(UObject* Binder, FName FunctionName)
	{
		RealtyUserWidgetBase_eventUnBindEventToWidget_Parms Parms;
		Parms.Binder=Binder;
		Parms.FunctionName=FunctionName;
		ProcessEvent(FindFunctionChecked(NAME_URealtyUserWidgetBase_UnBindEventToWidget),&Parms);
	}
	void URealtyUserWidgetBase::StaticRegisterNativesURealtyUserWidgetBase()
	{
		UClass* Class = URealtyUserWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMySelf", &URealtyUserWidgetBase::execAddMySelf },
			{ "BindEventToWidget", &URealtyUserWidgetBase::execBindEventToWidget },
			{ "GetLastUI", &URealtyUserWidgetBase::execGetLastUI },
			{ "OnSelfAddToViewport", &URealtyUserWidgetBase::execOnSelfAddToViewport },
			{ "SelfHidden", &URealtyUserWidgetBase::execSelfHidden },
			{ "ShowMySelf", &URealtyUserWidgetBase::execShowMySelf },
			{ "UnBindEventToWidget", &URealtyUserWidgetBase::execUnBindEventToWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "AddMySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Binder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::NewProp_Binder = { "Binder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidgetBase_eventBindEventToWidget_Parms, Binder), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidgetBase_eventBindEventToWidget_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::NewProp_Binder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtyWidgetFunction" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "BindEventToWidget", nullptr, nullptr, sizeof(RealtyUserWidgetBase_eventBindEventToWidget_Parms), Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics
	{
		struct RealtyUserWidgetBase_eventGetLastUI_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidgetBase_eventGetLastUI_Parms, ReturnValue), Z_Construct_UClass_URealtyUserWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "GetLastUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::RealtyUserWidgetBase_eventGetLastUI_Parms), Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "OnSelfAddToViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "PostProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtyWidgetFunction" },
		{ "Comment", "//\xe5\x8b\xbe\xe9\x80\x89\xe8\x8a\x82\xe7\x82\xb9\xe5\x90\x8e\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe9\x9a\x90\xe8\x97\x8f\xe8\x8a\x82\xe7\x82\xb9UI\xef\xbc\x8c\xe5\xbb\xba\xe8\xae\xae\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8d\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
		{ "ToolTip", "\xe5\x8b\xbe\xe9\x80\x89\xe8\x8a\x82\xe7\x82\xb9\xe5\x90\x8e\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4\xe9\x9a\x90\xe8\x97\x8f\xe8\x8a\x82\xe7\x82\xb9UI\xef\xbc\x8c\xe5\xbb\xba\xe8\xae\xae\xe8\x93\x9d\xe5\x9b\xbe\xe9\x87\x8d\xe8\xbd\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "SelfHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "ShowMySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Binder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::NewProp_Binder = { "Binder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidgetBase_eventUnBindEventToWidget_Parms, Binder), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RealtyUserWidgetBase_eventUnBindEventToWidget_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::NewProp_Binder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "RealtyWidgetFunction" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URealtyUserWidgetBase, nullptr, "UnBindEventToWidget", nullptr, nullptr, sizeof(RealtyUserWidgetBase_eventUnBindEventToWidget_Parms), Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyUserWidgetBase);
	UClass* Z_Construct_UClass_URealtyUserWidgetBase_NoRegister()
	{
		return URealtyUserWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_URealtyUserWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_image;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextStringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextStringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NextStringArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAdd_MetaData[];
#endif
		static void NewProp_bAutoAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyUserWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URealtyUserWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_AddMySelf, "AddMySelf" }, // 467292795
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_BindEventToWidget, "BindEventToWidget" }, // 4131059658
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_GetLastUI, "GetLastUI" }, // 2521108524
		{ &Z_Construct_UDelegateFunction_URealtyUserWidgetBase_OnRealtyDelegate__DelegateSignature, "OnRealtyDelegate__DelegateSignature" }, // 755428188
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_OnSelfAddToViewport, "OnSelfAddToViewport" }, // 632127340
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_PostProcess, "PostProcess" }, // 1637921984
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_SelfHidden, "SelfHidden" }, // 3437480695
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_ShowMySelf, "ShowMySelf" }, // 2450635995
		{ &Z_Construct_UFunction_URealtyUserWidgetBase_UnBindEventToWidget, "UnBindEventToWidget" }, // 3032497127
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UMG/RealtyUserWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_image_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_image = { "image", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyUserWidgetBase, image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_image_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray_Inner = { "NextStringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray_MetaData[] = {
		{ "Category", "RealtyUserWidgetBase" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray = { "NextStringArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyUserWidgetBase, NextStringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd_MetaData[] = {
		{ "Category", "RealtyUserWidgetBase" },
		{ "Comment", "//**-----Self add to viewport------\n" },
		{ "ModuleRelativePath", "Public/UMG/RealtyUserWidgetBase.h" },
		{ "ToolTip", "/-----Self add to viewport------" },
	};
#endif
	void Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd_SetBit(void* Obj)
	{
		((URealtyUserWidgetBase*)Obj)->bAutoAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd = { "bAutoAdd", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URealtyUserWidgetBase), &Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd_SetBit, METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtyUserWidgetBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_image,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_NextStringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyUserWidgetBase_Statics::NewProp_bAutoAdd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyUserWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyUserWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyUserWidgetBase_Statics::ClassParams = {
		&URealtyUserWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URealtyUserWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyUserWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyUserWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyUserWidgetBase()
	{
		if (!Z_Registration_Info_UClass_URealtyUserWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyUserWidgetBase.OuterSingleton, Z_Construct_UClass_URealtyUserWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyUserWidgetBase.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URealtyUserWidgetBase>()
	{
		return URealtyUserWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyUserWidgetBase);
	URealtyUserWidgetBase::~URealtyUserWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyUserWidgetBase, URealtyUserWidgetBase::StaticClass, TEXT("URealtyUserWidgetBase"), &Z_Registration_Info_UClass_URealtyUserWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyUserWidgetBase), 190211321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_231517097(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_UMG_RealtyUserWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
