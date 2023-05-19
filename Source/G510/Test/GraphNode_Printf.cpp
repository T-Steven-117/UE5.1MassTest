// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphNode_Printf.h"
#include "GraphEditorSettings.h"
#include "SGraphNode.h"
#include "Widgets/SBoxPanel.h"
#include "K2Node_MyPrint.h"
#include "ScopedTransaction.h"

FReply SGraphNode_Printf::OnAddPin()
{
	UK2Node_MyPrint* BPNode = CastChecked<UK2Node_MyPrint>(GraphNode);

	const FScopedTransaction Transaction(NSLOCTEXT("Kismet", "AddArgumentPin", "Add Argument Pin"));
	BPNode->Modify();

	//BPNode->AddPinToNode();
	FBlueprintEditorUtils::MarkBlueprintAsModified(BPNode->GetBlueprint());

	UpdateGraphNode();
	GraphNode->GetGraph()->NotifyGraphChanged();

	return FReply::Handled();
}

void SGraphNode_Printf::CreateInputSideAddButton(TSharedPtr<SVerticalBox> InputBox)
{
	FText AddPinName = FText::FromString(TEXT("Add Pin"));
	FText RemovePinName = FText::FromString(TEXT("Remove Pin"));
	TSharedRef<SWidget> AddPinButton = AddPinButtonContent(AddPinName, AddPinName);
	TSharedRef<SWidget> RemovePinButton = AddPinButtonContent(RemovePinName, RemovePinName);
	

	FMargin AddPinPadding = Settings->GetInputPinPadding();
	AddPinPadding.Top += 6.0f;

	InputBox->AddSlot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		.Padding(AddPinPadding)
		[
			AddPinButton
		];
}

void SGraphNode_Printf::Construct(const FArguments& InArgs, UEdGraphNode* InNode)
{
	this->GraphNode = InNode;

	this->SetCursor(EMouseCursor::CardinalCross);

	this->UpdateGraphNode();
}
