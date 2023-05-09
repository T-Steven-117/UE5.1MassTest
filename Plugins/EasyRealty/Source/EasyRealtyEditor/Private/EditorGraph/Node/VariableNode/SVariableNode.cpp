#include "EditorGraph/Node/VariableNode/SVariableNode.h"
#include <Widgets/Images/SImage.h>

void SVariableNode::Construct(const FArguments& InArgs, UK3EdGraphNode* MarkerNode)
{
	slatestyle = &FRealtyEditorSlateStyleHelper::GetStyle().GetWidgetStyle<FRealtyEditorSlateStyle>("RealtyEditorSlateStyle");


	GraphNode = MarkerNode;

	this->SetCursor(EMouseCursor::GrabHand);

	this->UpdateGraphNode();
}

void SVariableNode::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();

	RightNodeBox.Reset();
	LeftNodeBox.Reset();

	RightNodeBox = SNew(SVerticalBox);

	this->GetOrAddSlot(ENodeZone::Center)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SOverlay)

			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage).Image(&slatestyle->VariableNodeImage)
			]

			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SBox)
				.WidthOverride(100)
				[
					RightNodeBox.ToSharedRef()
				]
			]

		];

	CreatePinWidgets();

}