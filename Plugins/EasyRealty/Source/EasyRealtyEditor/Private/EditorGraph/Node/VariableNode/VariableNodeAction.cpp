#include "EditorGraph/Node/VariableNode/VariableNodeAction.h"


FVariableNodeAction::FVariableNodeAction(FText InNodeCategory, FText InMenuDesc, FText InToolTip, const int32 InGrouping, FText InKeywords /*= FText()*/, int32 InSectionID /*= 0*/)
	:
	FEdGraphSchemaAction(InNodeCategory, InMenuDesc, InToolTip, InGrouping, InKeywords, InSectionID)
{
	NodeTemplate = nullptr;
}

UEdGraphNode* FVariableNodeAction::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode /*= true*/)
{
	UEdGraphNode* ResultNode = NULL;

	if (NodeTemplate != NULL)
	{
		const FScopedTransaction Transaction(FText::FromString("Add VariableNode"));
		ParentGraph->Modify();
		if (FromPin)
		{
			FromPin->Modify();
		}

		NodeTemplate->SetFlags(RF_Transactional);

		NodeTemplate->Rename(NULL, ParentGraph, REN_NonTransactional);
		ParentGraph->AddNode(NodeTemplate, true, bSelectNewNode);

		NodeTemplate->CreateNewGuid();
		NodeTemplate->PostPlacedNewNode();
		NodeTemplate->AllocateDefaultPins();
		NodeTemplate->AutowireNewNode(FromPin);

		NodeTemplate->NodePosX = Location.X;
		NodeTemplate->NodePosY = Location.Y;

		ResultNode = NodeTemplate;

		ParentGraph->NotifyGraphChanged();
	}

	return ResultNode;
}

