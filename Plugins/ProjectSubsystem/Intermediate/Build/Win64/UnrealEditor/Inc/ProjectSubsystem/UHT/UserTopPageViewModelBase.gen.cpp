// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSubsystem/MVVMVieModel/UserTopPageViewModelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserTopPageViewModelBase() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UUserTopPageViewModelBase();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UUserTopPageViewModelBase_NoRegister();
	PROJECTSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProjectSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectSubsystem, nullptr, "OnTrigger__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUserTopPageViewModelBase::execCallOnDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallOnDelegate();
		P_NATIVE_END;
	}
	void UUserTopPageViewModelBase::GetLowTemp_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserTopPageViewModelBase* Obj = (const UUserTopPageViewModelBase*)Object;
		FString& Result = *(FString*)OutValue;
		Result = (FString)Obj->GetLowTemp();
	}
	void UUserTopPageViewModelBase::SetLowTemp_WrapperImpl(void* Object, const void* InValue)
	{
		UUserTopPageViewModelBase* Obj = (UUserTopPageViewModelBase*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetLowTemp(Value);
	}
	void UUserTopPageViewModelBase::GetHighTemp_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserTopPageViewModelBase* Obj = (const UUserTopPageViewModelBase*)Object;
		FString& Result = *(FString*)OutValue;
		Result = (FString)Obj->GetHighTemp();
	}
	void UUserTopPageViewModelBase::SetHighTemp_WrapperImpl(void* Object, const void* InValue)
	{
		UUserTopPageViewModelBase* Obj = (UUserTopPageViewModelBase*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetHighTemp(Value);
	}
	void UUserTopPageViewModelBase::GetTimeData_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserTopPageViewModelBase* Obj = (const UUserTopPageViewModelBase*)Object;
		FString& Result = *(FString*)OutValue;
		Result = (FString)Obj->GetTimeData();
	}
	void UUserTopPageViewModelBase::SetTimeData_WrapperImpl(void* Object, const void* InValue)
	{
		UUserTopPageViewModelBase* Obj = (UUserTopPageViewModelBase*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetTimeData(Value);
	}
	void UUserTopPageViewModelBase::GetCName_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserTopPageViewModelBase* Obj = (const UUserTopPageViewModelBase*)Object;
		FString& Result = *(FString*)OutValue;
		Result = (FString)Obj->GetCName();
	}
	void UUserTopPageViewModelBase::SetCName_WrapperImpl(void* Object, const void* InValue)
	{
		UUserTopPageViewModelBase* Obj = (UUserTopPageViewModelBase*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetCName(Value);
	}
	void UUserTopPageViewModelBase::GetEName_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserTopPageViewModelBase* Obj = (const UUserTopPageViewModelBase*)Object;
		FString& Result = *(FString*)OutValue;
		Result = (FString)Obj->GetEName();
	}
	void UUserTopPageViewModelBase::SetEName_WrapperImpl(void* Object, const void* InValue)
	{
		UUserTopPageViewModelBase* Obj = (UUserTopPageViewModelBase*)Object;
		FString& Value = *(FString*)InValue;
		Obj->SetEName(Value);
	}
	void UUserTopPageViewModelBase::StaticRegisterNativesUUserTopPageViewModelBase()
	{
		UClass* Class = UUserTopPageViewModelBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallOnDelegate", &UUserTopPageViewModelBase::execCallOnDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserTopPageViewModelBase, nullptr, "CallOnDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserTopPageViewModelBase);
	UClass* Z_Construct_UClass_UUserTopPageViewModelBase_NoRegister()
	{
		return UUserTopPageViewModelBase::StaticClass();
	}
	struct Z_Construct_UClass_UUserTopPageViewModelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowTemp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LowTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighTemp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HighTemp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TimeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserTopPageViewModelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectSubsystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserTopPageViewModelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserTopPageViewModelBase_CallOnDelegate, "CallOnDelegate" }, // 2570008268
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_LowTemp_MetaData[] = {
		{ "Category", "UserTopPageViewModelBase" },
		{ "DisplayName", "\xe6\x9c\x80\xe4\xbd\x8e\xe6\xb8\xa9\xe5\xba\xa6" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_LowTemp = { "LowTemp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserTopPageViewModelBase::SetLowTemp_WrapperImpl, &UUserTopPageViewModelBase::GetLowTemp_WrapperImpl, STRUCT_OFFSET(UUserTopPageViewModelBase, LowTemp), METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_LowTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_LowTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_HighTemp_MetaData[] = {
		{ "Category", "UserTopPageViewModelBase" },
		{ "DisplayName", "\xe6\x9c\x80\xe9\xab\x98\xe6\xb8\xa9\xe5\xba\xa6" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_HighTemp = { "HighTemp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserTopPageViewModelBase::SetHighTemp_WrapperImpl, &UUserTopPageViewModelBase::GetHighTemp_WrapperImpl, STRUCT_OFFSET(UUserTopPageViewModelBase, HighTemp), METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_HighTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_HighTemp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_TimeData_MetaData[] = {
		{ "Category", "UserTopPageViewModelBase" },
		{ "DisplayName", "\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_TimeData = { "TimeData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserTopPageViewModelBase::SetTimeData_WrapperImpl, &UUserTopPageViewModelBase::GetTimeData_WrapperImpl, STRUCT_OFFSET(UUserTopPageViewModelBase, TimeData), METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_TimeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_TimeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_CName_MetaData[] = {
		{ "Category", "UserTopPageViewModelBase" },
		{ "DisplayName", "\xe4\xb8\xad\xe6\x96\x87\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_CName = { "CName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserTopPageViewModelBase::SetCName_WrapperImpl, &UUserTopPageViewModelBase::GetCName_WrapperImpl, STRUCT_OFFSET(UUserTopPageViewModelBase, CName), METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_CName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_CName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_EName_MetaData[] = {
		{ "Category", "UserTopPageViewModelBase" },
		{ "DisplayName", "\xe8\x8b\xb1\xe6\x96\x87\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_EName = { "EName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserTopPageViewModelBase::SetEName_WrapperImpl, &UUserTopPageViewModelBase::GetEName_WrapperImpl, STRUCT_OFFSET(UUserTopPageViewModelBase, EName), METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_EName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_EName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_OnTrigger_MetaData[] = {
		{ "ModuleRelativePath", "MVVMVieModel/UserTopPageViewModelBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_OnTrigger = { "OnTrigger", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserTopPageViewModelBase, OnTrigger), Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_OnTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_OnTrigger_MetaData)) }; // 4252463565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserTopPageViewModelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_LowTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_HighTemp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_TimeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_CName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_EName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserTopPageViewModelBase_Statics::NewProp_OnTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserTopPageViewModelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserTopPageViewModelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserTopPageViewModelBase_Statics::ClassParams = {
		&UUserTopPageViewModelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserTopPageViewModelBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserTopPageViewModelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserTopPageViewModelBase()
	{
		if (!Z_Registration_Info_UClass_UUserTopPageViewModelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserTopPageViewModelBase.OuterSingleton, Z_Construct_UClass_UUserTopPageViewModelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserTopPageViewModelBase.OuterSingleton;
	}
	template<> PROJECTSUBSYSTEM_API UClass* StaticClass<UUserTopPageViewModelBase>()
	{
		return UUserTopPageViewModelBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserTopPageViewModelBase);
	UUserTopPageViewModelBase::~UUserTopPageViewModelBase() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUserTopPageViewModelBase, LowTemp)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUserTopPageViewModelBase, HighTemp)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUserTopPageViewModelBase, TimeData)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUserTopPageViewModelBase, CName)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UUserTopPageViewModelBase, EName)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UUserTopPageViewModelBase)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUserTopPageViewModelBase, LowTemp)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUserTopPageViewModelBase, HighTemp)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUserTopPageViewModelBase, TimeData)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUserTopPageViewModelBase, CName)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UUserTopPageViewModelBase, EName)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UUserTopPageViewModelBase);
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserTopPageViewModelBase, UUserTopPageViewModelBase::StaticClass, TEXT("UUserTopPageViewModelBase"), &Z_Registration_Info_UClass_UUserTopPageViewModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserTopPageViewModelBase), 398522548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_3910429043(TEXT("/Script/ProjectSubsystem"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_UserTopPageViewModelBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
