// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Niaokan/PointTarget_YiHuWatching.h"

#include "Kismet/GameplayStatics.h"
#include "Runtime/RealtyPawn.h"
#include <Blueprint/UserWidget.h>
#include "WorldPartition/DataLayer/DataLayerSubsystem.h"
#include "../../../Public/ProjectContent/Xiangmu/MovingUIWidget.h"
#include <Components/BoxComponent.h>

APointTarget_YiHuWatching::APointTarget_YiHuWatching()
{
	//static ConstructorHelpers::FClassFinder<UUserWidget> MovingUIClassObj(TEXT("WidgetBlueprint'/Game/Blueprints/yw/PawnMovingUI/PawnMovingUI.PawnMovingUI_C'"));
	//MovingUIClass = MovingUIClassObj.Class;

	//static ConstructorHelpers::FClassFinder<UUserWidget> MovingUIClassObj2(TEXT("WidgetBlueprint'/Game/Blueprints/yw/PawnMovingUI/PawnMovingUI_2.PawnMovingUI_2_C'"));
	//MovingUIClass2 = MovingUIClassObj2.Class;
}

void APointTarget_YiHuWatching::OnControlLost()
{
	if (UDataLayerSubsystem* DataLayerSubsystem = GetWorld()->GetSubsystem<UDataLayerSubsystem>())
	{
		DataLayerSubsystem-> SetDataLayerState(DataLayer, EDataLayerState::Activated);
	}

	pc->bShowMouseCursor = true;

	CachePawn->EnablePawn(false);
	CachePawn->ToBeDog(false);
	if (MovingUIPtr)
	{
		MovingUIPtr->RemoveFromParent();
		MovingUIPtr = nullptr;
	}
}

void APointTarget_YiHuWatching::OnControlGet()
{
	pc->bShowMouseCursor = true;

	FRotator R = GetActorRotation();
	R.Roll = R.Pitch = 0;
	CachePawn->EnablePawn(true, R);
	if(TobeDog)
		CachePawn->ToBeDog(true);

	if (UIIndex == 0)
	{
		MovingUIPtr = CreateWidget<UMovingUIWidget>(GetWorld(), MovingUIClass);
	}
	else
	{
		MovingUIPtr = CreateWidget<UMovingUIWidget>(GetWorld(), MovingUIClass2);
	}


	MovingUIPtr->BoundCenter.X = MiniMapBound->GetComponentLocation().X;
	MovingUIPtr->BoundCenter.Y = MiniMapBound->GetComponentLocation().Y;
	MovingUIPtr->BoundHalfX = MiniMapBound->GetScaledBoxExtent().X;
	MovingUIPtr->BoundHalfY = MiniMapBound->GetScaledBoxExtent().Y;
	MovingUIPtr->MinimapTex = MinimapTex;
	MovingUIPtr->OnInit();
	MovingUIPtr->AddToViewport(-1);
}

void APointTarget_YiHuWatching::OnControlPreGet()
{
	if (UDataLayerSubsystem* DataLayerSubsystem = GetWorld()->GetSubsystem<UDataLayerSubsystem>())
	{
		DataLayerSubsystem->SetDataLayerState(DataLayer, EDataLayerState::Activated);
	}
}
