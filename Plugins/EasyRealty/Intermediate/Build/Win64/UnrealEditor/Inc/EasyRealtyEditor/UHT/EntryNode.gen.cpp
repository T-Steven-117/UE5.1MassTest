// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/EntryNode/EntryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryNode() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UEntryNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UEntryNode_NoRegister();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void UEntryNode::StaticRegisterNativesUEntryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntryNode);
	UClass* Z_Construct_UClass_UEntryNode_NoRegister()
	{
		return UEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_UEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK3EdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntryNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorGraph/Node/EntryNode/EntryNode.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/EntryNode/EntryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntryNode_Statics::ClassParams = {
		&UEntryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEntryNode()
	{
		if (!Z_Registration_Info_UClass_UEntryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntryNode.OuterSingleton, Z_Construct_UClass_UEntryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntryNode.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<UEntryNode>()
	{
		return UEntryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntryNode);
	UEntryNode::~UEntryNode() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntryNode, UEntryNode::StaticClass, TEXT("UEntryNode"), &Z_Registration_Info_UClass_UEntryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntryNode), 613924832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNode_h_3256976206(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
