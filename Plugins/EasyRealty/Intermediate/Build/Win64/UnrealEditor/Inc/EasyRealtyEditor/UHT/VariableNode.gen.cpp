// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/VariableNode/VariableNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableNode() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UVariableNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UVariableNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void UVariableNode::StaticRegisterNativesUVariableNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariableNode);
	UClass* Z_Construct_UClass_UVariableNode_NoRegister()
	{
		return UVariableNode::StaticClass();
	}
	struct Z_Construct_UClass_UVariableNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariableNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK3EdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariableNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorGraph/Node/VariableNode/VariableNode.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/VariableNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariableNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariableNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariableNode_Statics::ClassParams = {
		&UVariableNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVariableNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariableNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariableNode()
	{
		if (!Z_Registration_Info_UClass_UVariableNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariableNode.OuterSingleton, Z_Construct_UClass_UVariableNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVariableNode.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<UVariableNode>()
	{
		return UVariableNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariableNode);
	UVariableNode::~UVariableNode() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVariableNode, UVariableNode::StaticClass, TEXT("UVariableNode"), &Z_Registration_Info_UClass_UVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariableNode), 2872981349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNode_h_666754119(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
