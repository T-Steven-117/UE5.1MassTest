#include "EditorGraph/Node/Comments/CommentsNodeAction.h"
#include <EdGraphNode_Comment.h>
#include <EdGraph/EdGraphSchema.h>

UEdGraphNode* FEdGraphSchemaAction_K3AddComment::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode /*= true*/)
{
	// Add menu item for creating comment boxes
	UEdGraphNode_Comment* CommentTemplate = NewObject<UEdGraphNode_Comment>();
	CommentTemplate->NodePosX = Location.X;
	CommentTemplate->NodePosY = Location.Y;
	CommentTemplate->SetBounds(FSlateRect(Location, Location + FVector2D(200, 200)));


	UEdGraphNode* NewNode = FEdGraphSchemaAction_NewNode::SpawnNodeFromTemplate<UEdGraphNode_Comment>(ParentGraph, CommentTemplate, Location, bSelectNewNode);

	return NewNode;
}

