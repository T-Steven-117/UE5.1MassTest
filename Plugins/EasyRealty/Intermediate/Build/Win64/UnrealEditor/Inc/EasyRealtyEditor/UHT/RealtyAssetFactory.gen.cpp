// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/Factory/RealtyAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyAssetFactory() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyAssetFactory();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void URealtyAssetFactory::StaticRegisterNativesURealtyAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyAssetFactory);
	UClass* Z_Construct_UClass_URealtyAssetFactory_NoRegister()
	{
		return URealtyAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_URealtyAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factory/RealtyAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Factory/RealtyAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyAssetFactory_Statics::ClassParams = {
		&URealtyAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyAssetFactory()
	{
		if (!Z_Registration_Info_UClass_URealtyAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyAssetFactory.OuterSingleton, Z_Construct_UClass_URealtyAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyAssetFactory.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<URealtyAssetFactory>()
	{
		return URealtyAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyAssetFactory);
	URealtyAssetFactory::~URealtyAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_Factory_RealtyAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_Factory_RealtyAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyAssetFactory, URealtyAssetFactory::StaticClass, TEXT("URealtyAssetFactory"), &Z_Registration_Info_UClass_URealtyAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyAssetFactory), 66974775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_Factory_RealtyAssetFactory_h_4030123386(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_Factory_RealtyAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_Factory_RealtyAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
