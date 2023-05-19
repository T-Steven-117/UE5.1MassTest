// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/TravelNode/TravelNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTravelNode() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UTravelNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UTravelNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void UTravelNode::StaticRegisterNativesUTravelNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTravelNode);
	UClass* Z_Construct_UClass_UTravelNode_NoRegister()
	{
		return UTravelNode::StaticClass();
	}
	struct Z_Construct_UClass_UTravelNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTravelNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK3EdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTravelNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorGraph/Node/TravelNode/TravelNode.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/TravelNode/TravelNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTravelNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTravelNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTravelNode_Statics::ClassParams = {
		&UTravelNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTravelNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTravelNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTravelNode()
	{
		if (!Z_Registration_Info_UClass_UTravelNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTravelNode.OuterSingleton, Z_Construct_UClass_UTravelNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTravelNode.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<UTravelNode>()
	{
		return UTravelNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTravelNode);
	UTravelNode::~UTravelNode() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_TravelNode_TravelNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_TravelNode_TravelNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTravelNode, UTravelNode::StaticClass, TEXT("UTravelNode"), &Z_Registration_Info_UClass_UTravelNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTravelNode), 1836991538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_TravelNode_TravelNode_h_3983119588(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_TravelNode_TravelNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_TravelNode_TravelNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
