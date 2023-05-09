// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/RealtyRuntimeActor.h"
#include "Runtime/PointTargetActor.h"
#include "Kismet/GameplayStatics.h"
#include "UMG/RealtyUserWidgetBase.h"
#include "Runtime/RealtyFunctionLibrary.h"
#include "Component/RoamComponent.h"
#include "Runtime/RealtyPlayerController.h"

#pragma optimize("",off)
void FUIMapping::RemoveUI()
{
	if (uiPtr)
	{
		uiPtr->RemoveFromParent();
		uiPtr = nullptr;
	}
}

// Sets default values
ARealtyRuntimeActor::ARealtyRuntimeActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

#if WITH_EDITORONLY_DATA
	CurName = TEXT("Entry");
#endif
}

// Called when the game starts or when spawned
void ARealtyRuntimeActor::BeginPlay()
{
	Super::BeginPlay();


	GetWorld()->OnWorldBeginPlay.AddLambda([this]()
		{

			Start();
		});

}

// Called every frame
void ARealtyRuntimeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (ArmLenght>0&&ArmLenght <= CloseRangeLenght)
	{
		OnLerpUI.Broadcast(true);
	}
	else
	{
		OnLerpUI.Broadcast(false);
	}
	
}


void ARealtyRuntimeActor::Start()
{
	if (RealtyAsset)
	{
		UseData(RealtyAsset->GetFirstDataName());
	}
}


void ARealtyRuntimeActor::ReStart()
{
	if (RealtyAsset)
	{
		ClearAllUI();

		Start();
	}
}

void ARealtyRuntimeActor::UseData(const FString& Name, bool ForceRefreshWidget)
{
	if (!RealtyAsset)
	{
		return;
	}
	OnUseData.AddUObject(this,&ARealtyRuntimeActor::UpdateCacheName);
	bool bValid = RealtyAsset->IsValidNode(Name);
	if (bValid)
	{
		URealtyUserWidgetBase* CreatedUI = nullptr;
		bool NeedCreateUseDataWidget = ClearUI(Name, CreatedUI, ForceRefreshWidget);
		if (NeedCreateUseDataWidget)
		{

			CreatedUI = AddUI(Name);
		}
		else if (ForceRefreshWidget && !NeedCreateUseDataWidget)
		{
			UIMappingStack.Last().RemoveUI();
			CreatedUI = CreateWidget<URealtyUserWidgetBase>(GetWorld(), RealtyAsset->GetDataNode(Name)->UIClassPtr);
			CreatedUI->AddToViewport();
			UIMappingStack.Last().uiPtr = CreatedUI;
		}

		ARealtyPlayerController* RealtyPlayerController = Cast<ARealtyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	
		if (RealtyPlayerController)
		{
	
			bool Successful = false;

			const FRealtyDataNode* data = RealtyAsset->GetDataNode(Name);
			if (data)
			{
				if (data->PointTargetClassPtr)
				{
					FTransform TF;
					TF.SetLocation(data->PointTargetLocation);
					TF.SetRotation(data->PointTargetRotation.Quaternion());
					RealtyPlayerController->PossessNextPointTransient(data->SelfName, data->PointTargetClassPtr, data->TargetSequenceSoftPath, TF, data->BlendTime, data->NoHoldTransform, data->NoTransfer);
					Successful = true;
				}
				else if (!data->PointTargetTag.IsEmpty())
				{
					RealtyPlayerController->PossessNextPointPersistent(data->SelfName, data->PointTargetTag, data->TargetSequenceSoftPath, data->BlendTime, data->NoHoldTransform, data->NoTransfer, CreatedUI ? CreatedUI : nullptr);
					Successful = true;
				}
				else
					CreatedUI->PostProcess();
			}

			if (!Successful && !CreatedUI)
			{
				RealtyPlayerController->ClearPoint();
			}

		}
		

		PreName = CurName;
		CurName = Name;
		OnUseData.Broadcast(PreName, Name);
	}
}


void ARealtyRuntimeActor::UseDataFast(const FString& Name, bool ForceRefreshWidget /*= false*/)
{
	if (!RealtyAsset)
	{
		return;
	}
	
	bool bValid = RealtyAsset->IsValidNode(Name);
	if (bValid)
	{
		URealtyUserWidgetBase* CreatedUI = nullptr;
		bool NeedCreateUseDataWidget = ClearUI(Name, CreatedUI, ForceRefreshWidget);
		if (NeedCreateUseDataWidget)
		{

			CreatedUI = AddUI(Name);
		}
		else if (ForceRefreshWidget && !NeedCreateUseDataWidget)
		{
			UIMappingStack.Last().RemoveUI();
			CreatedUI = CreateWidget<URealtyUserWidgetBase>(GetWorld(), RealtyAsset->GetDataNode(Name)->UIClassPtr);
			CreatedUI->AddToViewport();
			UIMappingStack.Last().uiPtr = CreatedUI;
		}

		ARealtyPlayerController* RealtyPlayerController = Cast<ARealtyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		if (RealtyPlayerController)
		{
			bool Successful = false;

			const FRealtyDataNode* data = RealtyAsset->GetDataNode(Name);
			if (data)
			{
				if (!data->PointTargetTag.IsEmpty())
				{
					RealtyPlayerController->PossessNextPointPersistentFast(data->SelfName, data->PointTargetTag, data->TargetSequenceSoftPath, data->BlendTime, data->NoHoldTransform, data->NoTransfer, CreatedUI ? CreatedUI : nullptr);
					Successful = true;
				}
				else
					CreatedUI->PostProcess();
			}

			if (!Successful && !CreatedUI)
			{
				RealtyPlayerController->ClearPoint();
			}

		}

		AfterClicked.Broadcast();
		PreName = RealtyAsset->FindParentName(Name);
		CurName = Name;	
	}
}
bool ARealtyRuntimeActor::ClearUI(const FString& Name, URealtyUserWidgetBase*& UIPtr, bool bForceRefresh)
{
	if (UIMappingStack.Num() <= 0)
	{
		return true;
	}

	FUIMapping& UIMapping = UIMappingStack[UIMappingStack.Num() - 1];
	if (UIMapping.NodeName!=Name)
	{
		auto*& LastUI = URealtyUserWidgetBase::LastUI;
		LastUI = UIMapping.uiPtr;
		LastUI->bMarkRemove = true;
		UIMappingStack.RemoveAt(UIMappingStack.Num() - 1);
		if (nullptr != UIMapping.uiPtr)
		{
			UIPtr = UIMapping.uiPtr;
		}
		return true;
	}
	else
	{
		return false;
	}
	//if (UIMapping.NodeName == Name)
	//{
	//	//重复进入此节点
	//	UIMapping.RemoveUI();
	//	UIMappingStack.RemoveAt(UIMappingStack.Num() - 1);
	//	if (nullptr!= UIMapping.uiPtr)
	//	{
	//		UIPtr = UIMapping.uiPtr;
	//	}
	//	return bForceRefresh;
	//}
	//FString UseNode_Parent = RealtyAsset->FindParentName(Name);



	////!!!check UseNode_Parent,UIMapping.NodeName

	//if (UseNode_Parent != UIMapping.NodeName)
	//{
	//	UIMapping.RemoveUI();
	//	UIMappingStack.RemoveAt(UIMappingStack.Num() - 1);


	//	return ClearUI2(Name, UseNode_Parent);
	//}
	//else
	//{
	//	return true;
	//}


}

bool ARealtyRuntimeActor::ClearUI2(const FString& Name, const FString& ParentName)
{
	if (UIMappingStack.Num() <= 0)
	{
		return true;
	}

	FUIMapping& UIMapping = UIMappingStack[UIMappingStack.Num() - 1];
	if (ParentName != UIMapping.NodeName)
	{
		UIMapping.RemoveUI();
		UIMappingStack.RemoveAt(UIMappingStack.Num() - 1);


		return ClearUI2(Name, ParentName);
	}
	else
	{
		return true;
	}
}

void ARealtyRuntimeActor::ClearAllUI()
{
	for (auto& tmp : UIMappingStack)
	{
		tmp.RemoveUI();
	}
	UIMappingStack.Empty();
}

URealtyUserWidgetBase* ARealtyRuntimeActor::AddUI(const FString& Name)
{
	URealtyUserWidgetBase* NewUI = nullptr;
	//T:11.18新增
	if (UIMappingStack.Num() > 0)
	{
		if (RealtyAsset->GetDataNode(UIMappingStack.Last().NodeName)->SelfHidden)
		{
			UIMappingStack[UIMappingStack.Num() - 1].uiPtr->CallOnRealtyDelegate();
		}
	}
	///---
	UIMappingStack.Add(FUIMapping());

	FUIMapping& UIMapping = UIMappingStack[UIMappingStack.Num() - 1];

	UIMapping.NodeName = Name;

	const FRealtyDataNode* data = RealtyAsset->GetDataNode(Name);
	if (data)
	{
		if (data->UIClassPtr)
		{
			NewUI = CreateWidget<URealtyUserWidgetBase>(GetWorld(), data->UIClassPtr);
			UIMapping.uiPtr = NewUI;
// 			if (NewUI)
// 			{
// 				NewUI->AddToViewport();
// 			}
		}
	}

	return NewUI;
}

class URealtyUserWidgetBase* ARealtyRuntimeActor::GetTopUIPtr()
{
	if (UIMappingStack.Num() > 0)
	{
		return UIMappingStack[UIMappingStack.Num() - 1].uiPtr;
	}

	return nullptr;
}

void ARealtyRuntimeActor::UpdateCacheName(FString Inpre, FString Incur)
{
	OnUseData.RemoveAll(this);
	CacheName=Incur;
	CachePreName=Inpre;
}



#pragma optimize("",on)