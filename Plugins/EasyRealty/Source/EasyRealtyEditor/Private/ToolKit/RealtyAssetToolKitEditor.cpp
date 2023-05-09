// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolKit/RealtyAssetToolKitEditor.h"
#include "EditorGraph/RealtyEdGraph.h"
#include "RealtyAsset/RealtyAsset.h"
#include "ToolKit/RealtyAssetToolKitCommand.h"
#include "EditorGraph/Complier.h"
#include <PropertyEditorModule.h>
#include <IDetailsView.h>
#include <Widgets/SBoxPanel.h>
#include <Widgets/Input/SCheckBox.h>
#include <Subsystems/UnrealEditorSubsystem.h>
#include "../../../EasyRealtyRuntime/Public/Runtime/RealtyRuntimeActor.h"
#include <EdGraph/EdGraph.h>
#include <BlueprintUtilities.h>
#include <Widgets/Layout/SBox.h>
#include <Framework/Commands/GenericCommands.h>
#include <Misc/MessageDialog.h>
#include "EdGraphUtilities.h"
#include "Windows/WindowsPlatformApplicationMisc.h"
#include "GraphEditorActions.h"	

#include "EasyRealtyEditor.h"
#include "EditorGraph/RealtyEdGraphSchema.h"
#include "EditorGraph/Node/K3EdGraphNode.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet2/BlueprintEditorUtils.h"

namespace PDTabIDNS
{
	FText EditorName(FText::FromString(TEXT("RealtyToolKitEditor")));

	FName BlueprintGraphTabID("BlueprintGraphTab");
	FName NodeDetailTabID("PropertyDetailTab");
	FName ConsoleTabID("ConsoleTab");
}


FRealtyAssetToolKitEditor::FRealtyAssetToolKitEditor()
{
	// 注册Undo
	UEditorEngine* Editor = (UEditorEngine*)GEngine;
	if (Editor != NULL)
	{
		Editor->RegisterForUndo(this);
	}
}

FRealtyAssetToolKitEditor::~FRealtyAssetToolKitEditor()
{
	UEditorEngine* Editor = (UEditorEngine*)GEngine;
	if (Editor)
	{
		Editor->UnregisterForUndo(this);
	}

	if (BlueprintEditorWidget && BlueprintEditorWidget->GetCurrentGraph())
	{
		BlueprintEditorWidget->GetCurrentGraph()->RemoveOnGraphChangedHandler(OnGraphChangedHandle);
	}

}

void FRealtyAssetToolKitEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& _TabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(_TabManager);

	TabManager->RegisterTabSpawner(PDTabIDNS::BlueprintGraphTabID, FOnSpawnTab::CreateSP(this, &FRealtyAssetToolKitEditor::OnSpawnerBlueprintGraph))
		.SetDisplayName(FText::FromName(PDTabIDNS::BlueprintGraphTabID));

	TabManager->RegisterTabSpawner(PDTabIDNS::NodeDetailTabID, FOnSpawnTab::CreateSP(this, &FRealtyAssetToolKitEditor::OnSpawnerNodeDetail))
		.SetDisplayName(FText::FromName(PDTabIDNS::NodeDetailTabID));

	TabManager->RegisterTabSpawner(PDTabIDNS::ConsoleTabID, FOnSpawnTab::CreateSP(this, &FRealtyAssetToolKitEditor::OnSpawnerConsole))
		.SetDisplayName(FText::FromName(PDTabIDNS::ConsoleTabID));
}

void FRealtyAssetToolKitEditor::UnregisterTabSpawners(const TSharedRef<FTabManager>& _TabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(_TabManager);

	TabManager->UnregisterTabSpawner(PDTabIDNS::BlueprintGraphTabID);
	TabManager->UnregisterTabSpawner(PDTabIDNS::NodeDetailTabID);
	TabManager->UnregisterTabSpawner(PDTabIDNS::ConsoleTabID);
}

FName FRealtyAssetToolKitEditor::GetToolkitFName() const
{
	return *PDTabIDNS::EditorName.ToString();
}

FText FRealtyAssetToolKitEditor::GetBaseToolkitName() const
{
	return PDTabIDNS::EditorName;
}

FString FRealtyAssetToolKitEditor::GetWorldCentricTabPrefix() const
{
	return PDTabIDNS::EditorName.ToString();
}

FLinearColor FRealtyAssetToolKitEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor::Green;
}

void FRealtyAssetToolKitEditor::AddReferencedObjects(FReferenceCollector& Collector)
{
	Collector.AddReferencedObject(EditBPObject);
	Collector.AddReferencedObject(GraphObject);
}

FString FRealtyAssetToolKitEditor::GetReferencerName() const
{
	return TEXT("FRealtyAssetToolKitEditor");
}

void FRealtyAssetToolKitEditor::InitEditor(EToolkitMode::Type type, TSharedPtr<class IToolkitHost> EditWithinLevelEditor, class URealtyAsset* _EditObject)
{
	BindCommand();
	ExtentToolBar();

	EditBPObject = _EditObject;

	if (!EditBPObject->GraphObject)
	{
		UEdGraph* NewGraph = NewObject<URealtyEdGraph>(EditBPObject, URealtyEdGraph::StaticClass(), NAME_None, RF_Transactional);
		EditBPObject->GraphObject = NewGraph;
		EditBPObject->GraphObject->GetSchema()->CreateDefaultNodesForGraph(*EditBPObject->GraphObject);
	}

	GraphObject = Cast<URealtyEdGraph>(EditBPObject->GraphObject);

	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("RealtyToolKitEditor_Layout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()
			->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.05f)
				->AddTab(PDTabIDNS::ConsoleTabID, ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.95f)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.7f)
					->AddTab(PDTabIDNS::BlueprintGraphTabID, ETabState::OpenedTab)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.3f)
					->AddTab(PDTabIDNS::NodeDetailTabID, ETabState::OpenedTab)
				)
			)
		);




	InitAssetEditor(
		type,
		EditWithinLevelEditor,
		*PDTabIDNS::EditorName.ToString(),
		StandaloneDefaultLayout,
		true,
		true,
		EditBPObject,
		false,
		false);


	OnGraphChangedHandle = BlueprintEditorWidget->GetCurrentGraph()->AddOnGraphChangedHandler(FOnGraphChanged::FDelegate::CreateRaw(this, &FRealtyAssetToolKitEditor::OnGraphChanged));


	GenerateToolbar();
	RegenerateMenusAndToolbars();


}

void FRealtyAssetToolKitEditor::OnGraphChanged(const FEdGraphEditAction& Action)
{
	bGraphChanged = true;

	WarString = TEXT("         Graph need compile");
	MessageString.Empty();
}

void FRealtyAssetToolKitEditor::BindCommand()
{
	FRealtyAssetToolKitCommand::Register();

	const FRealtyAssetToolKitCommand& comm = FRealtyAssetToolKitCommand::Get();
	ToolkitCommands->MapAction(comm.Complie, FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::Complier));
	ToolkitCommands->MapAction(comm.BugList, FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::ShowBugList));
}

void FRealtyAssetToolKitEditor::ExtentToolBar()
{
	struct FFillToolBarHelper
	{
		static void TBFill(class FToolBarBuilder& builder)
		{
			const FRealtyAssetToolKitCommand& comm = FRealtyAssetToolKitCommand::Get();

			builder.BeginSection("Compile");
			{
				builder.AddToolBarButton(comm.Complie);
			}
			builder.EndSection();

			builder.BeginSection("Bug Lists");
			{
				builder.AddToolBarButton(comm.BugList);
			}
			builder.EndSection();
		}
	};

	TSharedPtr<FExtender> mExtender(new FExtender);
	mExtender->AddToolBarExtension("Asset", EExtensionHook::After, GetToolkitCommands(), FToolBarExtensionDelegate::CreateStatic(&FFillToolBarHelper::TBFill));

	AddToolbarExtender(mExtender);

}


void FRealtyAssetToolKitEditor::Complier()
{
	if (EditBPObject == nullptr || FEasyRealtyEditorModule::IsPlayGame)
	{
		return;
	}


	double StartTime = FPlatformTime::Seconds();
	bGraphChanged = !FRealtyGraphHelper::Complier(EditBPObject);
	double EndTime = FPlatformTime::Seconds();

	if (!bGraphChanged)
	{
		WarString.Empty();
	}

	MessageString = FString::Printf(TEXT("    Compile time : %.3f ms"), (EndTime - StartTime) * 1000.);
}

void FRealtyAssetToolKitEditor::ShowBugList()
{


	FText DialogText = FText::FromString(TEXT(
		"1:节点名字不能重复\t\n2:只有增加和删除节点功能\t\n3:stringnode节点有通知上的bug\t\n4:有时候会崩溃,主要集中在运行时打开资源编辑器"
	));




	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}



TSharedRef<SDockTab> FRealtyAssetToolKitEditor::OnSpawnerBlueprintGraph(const FSpawnTabArgs&)
{
	SGraphEditor::FGraphEditorEvents ee;
	ee.OnSelectionChanged.BindSP(this, &FRealtyAssetToolKitEditor::OnGraphSelectChanged);
	ee.OnTextCommitted.BindSP(this, &FRealtyAssetToolKitEditor::OnNodeTitleCommitted);
	ee.OnNodeDoubleClicked.BindSP(this, &FRealtyAssetToolKitEditor::OnNodeDoubleClicked);
	FGraphAppearanceInfo appinfo;
	appinfo.CornerText = FText::FromString("Realty Editor");

	if (!uicommand.IsValid())
	{
		CreateCommandList();
	}

	BlueprintEditorWidget = SNew(SGraphEditor)
		.Appearance(appinfo)
		.GraphEvents(ee)
		.GraphToEdit(GraphObject)
		.AdditionalCommands(uicommand)
		;

	return
		SNew(SDockTab)
		[
			BlueprintEditorWidget.ToSharedRef()
		];
}


void FRealtyAssetToolKitEditor::OnGraphSelectChanged(const TSet<class UObject*>& SelectionNode)
{
	if (SelectionNode.Num() > 0)
	{
		DetailsWidget->SetObjects(SelectionNode.Array());
	}
}

void FRealtyAssetToolKitEditor::OnCheckStateChangedEvent(ECheckBoxState state)
{
	switch (state)
	{
	case ECheckBoxState::Checked:
	{
		if (FEasyRealtyEditorModule::IsPlayGame && !bGraphChanged)
		{
			UUnrealEditorSubsystem* UnrealEditorSubsystem = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>();

			UWorld* GameWorld = UnrealEditorSubsystem->GetGameWorld();
			if (GameWorld)
			{

				TArray<AActor*> OutActors;
				UGameplayStatics::GetAllActorsOfClass(GameWorld, ARealtyRuntimeActor::StaticClass(), OutActors);
				if (OutActors.Num() > 0)
				{
					ARealtyRuntimeActor* RR = Cast<ARealtyRuntimeActor>(OutActors[0]);
					if (RR)
					{
						if (GraphObject)
						{
							for (auto& tmp : GraphObject->Nodes)
							{
								UK3EdGraphNode* k3node = Cast<UK3EdGraphNode>(tmp);
								if (k3node->RealtyDataNode.SelfName == RR->CurName)
								{
									BlueprintEditorWidget->JumpToNode(k3node);
									break;
								}
							}

							GraphObject->OnDebugStateChanged(RR->PreName, RR->CurName);
						}

						RR->OnUseData.AddLambda([this](FString pre, FString cur)
							{

								if (GraphObject)
								{
									for (auto& tmp : GraphObject->Nodes)
									{
										UK3EdGraphNode* k3node = Cast<UK3EdGraphNode>(tmp);
										if (k3node->RealtyDataNode.SelfName == cur)
										{
											BlueprintEditorWidget->JumpToNode(k3node);
											break;
										}
									}


									GraphObject->OnDebugStateChanged(pre, cur);
								}

							});
					}
				}
			}
		}
		else
		{
			DebugCheckBox->SetIsChecked(ECheckBoxState::Unchecked);
		}
	}
	break;
	case ECheckBoxState::Unchecked:
	case ECheckBoxState::Undetermined:
	{
		if (GraphObject)
		{
			GraphObject->bEditable = true;
			GraphObject->ClearDebugState();
		}
	}
	break;
	}
}

void FRealtyAssetToolKitEditor::PostUndo(bool bSuccess)
{
	if (bSuccess)
	{
		if (BlueprintEditorWidget.IsValid())
		{
			BlueprintEditorWidget->ClearSelectionSet();
			BlueprintEditorWidget->NotifyGraphChanged();
		}
		FSlateApplication::Get().DismissAllMenus();
	}
}

void FRealtyAssetToolKitEditor::PostRedo(bool bSuccess)
{
	if (bSuccess)
	{
		// Clear selection, to avoid holding refs to nodes that go away
		if (BlueprintEditorWidget.IsValid())
		{
			BlueprintEditorWidget->ClearSelectionSet();
			BlueprintEditorWidget->NotifyGraphChanged();
		}
		FSlateApplication::Get().DismissAllMenus();
	}
}

FGraphPanelSelectionSet FRealtyAssetToolKitEditor::GetSelectedNodes() const
{
	if (BlueprintEditorWidget.IsValid())
	{
		return BlueprintEditorWidget->GetSelectedNodes();
	}
	return FGraphPanelSelectionSet();
}


void FRealtyAssetToolKitEditor::OnNodeTitleCommitted(const FText& NewText, ETextCommit::Type CommitInfo, UEdGraphNode* NodeBeingChanged)
{
	if (NodeBeingChanged)
	{
		static const FText TranscationTitle = FText::FromString(FString(TEXT("Rename Node")));
		const FScopedTransaction Transaction(TranscationTitle);
		NodeBeingChanged->Modify();
		NodeBeingChanged->OnRenameNode(NewText.ToString());
	}
}

void FRealtyAssetToolKitEditor::CreateCommandList()
{
	if (uicommand.IsValid())
	{
		return;
	}
	uicommand = MakeShareable(new FUICommandList);

	uicommand->MapAction(FGenericCommands::Get().Delete,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::Delete),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanDelete));

	uicommand->MapAction(FGenericCommands::Get().Copy,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CopySelected),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanCopy));

	uicommand->MapAction(FGenericCommands::Get().Paste,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::PasteNodes),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanPasteNodes));

	uicommand->MapAction(FGenericCommands::Get().Duplicate,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::DuplicateNode),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanDuplicate));

	uicommand->MapAction(FGenericCommands::Get().Cut,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CutSelectedNodes),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanCutNodes));

	uicommand->MapAction(FGraphEditorCommands::Get().CreateComment,
		FExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::OnCreateComment),
		FCanExecuteAction::CreateSP(this, &FRealtyAssetToolKitEditor::CanCreateComment));
}

void FRealtyAssetToolKitEditor::PasteNodes()
{
	if (!BlueprintEditorWidget.IsValid())
	{
		return;
	}
	PasteNodesHere(BlueprintEditorWidget->GetPasteLocation());
}

void FRealtyAssetToolKitEditor::PasteNodesHere(const FVector2D& Location)
{
	if (!BlueprintEditorWidget.IsValid())
		return;

	// Undo/Redo support
	const FScopedTransaction Transaction(FGenericCommands::Get().Paste->GetDescription());
	UEdGraph* EdGraph = BlueprintEditorWidget->GetCurrentGraph();
	URealtyEdGraph* ReGraph = Cast<URealtyEdGraph>(EdGraph);

	EdGraph->Modify();

	UK3EdGraphNode* SelectedParent = NULL;
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();

	BlueprintEditorWidget->ClearSelectionSet();
	// Grab the text to paste from the clipboard.
	FString TextToImport;
	FPlatformApplicationMisc::ClipboardPaste(TextToImport);
	// Import the nodes
	TSet<UEdGraphNode*> PastedNodes;
	FEdGraphUtilities::ImportNodesFromText(EdGraph, TextToImport, /*out*/ PastedNodes);

	FVector2D AvgNodePosition(0.0f, 0.0f);

	// Number of nodes used to calculate AvgNodePosition
	int32 AvgCount = 0;

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* EdNode = *It;
		UK3EdGraphNode* RzNode = Cast<UK3EdGraphNode>(EdNode);
		if (EdNode && (RzNode != nullptr))
		{
			AvgNodePosition.X += EdNode->NodePosX;
			AvgNodePosition.Y += EdNode->NodePosY;
			++AvgCount;
		}
	}
	if (AvgCount > 0)
	{
		float InvNumNodes = 1.0f / float(AvgCount);
		AvgNodePosition.X *= InvNumNodes;
		AvgNodePosition.Y *= InvNumNodes;
	}

	bool bPastedParentNode = false;

	TArray<UK3EdGraphNode*> ParentArray;
	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* PasteNode = *It;
		UK3EdGraphNode* PasteRzNode = Cast<UK3EdGraphNode>(PasteNode);

		if (PasteNode && (PasteRzNode != nullptr))
		{
			bPastedParentNode = true;

			// Select the newly pasted stuff
			BlueprintEditorWidget->SetNodeSelection(PasteNode, true);

			PasteNode->NodePosX = (PasteNode->NodePosX - AvgNodePosition.X) + Location.X;
			PasteNode->NodePosY = (PasteNode->NodePosY - AvgNodePosition.Y) + Location.Y;

			PasteNode->SnapToGrid(16);

			// Give new node a different Guid from the old one
			PasteNode->CreateNewGuid();

			if (PasteRzNode)
			{
				PasteRzNode->PostEditChange();
				ParentArray.Add(PasteRzNode);
			}
		}
	}
	if (ReGraph)
	{
		ReGraph->UpdateClassData();
	}

	// Update UI
	BlueprintEditorWidget->NotifyGraphChanged();

	UObject* GraphOwner = EdGraph->GetOuter();
	if (GraphOwner)
	{
		GraphOwner->PostEditChange();
		GraphOwner->MarkPackageDirty();
	}


}

bool FRealtyAssetToolKitEditor::CanCreateComment() const
{
	return 1;
}

void FRealtyAssetToolKitEditor::OnCreateComment()
{
	if (UEdGraph* EdGraph = BlueprintEditorWidget.IsValid() ? BlueprintEditorWidget->GetCurrentGraph() : nullptr)
	{
		TSharedPtr<FEdGraphSchemaAction> Action = EdGraph->GetSchema()->GetCreateCommentAction();
		if (Action.IsValid())
		{
			FVector2D OpLocation;
			if (BlueprintEditorWidget)
				OpLocation = BlueprintEditorWidget->GetPasteLocation();
			Action->PerformAction(EdGraph, nullptr, OpLocation);
		}
	}
}

bool FRealtyAssetToolKitEditor::CanPasteNodes() const
{
	if (!BlueprintEditorWidget.IsValid())
		return false;

	FString ClipboardContent;
	FPlatformApplicationMisc::ClipboardPaste(ClipboardContent);

	return FEdGraphUtilities::CanImportNodesFromText(BlueprintEditorWidget->GetCurrentGraph(), ClipboardContent);
}

TSharedRef<SDockTab> FRealtyAssetToolKitEditor::OnSpawnerNodeDetail(const FSpawnTabArgs&)
{
	FPropertyEditorModule& pe = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs dva;

	DetailsWidget = pe.CreateDetailView(dva);

	return
		SNew(SDockTab)
		[
			DetailsWidget.ToSharedRef()
		];
}

TSharedRef<SDockTab> FRealtyAssetToolKitEditor::OnSpawnerConsole(const FSpawnTabArgs&)
{

	TSharedRef<SWidget> Ref =

		SNew(SBox)
		.HeightOverride(50)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot().VAlign(VAlign_Center).HAlign(HAlign_Left).AutoWidth()
		[
			SNew(STextBlock).Text(FText::FromString("Debug:"))
		]
	+ SHorizontalBox::Slot().VAlign(VAlign_Center).HAlign(HAlign_Left).AutoWidth()
		[
			SAssignNew(DebugCheckBox, SCheckBox)
			.OnCheckStateChanged(FOnCheckStateChanged::CreateSP(this, &FRealtyAssetToolKitEditor::OnCheckStateChangedEvent))
		]

	+ SHorizontalBox::Slot().VAlign(VAlign_Center).HAlign(HAlign_Left).FillWidth(1)
		[
			SNew(STextBlock)
			.ColorAndOpacity_Lambda([this]() { return bGraphChanged ? FLinearColor::Red : FLinearColor::Green; })
		.Text_Lambda([this]() {return bGraphChanged ? FText::FromString(WarString) : FText::FromString(MessageString); })
		]

		]
	;




	return
		SNew(SDockTab)
		[
			Ref
		];
}


bool FRealtyAssetToolKitEditor::IsTickableInEditor() const
{
	return true;
}

bool FRealtyAssetToolKitEditor::IsTickable() const
{
	return true;
}

TStatId FRealtyAssetToolKitEditor::GetStatId() const
{
	return TStatId();
}


void FRealtyAssetToolKitEditor::Tick(float DeltaTime)
{
	if (DebugCheckBox.IsValid())
	{
		if (!FEasyRealtyEditorModule::IsPlayGame)
		{
			if (DebugCheckBox->GetCheckedState() != ECheckBoxState::Undetermined)
			{
				DebugCheckBox->SetIsChecked(ECheckBoxState::Undetermined);
				OnCheckStateChangedEvent(ECheckBoxState::Undetermined);
			}
		}
		else
		{
			if (DebugCheckBox->GetCheckedState() == ECheckBoxState::Undetermined && !bGraphChanged)
			{
				DebugCheckBox->SetIsChecked(ECheckBoxState::Unchecked);
				OnCheckStateChangedEvent(ECheckBoxState::Unchecked);
			}
		}
	}


}



void FRealtyAssetToolKitEditor::Delete()
{

	if (!BlueprintEditorWidget.IsValid())
	{
		return;
	}

	BlueprintEditorWidget->GetCurrentGraph()->Modify();

	const FGraphPanelSelectionSet SelectedNodes = BlueprintEditorWidget->GetSelectedNodes();
	BlueprintEditorWidget->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		if (UEdGraphNode* Node = Cast<UEdGraphNode>(*NodeIt))
		{
			if (Node->CanUserDeleteNode())
			{
				Node->Modify();
				Node->DestroyNode();
			}
		}
	}
}

bool FRealtyAssetToolKitEditor::CanDelete() const
{
	const FGraphPanelSelectionSet SelectedNodes = BlueprintEditorWidget->GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if (Node && Node->CanUserDeleteNode())
		{
			return true;
		}
	}

	return false;
}

void FRealtyAssetToolKitEditor::CopySelected()
{
	FGraphPanelSelectionSet SelectNodes = GetSelectedNodes();
	TArray<UK3EdGraphNode>AllNodes;

	FString ExportedText;
	int32 CopyNodeIndex = 0;
	for (FGraphPanelSelectionSet::TIterator SelectedIter(SelectNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		UK3EdGraphNode* RealtyNode = Cast<UK3EdGraphNode>(Node);
		if (nullptr == Node)
		{
			SelectedIter.RemoveCurrent();
			continue;
		}
		Node->PrepareForCopying();
	}
	FEdGraphUtilities::ExportNodesToText(SelectNodes, ExportedText);
	FPlatformApplicationMisc::ClipboardCopy(*ExportedText);

	for (FGraphPanelSelectionSet::TIterator SelectedIter(SelectNodes); SelectedIter; ++SelectedIter)
	{
		UK3EdGraphNode* Node = Cast<UK3EdGraphNode>(*SelectedIter);
		if (Node)
		{
			Node->ResetNodeOwner();
		}
	}
}

bool FRealtyAssetToolKitEditor::CanCopy() const
{
	// If any of the nodes can be duplicated then we should allow copying
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if (Node && Node->CanDuplicateNode())
		{
			return true;
		}
	}

	return false;
}

void FRealtyAssetToolKitEditor::DuplicateNode()
{
	CopySelected();
	PasteNodes();
}

bool FRealtyAssetToolKitEditor::CanDuplicate() const
{
	return CanCopy();
}

void FRealtyAssetToolKitEditor::CutSelectedNodes()
{
	CopySelected();
	DeleteSelectedDuplicatableNodes();
}

bool FRealtyAssetToolKitEditor::CanCutNodes() const
{
	return CanCopy() && CanDelete();
}

void FRealtyAssetToolKitEditor::DeleteSelectedDuplicatableNodes()
{
	if (!BlueprintEditorWidget.IsValid())
		return;

	const FGraphPanelSelectionSet OldSelectedNodes = BlueprintEditorWidget->GetSelectedNodes();
	BlueprintEditorWidget->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		UK3EdGraphNode* Node = Cast<UK3EdGraphNode>(*SelectedIter);
		if (Node && Node->CanDuplicateNode())
		{
			BlueprintEditorWidget->SetNodeSelection(Node, true);
		}
	}

	// Delete the duplicatable nodes
	Delete();

	BlueprintEditorWidget->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		if (UK3EdGraphNode* Node = Cast<UK3EdGraphNode>(*SelectedIter))
		{
			BlueprintEditorWidget->SetNodeSelection(Node, true);
		}
	}
}

void FRealtyAssetToolKitEditor::OnNodeDoubleClicked(class UEdGraphNode* Node)
{
	UK3EdGraphNode* TempNode = Cast<UK3EdGraphNode>(Node);
	TSubclassOf<class URealtyUserWidgetBase>UI = TempNode->RealtyDataNode.UIClassPtr;
	if (TempNode && UI)
	{
		UPackage* Pkg = UI->GetOuterUPackage();
		FString ClassName = UI->GetName().LeftChop(2);
		UBlueprint* BlueprintOb = FindObject<UBlueprint>(Pkg, *ClassName);
		if (BlueprintOb)
		{
			GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(BlueprintOb);
		}
	}
}
