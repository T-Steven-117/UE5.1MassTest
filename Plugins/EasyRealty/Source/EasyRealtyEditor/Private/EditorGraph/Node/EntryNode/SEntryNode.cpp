#include "EditorGraph/Node/EntryNode/SEntryNode.h"
#include <Widgets/SOverlay.h>
#include <Widgets/Layout/SBox.h>
#include <Widgets/SBoxPanel.h>
#include <SGraphPin.h>
#include <GraphEditorSettings.h>
#include <Widgets/Images/SImage.h>

#include "EditorGraph/Node/EntryNode/EntryNode.h"

#include "RealtyEditorSlateStyle/RealtyEditorSlateStyle.h"

void SEntryNode::Construct(const FArguments& InArgs, class UEntryNode* InNode)
{
	slatestyle = &FRealtyEditorSlateStyleHelper::GetStyle().GetWidgetStyle<FRealtyEditorSlateStyle>("RealtyEditorSlateStyle");


	GraphNode = InNode;

	SetCursor(EMouseCursor::CardinalCross);

	UpdateGraphNode();
}

void SEntryNode::UpdateGraphNode()
{
	OutputPins.Empty();


	GetOrAddSlot(ENodeZone::Center)
	.HAlign(HAlign_Center)
	.VAlign(VAlign_Center)
	[
		SNew(SOverlay)

		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage).Image(&slatestyle->EntryNodeImage)
		]


		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SBox)
			//.WidthOverride(130)
			//.HeightOverride(170)
			[
				SNew(SVerticalBox)

				+ SVerticalBox::Slot()
				.Padding(5.f, 0.f, 0.f, 0.f)
				[
					SNew(STextBlock).Text(GraphNode->GetNodeTitle(ENodeTitleType::FullTitle))
				]
				+ SVerticalBox::Slot()
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot()
					.HAlign(HAlign_Right)
					[
						SAssignNew(RightWidget, SVerticalBox)
					]
				]
				+ SVerticalBox::Slot()
				[
					SNew(SSpacer)
				]
			]
		]
	];

	CreatePinWidgets();
}

void SEntryNode::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
{
	PinToAdd->SetOwner(SharedThis(this));

	if (PinToAdd->GetDirection() == EEdGraphPinDirection::EGPD_Output)
	{
		RightWidget->AddSlot()
			.AutoHeight()
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Center)
			.Padding(Settings->GetOutputPinPadding())
			[
				PinToAdd
			];
		OutputPins.Add(PinToAdd);
	}
}

