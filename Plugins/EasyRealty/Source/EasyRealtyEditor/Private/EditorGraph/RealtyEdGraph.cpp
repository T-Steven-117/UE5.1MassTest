// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorGraph/RealtyEdGraph.h"
#include "EditorGraph/RealtyEdGraphSchema.h"
#include <EdGraph/EdGraphPin.h>
#include <EdGraph/EdGraphNode.h>
#include "EditorGraph/Node/K3EdGraphNode.h"

URealtyEdGraph::URealtyEdGraph()
{
	Schema = URealtyEdGraphSchema::StaticClass();
	bEditable = true;

	PrePin = CurPin = nullptr;
}


void URealtyEdGraph::UpdateClassData()
{
	for (int32 Idx = 0; Idx < Nodes.Num(); Idx++)
	{
		UK3EdGraphNode* Node = Cast<UK3EdGraphNode>(Nodes[Idx]);
		if (Node)
		{
			Node->UpdateNodeClassData();
		}
	}
}

void URealtyEdGraph::OnDebugStateChanged(const FString& pre, const FString& cur)
{
	ClearDebugState();

	PrePin = pre;
	CurPin = cur;
}

void URealtyEdGraph::ClearDebugState()
{
	PrePin.Empty();
	CurPin.Empty();
}
