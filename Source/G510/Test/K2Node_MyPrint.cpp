// Fill out your copyright notice in the Description page of Project Settings.


#include "K2Node_MyPrint.h"

#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "K2Node_MakeArray.h"
//#include "Node/GraphNode_Printf.h"
#include "ToolMenu.h"
#include "ToolMenuSection.h"
#include "GraphNode_Printf.h"
#include "Kismet/KismetArrayLibrary.h"
#define LOCTEXT_NAMESPACE "UK2Node_MyPrint"
FName UK2Node_MyPrint::PN_Color = TEXT("Color");
FName UK2Node_MyPrint::PN_PrintToLog = TEXT("PrintToLog");
FName UK2Node_MyPrint::PN_PrintToSreen = TEXT("PrintToScreen");
FName UK2Node_MyPrint::PN_Duration = TEXT("Duration");

void UK2Node_MyPrint::GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const
{
	Super::GetNodeContextMenuActions(Menu, Context);

	if (!Context->bIsDebugging)
	{
		if (Context->Pin != FindPin(UK2Node_MyPrint::PN_PrintToSreen) &&
			Context->Pin != FindPin(UK2Node_MyPrint::PN_Color) &&
			Context->Pin != FindPin(UK2Node_MyPrint::PN_PrintToLog) &&
			Context->Pin != FindPin(UK2Node_MyPrint::PN_Duration))
		{
			//添加移除节点的右键功能,否则无法移除变量会很尴尬
			FToolMenuSection& Section = Menu->AddSection(FName(TEXT("UK2Node_Print")), LOCTEXT("UK2Node_Print", "Action"));
			Section.AddMenuEntry(
				"RemovePin",
				LOCTEXT("RemovePin", "Remove pin"),
				LOCTEXT("RemovePinTooltip", "Remove this input pin"),
				FSlateIcon(),
				FUIAction(
					FExecuteAction::CreateUObject(const_cast<UK2Node_MyPrint*>(this), &UK2Node_MyPrint::RemoveInputPin, const_cast<UEdGraphPin*>(Context->Pin))
				)
			);
		}
	}

}

void UK2Node_MyPrint::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	UEdGraphPin* ExecPin = GetExecPin();
	UEdGraphPin* ThenPin = GetThenPin();
	if (ExecPin && ThenPin)
	{
		//获取函数库的函数, 不能使用自己的函数,否则非编辑器模式运行崩溃
		UFunction* Function = UKismetArrayLibrary::StaticClass()->FindFunctionByName(FName("PrintArray"));
		if (Function == NULL)
		{
			CompilerContext.MessageLog.Error(*LOCTEXT("InvalidFunctionName", "BaseAsyncTask: Type not supported or not initialized. @@").ToString(), this);
			return;
		}

		UK2Node_CallFunction* CallFuncNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);

		CallFuncNode->SetFromFunction(Function);
		CallFuncNode->AllocateDefaultPins();
		CompilerContext.MovePinLinksToIntermediate(*ExecPin, *(CallFuncNode->GetExecPin()));
		CompilerContext.MovePinLinksToIntermediate(*ThenPin, *(CallFuncNode->GetThenPin()));

		CompilerContext.MovePinLinksToIntermediate(*FindPin(UK2Node_MyPrint::PN_PrintToSreen), *CallFuncNode->FindPin(TEXT("bScreen")));
		CompilerContext.MovePinLinksToIntermediate(*FindPin(UK2Node_MyPrint::PN_PrintToLog), *CallFuncNode->FindPin(TEXT("bLog")));
		CompilerContext.MovePinLinksToIntermediate(*FindPin(UK2Node_MyPrint::PN_Color), *CallFuncNode->FindPin(TEXT("Color")));
		CompilerContext.MovePinLinksToIntermediate(*FindPin(UK2Node_MyPrint::PN_Duration), *CallFuncNode->FindPin(TEXT("Duration")));

		//如下添加一个特殊的节点, 用于动态添加Pin
		UK2Node_MakeArray* MakeArrayNode = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
		MakeArrayNode->AllocateDefaultPins();

		UEdGraphPin* ArrayOut = MakeArrayNode->GetOutputPin();
		UEdGraphPin* FuncArgPin = CallFuncNode->FindPinChecked(TEXT("InStrings"));
		ArrayOut->MakeLinkTo(FuncArgPin);

		MakeArrayNode->PinConnectionListChanged(ArrayOut);
		// connect all arg pin to Make Array input
		for (int32 i = 0; i < ArgPinNames.Num(); i++) {

			// Make Array node has one input by default
			if (i > 0)
				MakeArrayNode->AddInputPin();

			// find the input pin on the "Make Array" node by index.
			const FString PinName = FString::Printf(TEXT("[%d]"), i);
			UEdGraphPin* ArrayInputPin = MakeArrayNode->FindPinChecked(PinName);

			// move input word to array 
			UEdGraphPin* MyInputPin = FindPinChecked(ArgPinNames[i], EGPD_Input);
			CompilerContext.MovePinLinksToIntermediate(*MyInputPin, *ArrayInputPin);
		}// end of for
	}

	BreakAllNodeLinks();
}

void UK2Node_MyPrint::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();
	//创建默认节点, 同时指定默认值
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);
	UEdGraphPin* PinScreen = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Boolean, UK2Node_MyPrint::PN_PrintToSreen);
	PinScreen->DefaultValue = "True";
	UEdGraphPin* PinLog = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Boolean, UK2Node_MyPrint::PN_PrintToLog);
	PinLog->DefaultValue = "True";
	UScriptStruct* ColorStruct = TBaseStructure<FLinearColor>::Get();
	UEdGraphPin* PinColor = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, ColorStruct, UK2Node_MyPrint::PN_Color);
	FLinearColor color = FLinearColor::Green;
	PinColor->DefaultValue = color.ToString();

	UEdGraphPin* PinDuration = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Float, UK2Node_MyPrint::PN_Duration);
	PinDuration->DefaultValue = "2.0";

	for (const FName& PinName : ArgPinNames) {
		CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_String, PinName);
	}
}

void UK2Node_MyPrint::PinDefaultValueChanged(UEdGraphPin* ChangedPin)
{
	Super::PinDefaultValueChanged(ChangedPin);
}

void UK2Node_MyPrint::AddPinToNode()
{
	Modify();

	TMap<FString, FStringFormatArg> FormatArgs = {
			{TEXT("Count"), ArgPinNames.Num()}
	};

	FName NewPinName(*FString::Format(TEXT("{Count}"), FormatArgs));
	ArgPinNames.Add(NewPinName);

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_String, NewPinName);
}

void UK2Node_MyPrint::RemoveInputPin(UEdGraphPin* Pin)
{
	FScopedTransaction Transaction(FText::FromString("Printf_RemoveInputPin"));
	Modify();

	ArgPinNames.Remove(Pin->GetFName());

	RemovePin(Pin);
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());
}
#if WITH_EDITOR
TSharedPtr<SGraphNode> UK2Node_MyPrint::CreateVisualWidget()
{
	return SNew(SGraphNode_Printf, this);
}
#endif
//void SGraphNode_Printf::FArguments::Construct(const FArguments& InArgs, UEdGraphNode* InNode)
//{
//	this->GraphNode = InNode;
//
//	this->SetCursor(EMouseCursor::CardinalCross);
//
//	this->UpdateGraphNode();
//}
#undef LOCTEXT_NAMESPACE