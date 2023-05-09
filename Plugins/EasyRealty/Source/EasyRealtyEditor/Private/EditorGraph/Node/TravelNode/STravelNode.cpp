#include "EditorGraph/Node/TravelNode/STravelNode.h"
#include <Widgets/SOverlay.h>
#include <Widgets/Layout/SBox.h>
#include <Widgets/SBoxPanel.h>
#include <SGraphPin.h>
#include <GraphEditorSettings.h>
#include <Widgets/Images/SImage.h>
#include "Widgets/Layout/SScaleBox.h"
#include "EditorGraph/Node/TravelNode/TravelNode.h"

#include "RealtyEditorSlateStyle/RealtyEditorSlateStyle.h"

void STravelNode::Construct(const FArguments& InArgs, class UTravelNode* InNode)
{
	slatestyle = &FRealtyEditorSlateStyleHelper::GetStyle().GetWidgetStyle<FRealtyEditorSlateStyle>("RealtyEditorSlateStyle");

	GraphNode = InNode;

	SetCursor(EMouseCursor::CardinalCross);

	UpdateGraphNode();
}

void STravelNode::UpdateGraphNode()
{
	InputPins.Empty();
	OutputPins.Empty();
	LeftWidget.Reset();
	RightWidget.Reset();

	//GetOrAddSlot(ENodeZone::Center)
	//.HAlign(HAlign_Center)
	//.VAlign(VAlign_Center)
	//[
	//	SNew(SOverlay)

	////	+ SOverlay::Slot()
	////	.HAlign(HAlign_Fill)
	////	.VAlign(VAlign_Fill)
	////	[
	////		SNew(SImage).Image(&slatestyle->TravelNodeImage_Body)
	////	]


	//	+ SOverlay::Slot()
	//	.HAlign(HAlign_Fill)
	//	.VAlign(VAlign_Fill)
	//	[
	//		
	//			SNew(SVerticalBox)

	//			+ SVerticalBox::Slot().HAlign(HAlign_Fill).AutoHeight().VAlign(VAlign_Fill)
	//			[
	//				SNew(SOverlay)
	//				+ SOverlay::Slot()
	//				[
	//					SNew(SImage)
	//					.Image(&slatestyle->TravelNodeImage_Header)
	//				]
	//				+ SOverlay::Slot().Padding(10.f, 2.f, 0.f, 0.f)
	//				[
	//					SNew(STextBlock).Text(GraphNode->GetNodeTitle(ENodeTitleType::FullTitle))
	//				]
	//				
	//			]
	//			+ SVerticalBox::Slot().HAlign(HAlign_Fill).VAlign(VAlign_Fill).AutoHeight()
	//			[
	//				SNew(SOverlay)
	//				+ SOverlay::Slot()
	//				.HAlign(HAlign_Fill)
	//				.VAlign(VAlign_Fill)
	//				[
	//					SNew(SImage).Image(&slatestyle->TravelNodeImage_Body)
	//				]
	//				+ SOverlay::Slot()
	//				.HAlign(HAlign_Fill)
	//				.VAlign(VAlign_Fill)
	//				[
	//					SNew(SHorizontalBox)

	//					+ SHorizontalBox::Slot()
	//					.HAlign(HAlign_Left)
	//					.FillWidth(1.0f)
	//					[
	//						SAssignNew(LeftWidget, SVerticalBox)
	//					]
	//					+ SHorizontalBox::Slot()
	//					.HAlign(HAlign_Right)
	//					[
	//						SAssignNew(RightWidget, SVerticalBox)
	//					]
	//				]
	//			]
	//			+ SVerticalBox::Slot().HAlign(HAlign_Fill).AutoHeight().VAlign(VAlign_Fill)
	//			[
	//				
	//				SNew(SImage)
	//				.Image(&slatestyle->TravelNodeImage_Header)
	//				.RenderTransform(FSlateRenderTransform(FScale2D(1.f, -1.f)))
	//				.RenderTransformPivot(FVector2D(0.5f,0.5))
	//			]
	//		]
	//	
	//];
	GetOrAddSlot(ENodeZone::Center)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		[
			SNew(SBorder)
			.BorderImage(&slatestyle->TravelNodeImage_Header)
		//.Padding(FMargin(1.f, 5.0f))
		.BorderBackgroundColor(FLinearColor(0.1f, 0.1f, 0.1f))
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		.AutoWidth()
		[
			SAssignNew(LeftWidget, SVerticalBox)
		]
	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Right)
		[
			SNew(SBorder)
			.BorderImage(&slatestyle->TravelNodeImage_Header)
		//.Padding(FMargin(5.0f))
		//.BorderBackgroundColor(FLinearColor(0.1f, 0.2f, 0.4f))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.AutoHeight()
		[
			SNew(SScaleBox)
			.Stretch(EStretch::Fill)
		.StretchDirection(EStretchDirection::Both)
		[
			SNew(STextBlock)
			.Text(GraphNode->GetNodeTitle(ENodeTitleType::FullTitle))
		//.Margin(20.f)
		.Justification(ETextJustify::Center)

		]
	//.ColorAndOpacity(&slatestyle->SceneNodeImage_Body)
		]
	//+ SVerticalBox::Slot()
	//.HAlign(HAlign_Center)
	////.VAlign(VAlign_Fill)
	//.AutoHeight()
	//[
	//	SNew(SImage).Image(&slatestyle->SceneNodeImage_Body)
	//]
	+SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.AutoHeight()
		[
			SAssignNew(ContentWidget, SBox)
		]
		]
		]
	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Right)
		.VAlign(VAlign_Center)
		.AutoWidth()
		[
			SAssignNew(RightWidget, SVerticalBox)
		]
		]
		];


	CreatePinWidgets();
	CreateContent();
}

void STravelNode::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
{
	PinToAdd->SetOwner(SharedThis(this));

	//const UEdGraphPin* PinObj = PinToAdd->GetPinObj();
	
	if (PinToAdd->GetDirection() == EEdGraphPinDirection::EGPD_Input)
	{
		LeftWidget->AddSlot()
			.AutoHeight()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			//.Padding(Settings->GetNonPinNodeBodyPadding())
			[
				PinToAdd
			];
		InputPins.Add(PinToAdd);
	}
	else // Direction == EEdGraphPinDirection::EGPD_Output
	{
		RightWidget->AddSlot()
			.AutoHeight()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			//.Padding(Settings->GetOutputPinPadding())
			[
				PinToAdd
			];
		OutputPins.Add(PinToAdd);
	}
}

void STravelNode::CreateContent()
{
	UTravelNode* Node = Cast<UTravelNode>(GraphNode);

	if (Node)
	{
		FDetailsViewArgs DetailsViewArgs;
		DetailsViewArgs.bAllowSearch = false;
		DetailsViewArgs.bLockable = false;
		DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
		DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Show;


		FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		TSharedRef<IDetailsView> PropertyView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
		PropertyView->SetObject(Node);
		ContentWidget->SetContent(PropertyView);
		ContentWidget->SetMinDesiredWidth(200.f);
	}
}
