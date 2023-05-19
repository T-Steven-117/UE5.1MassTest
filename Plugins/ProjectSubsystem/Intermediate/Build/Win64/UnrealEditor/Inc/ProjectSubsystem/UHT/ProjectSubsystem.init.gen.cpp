// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectSubsystem_init() {}
	PROJECTSUBSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectSubsystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectSubsystem()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectSubsystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectSubsystem_OnTrigger__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectSubsystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCBA006B3,
				0xBFA5B32C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectSubsystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectSubsystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectSubsystem(Z_Construct_UPackage__Script_ProjectSubsystem, TEXT("/Script/ProjectSubsystem"), Z_Registration_Info_UPackage__Script_ProjectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCBA006B3, 0xBFA5B32C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
