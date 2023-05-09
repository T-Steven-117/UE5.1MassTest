// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSubsystem/MVVMVieModel/StrategyPageViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyPageViewModel() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UStrategyPageViewModel();
	PROJECTSUBSYSTEM_API UClass* Z_Construct_UClass_UStrategyPageViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectSubsystem();
// End Cross Module References
	void UStrategyPageViewModel::GetCurrentHealth_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStrategyPageViewModel* Obj = (const UStrategyPageViewModel*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetCurrentHealth();
	}
	void UStrategyPageViewModel::SetCurrentHealth_WrapperImpl(void* Object, const void* InValue)
	{
		UStrategyPageViewModel* Obj = (UStrategyPageViewModel*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetCurrentHealth(Value);
	}
	void UStrategyPageViewModel::StaticRegisterNativesUStrategyPageViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStrategyPageViewModel);
	UClass* Z_Construct_UClass_UStrategyPageViewModel_NoRegister()
	{
		return UStrategyPageViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UStrategyPageViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrategyPageViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategyPageViewModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MVVMVieModel/StrategyPageViewModel.h" },
		{ "ModuleRelativePath", "MVVMVieModel/StrategyPageViewModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategyPageViewModel_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "StrategyPageViewModel" },
		{ "ModuleRelativePath", "MVVMVieModel/StrategyPageViewModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStrategyPageViewModel_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStrategyPageViewModel::SetCurrentHealth_WrapperImpl, &UStrategyPageViewModel::GetCurrentHealth_WrapperImpl, STRUCT_OFFSET(UStrategyPageViewModel, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_UStrategyPageViewModel_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyPageViewModel_Statics::NewProp_CurrentHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStrategyPageViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStrategyPageViewModel_Statics::NewProp_CurrentHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrategyPageViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrategyPageViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStrategyPageViewModel_Statics::ClassParams = {
		&UStrategyPageViewModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStrategyPageViewModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyPageViewModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStrategyPageViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStrategyPageViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrategyPageViewModel()
	{
		if (!Z_Registration_Info_UClass_UStrategyPageViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStrategyPageViewModel.OuterSingleton, Z_Construct_UClass_UStrategyPageViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStrategyPageViewModel.OuterSingleton;
	}
	template<> PROJECTSUBSYSTEM_API UClass* StaticClass<UStrategyPageViewModel>()
	{
		return UStrategyPageViewModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyPageViewModel);
	UStrategyPageViewModel::~UStrategyPageViewModel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UStrategyPageViewModel, CurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UStrategyPageViewModel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UStrategyPageViewModel, CurrentHealth)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UStrategyPageViewModel);
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_StrategyPageViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_StrategyPageViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStrategyPageViewModel, UStrategyPageViewModel::StaticClass, TEXT("UStrategyPageViewModel"), &Z_Registration_Info_UClass_UStrategyPageViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStrategyPageViewModel), 3208662648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_StrategyPageViewModel_h_3233396128(TEXT("/Script/ProjectSubsystem"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_StrategyPageViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_ProjectSubsystem_Source_ProjectSubsystem_MVVMVieModel_StrategyPageViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
