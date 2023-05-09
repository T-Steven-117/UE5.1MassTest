// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorGraph/RealtyEdGraphSchema.h"
#include "EditorGraph/Node/EntryNode/EntryNodeAction.h"
#include "EditorGraph/Node/EntryNode/EntryNode.h"
#include "EditorGraph/Node/TravelNode/TravelNodeAction.h"
#include "EditorGraph/Node/TravelNode/TravelNode.h"
#include <ToolMenu.h>
#include <ToolMenuSection.h>
#include <LevelSequence/Public/LevelSequenceActor.h>
#include <Kismet/GameplayStatics.h>
#include <GameFramework/Pawn.h>
#include "EditorGraph/Node/VariableNode/VariableNodeAction.h"
#include "EditorGraph/Node/VariableNode/StringNode/StringNode.h"
#include <EdGraphSchema_K2_Actions.h>
#include "EditorGraph/Node/Comments/CommentsNodeAction.h"
#include "EdGraphNode_Comment.h"
#include "../Public/EditorGraph/ConnectionDrawingPolicy/RealtyConnectionDrawingPolicy.h"
#include "MovieSceneSequencePlayer.h"
#include "LevelSequencePlayer.h"
#pragma optimize("",off)

UEdGraphNode* FSchemaAction_AddComment::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode /*= true*/)
{
	UEdGraphNode_Comment* const CommentTemplate = NewObject<UEdGraphNode_Comment>();

	FVector2D SpawnLocation = Location;
	FSlateRect Bounds;

	TSharedPtr<SGraphEditor> GraphEditorPtr = SGraphEditor::FindGraphEditorForGraph(ParentGraph);
	if (GraphEditorPtr.IsValid())
	{
		// 选中节点以节点计算位置
		if (GraphEditorPtr->GetBoundsForSelectedNodes(/*out*/ Bounds, 50.0f))
		{
			CommentTemplate->SetBounds(Bounds);
			SpawnLocation.X = CommentTemplate->NodePosX;
			SpawnLocation.Y = CommentTemplate->NodePosY;
		}
		else
		{
			// 没有选中节点
			SpawnLocation = Location;
		}
	}

	UEdGraphNode* const NewNode = FEdGraphSchemaAction_NewNode::SpawnNodeFromTemplate<UEdGraphNode_Comment>(ParentGraph, CommentTemplate, SpawnLocation, bSelectNewNode);

	return NewNode;
}



namespace Unitls
{
	template<typename SchemaActionType, typename NodeType>
	void CreateAction(FGraphContextMenuBuilder& ContextMenuBuilder, FString Category, FString MenuDesc, FString Tooltip)
	{
		TSharedPtr<SchemaActionType> NewAction(new SchemaActionType(
			FText::FromString(Category),
			FText::FromString(MenuDesc),
			FText::FromString(Tooltip),
			0));

		NewAction->NodeTemplate = NewObject<NodeType>(ContextMenuBuilder.OwnerOfTemporaries);
		
		ContextMenuBuilder.AddAction(NewAction);

	}
}


FLinearColor URealtyEdGraphSchema::GetPinTypeColor(const FEdGraphPinType& PinType) const
{
	return FLinearColor(0.256733f, 0.8f, 0.279109f,1.0f);
}

class FConnectionDrawingPolicy* URealtyEdGraphSchema::CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	return new FRealtyConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect, InDrawElements, InGraphObj);
}



void URealtyEdGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	Unitls::CreateAction<FEntryNodeAction, UEntryNode>
		(
			ContextMenuBuilder,
			"RealtyMenu",
			"EntryNode",
			"EntryNode"
			);

	Unitls::CreateAction<FTravelNodeAction,UTravelNode>
		(
			ContextMenuBuilder,
			"RealtyMenu",
			"TravelNode",
			"TravelNode"
			);

	Unitls::CreateAction<FVariableNodeAction, UStringNode>
		(
			ContextMenuBuilder,
			"RealtyMenu",
			"StringNode",
			"StringNode"
			);

	{
		TSharedPtr<FEdGraphSchemaAction_K3AddComment> NewAction(new FEdGraphSchemaAction_K3AddComment(
			FText::FromString("Comments"),
			FText::FromString("Comments")));
		ContextMenuBuilder.AddAction(NewAction);
	}
}

void URealtyEdGraphSchema::GetContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const
{


	FToolMenuSection& Section = Menu->AddSection(TEXT("AAA"), FText::FromString("AAA"));
	Section.AddMenuEntry(
		"RefreshNode",
		FText::FromString("RefreshNode"),
		FText::FromString("RefreshNode"),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateLambda([this, Context]()
				{
					UEdGraphNode* cn = const_cast<UEdGraphNode*>(Context->Node.Get());
					this->ReconstructNode(*cn);
				}),
			FCanExecuteAction()
		)
	);

	UEdGraphNode* cn = const_cast<UEdGraphNode*>(Context->Node.Get());
	UTravelNode* nn = Cast<UTravelNode>(cn);
	if (nn && nn->RealtyDataNode.PointTargetClassPtr && !nn->RealtyDataNode.TargetSequenceSoftPath.Equals(TEXT("None")))
	{
		Section.AddMenuEntry(
			"AlignSequencePawnTransform",
			FText::FromString("AlignSequencePawnTransform"),
			FText::FromString("AlignSequencePawnTransform"),
			FSlateIcon(),
			FUIAction(
				FExecuteAction::CreateLambda([this, nn]()
					{
						TArray<AActor*> OutActors;
						UGameplayStatics::GetAllActorsOfClass(GWorld, APawn::StaticClass(), OutActors);
						if (OutActors.Num() > 0)
						{
							ALevelSequenceActor* PawnSequence = GWorld->SpawnActor<ALevelSequenceActor>();
							FSoftObjectPath sop = nn->RealtyDataNode.TargetSequenceSoftPath;
							PawnSequence->LevelSequenceAsset = Cast<ULevelSequence>(sop.ResolveObject());
							PawnSequence->PlaybackSettings.PlayRate = 1.0f;
							PawnSequence->PlaybackSettings.bRestoreState = true;
							PawnSequence->PlaybackSettings.bPauseAtEnd = true;
							PawnSequence->SequencePlayer = NewObject<ULevelSequencePlayer>(PawnSequence);
							PawnSequence->SequencePlayer->Initialize(LoadObject<ULevelSequence>(GWorld, *nn->RealtyDataNode.TargetSequenceSoftPath), PawnSequence->GetLevel(), PawnSequence->PlaybackSettings, PawnSequence->CameraSettings);

							FMovieSceneSequencePlaybackParams MovieSceneSequencePlaybackParams;
							MovieSceneSequencePlaybackParams.Time = 0;
							PawnSequence->SequencePlayer->SetPlaybackPosition(MovieSceneSequencePlaybackParams);


							FTransform tf = OutActors[0]->GetActorTransform();
							nn->SetPointTargetTransform(tf);

							PawnSequence->Destroy();


						}




					}),
				FCanExecuteAction()
						)
		);
	}


	Super::GetContextMenuActions(Menu, Context);
}

void URealtyEdGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	FGraphNodeCreator<UEntryNode> NodeCreator(Graph);
	UEntryNode* StartNode = NodeCreator.CreateNode();
	NodeCreator.Finalize();
	SetNodeMetaData(StartNode, FNodeMetadata::DefaultGraphNode);
}


TSharedPtr<FEdGraphSchemaAction> URealtyEdGraphSchema::GetCreateCommentAction() const
{
	return TSharedPtr<FEdGraphSchemaAction>(static_cast<FEdGraphSchemaAction*>(new FSchemaAction_AddComment));
}

#pragma optimize("",on)

