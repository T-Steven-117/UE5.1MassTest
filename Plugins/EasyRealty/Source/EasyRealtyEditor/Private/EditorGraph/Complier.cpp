#include "EditorGraph/Complier.h"
#include "RealtyAsset/RealtyAsset.h"
#include "EditorGraph/Node/K3EdGraphNode.h"
#include <EdGraph/EdGraphNode.h>
#include "EditorGraph/Node/TravelNode/TravelNode.h"
#include "EditorGraph/Node/EntryNode/EntryNode.h"
#pragma optimize("",off)

void FRealtyGraphHelper::GetEntryNode(TArray<UEdGraphNode*>& out, const TArray<class UEdGraphNode*>& nodes)
{
	for (TArray<class UEdGraphNode*>::TConstIterator it(nodes); it; ++it)
	{
		UEdGraphNode* n = *it;

		UK3EdGraphNode* k3node = Cast<UK3EdGraphNode>(n);
		if (k3node)
		{
			if (k3node->type == 1)
			{
				if (!out.Contains(n))
				{
					out.Add(n);
				}
			}
		}
	}
}

FString FRealtyGraphHelper::ProcessNodes(const FString& ParentName, UEdGraphNode* node, TArray<struct FRealtyDataNode> &RealtyDataNode)
{
	UK3EdGraphNode* K3Node = Cast<UK3EdGraphNode>(node);

	if (K3Node->type == 1)
	{
		FString EntryName;
		for (TArray<UEdGraphPin*>::TIterator it(node->Pins); it; ++it)
		{
			UEdGraphPin* curpin = *it;

			if (curpin->Direction == EEdGraphPinDirection::EGPD_Output && curpin->PinType.PinCategory == TEXT("exec"))
			{
				for (int32 k = 0; k < curpin->LinkedTo.Num(); ++k)
				{
					UEdGraphNode* n = curpin->LinkedTo[k]->GetOwningNode();
					UTravelNode* nn = Cast<UTravelNode>(n);
					if (nn)
					{
						EntryName = nn->RealtyDataNode.SelfName;

						ProcessNodes("",nn, RealtyDataNode);

						//只处理一次，忽略多重连接
						break;
					}

					
				}
			}
		}

		return EntryName;
	}
	if (K3Node->type == 2)
	{
		UTravelNode* TravelNode = Cast<UTravelNode>(K3Node);
		if (TravelNode)
		{
		
			FRealtyDataNode R;
			R.SelfName = TravelNode->RealtyDataNode.SelfName;
			R.ParentName = ParentName;
			R.UIClassPtr = TravelNode->RealtyDataNode.UIClassPtr;
			R.SelfHidden =TravelNode->RealtyDataNode.SelfHidden;
			R.PointTargetClassPtr = TravelNode->RealtyDataNode.PointTargetClassPtr;
			R.PointTargetTag = TravelNode->RealtyDataNode.PointTargetTag;
			R.TargetSequenceSoftPath = TravelNode->RealtyDataNode.TargetSequenceSoftPath;
			R.PointTargetLocation = TravelNode->RealtyDataNode.PointTargetLocation;
			R.PointTargetRotation = TravelNode->RealtyDataNode.PointTargetRotation;
			R.BlendTime = TravelNode->RealtyDataNode.BlendTime;
			R.NoHoldTransform = TravelNode->RealtyDataNode.NoHoldTransform;
			R.NoTransfer = TravelNode->RealtyDataNode.NoTransfer;

			for (TArray<UEdGraphPin*>::TIterator it(node->Pins); it; ++it)
			{
				UEdGraphPin* curpin = *it;

				if (curpin->Direction == EEdGraphPinDirection::EGPD_Output && curpin->PinType.PinCategory == TEXT("exec"))
				{
					for (int32 k = 0; k < curpin->LinkedTo.Num(); ++k)
					{
						UEdGraphNode* n = curpin->LinkedTo[k]->GetOwningNode();
						UTravelNode* nn = Cast<UTravelNode>(n);
						if (nn)
						{
							R.LinkName.Add(nn->RealtyDataNode.SelfName);

							ProcessNodes(R.SelfName,n, RealtyDataNode);

							//只处理一次，忽略多重连接
							break;
						}

						
					}
				}
			}

			RealtyDataNode.Add(R);
		}
	}

	//根本不会走这里，因为总是从Entry节点进入
	return "";

}

bool FRealtyGraphHelper::Complier(class URealtyAsset* data)
{
	if (!data && !(data->GraphObject))
	{
		return false;
	}

	//得到Entry Node
	TArray<UEdGraphNode*> EntryNodes;
	FRealtyGraphHelper::GetEntryNode(EntryNodes, data->GraphObject->Nodes);


	if (EntryNodes.Num() > 0)
	{
		//只取第一个，之后再做限制
		UEdGraphNode* EntryNode = EntryNodes[0];

		//处理节点链表
		data->RealtyDataNodes.Empty();
		data->EntryName = ProcessNodes("",EntryNode, data->RealtyDataNodes);


	}


	return true;
}

#pragma optimize("",on)