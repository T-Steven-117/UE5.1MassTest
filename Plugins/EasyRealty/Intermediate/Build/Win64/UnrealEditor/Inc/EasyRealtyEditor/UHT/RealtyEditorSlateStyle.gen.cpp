// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h"
#include "SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyEditorSlateStyle() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEditorSlateStyleStyle();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEditorSlateStyleStyle_NoRegister();
	EASYREALTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealtyEditorSlateStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FRealtyEditorSlateStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FRealtyEditorSlateStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle;
class UScriptStruct* FRealtyEditorSlateStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle, Z_Construct_UPackage__Script_EasyRealtyEditor(), TEXT("RealtyEditorSlateStyle"));
	}
	return Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.OuterSingleton;
}
template<> EASYREALTYEDITOR_API UScriptStruct* StaticStruct<FRealtyEditorSlateStyle>()
{
	return FRealtyEditorSlateStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryNodeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TravelNodeImage_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TravelNodeImage_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TravelNodeImage_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TravelNodeImage_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableNodeImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableNodeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtyEditorSlateStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_EntryNodeImage_MetaData[] = {
		{ "Category", "RealtyGraphEditor" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_EntryNodeImage = { "EntryNodeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyEditorSlateStyle, EntryNodeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_EntryNodeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_EntryNodeImage_MetaData)) }; // 608192703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Header_MetaData[] = {
		{ "Category", "RealtyGraphEditor | Travel" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Header = { "TravelNodeImage_Header", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyEditorSlateStyle, TravelNodeImage_Header), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Header_MetaData)) }; // 608192703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Body_MetaData[] = {
		{ "Category", "RealtyGraphEditor | Travel" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Body = { "TravelNodeImage_Body", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyEditorSlateStyle, TravelNodeImage_Body), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Body_MetaData)) }; // 608192703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_VariableNodeImage_MetaData[] = {
		{ "Category", "RealtyGraphEditor" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_VariableNodeImage = { "VariableNodeImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyEditorSlateStyle, VariableNodeImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_VariableNodeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_VariableNodeImage_MetaData)) }; // 608192703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_GraphImage_MetaData[] = {
		{ "Category", "RealtyGraphEditor" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_GraphImage = { "GraphImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyEditorSlateStyle, GraphImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_GraphImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_GraphImage_MetaData)) }; // 608192703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_EntryNodeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_TravelNodeImage_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_VariableNodeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewProp_GraphImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"RealtyEditorSlateStyle",
		sizeof(FRealtyEditorSlateStyle),
		alignof(FRealtyEditorSlateStyle),
		Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealtyEditorSlateStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.InnerSingleton, Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle.InnerSingleton;
	}
	void URealtyEditorSlateStyleStyle::StaticRegisterNativesURealtyEditorSlateStyleStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyEditorSlateStyleStyle);
	UClass* Z_Construct_UClass_URealtyEditorSlateStyleStyle_NoRegister()
	{
		return URealtyEditorSlateStyleStyle::StaticClass();
	}
	struct Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "Public/RealtyEditorSlateStyle/RealtyEditorSlateStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyEditorSlateStyleStyle, WidgetStyle), Z_Construct_UScriptStruct_FRealtyEditorSlateStyle, METADATA_PARAMS(Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::NewProp_WidgetStyle_MetaData)) }; // 2557249674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyEditorSlateStyleStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::ClassParams = {
		&URealtyEditorSlateStyleStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyEditorSlateStyleStyle()
	{
		if (!Z_Registration_Info_UClass_URealtyEditorSlateStyleStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyEditorSlateStyleStyle.OuterSingleton, Z_Construct_UClass_URealtyEditorSlateStyleStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyEditorSlateStyleStyle.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<URealtyEditorSlateStyleStyle>()
	{
		return URealtyEditorSlateStyleStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyEditorSlateStyleStyle);
	URealtyEditorSlateStyleStyle::~URealtyEditorSlateStyleStyle() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ScriptStructInfo[] = {
		{ FRealtyEditorSlateStyle::StaticStruct, Z_Construct_UScriptStruct_FRealtyEditorSlateStyle_Statics::NewStructOps, TEXT("RealtyEditorSlateStyle"), &Z_Registration_Info_UScriptStruct_RealtyEditorSlateStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtyEditorSlateStyle), 2557249674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyEditorSlateStyleStyle, URealtyEditorSlateStyleStyle::StaticClass, TEXT("URealtyEditorSlateStyleStyle"), &Z_Registration_Info_UClass_URealtyEditorSlateStyleStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyEditorSlateStyleStyle), 1472844259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_2518122843(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_RealtyEditorSlateStyle_RealtyEditorSlateStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
