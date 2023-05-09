// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/RealtyEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyEdGraph() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEdGraph();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void URealtyEdGraph::StaticRegisterNativesURealtyEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyEdGraph);
	UClass* Z_Construct_UClass_URealtyEdGraph_NoRegister()
	{
		return URealtyEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_URealtyEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyEdGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorGraph/RealtyEdGraph.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/RealtyEdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyEdGraph_Statics::ClassParams = {
		&URealtyEdGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URealtyEdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyEdGraph()
	{
		if (!Z_Registration_Info_UClass_URealtyEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyEdGraph.OuterSingleton, Z_Construct_UClass_URealtyEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyEdGraph.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<URealtyEdGraph>()
	{
		return URealtyEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyEdGraph);
	URealtyEdGraph::~URealtyEdGraph() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyEdGraph, URealtyEdGraph::StaticClass, TEXT("URealtyEdGraph"), &Z_Registration_Info_UClass_URealtyEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyEdGraph), 1633697968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraph_h_175255993(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
