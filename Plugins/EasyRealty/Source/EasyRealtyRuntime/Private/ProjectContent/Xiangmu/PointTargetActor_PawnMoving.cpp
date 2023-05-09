// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h"
#include <Kismet/GameplayStatics.h>
#include "Runtime/RealtyPawn.h"
#include <UObject/ConstructorHelpers.h>
#include <Blueprint/UserWidget.h>
#include "../../../Public/ProjectContent/Xiangmu/MovingUIWidget.h"
#include <Components/SceneComponent.h>
#include <Components/BoxComponent.h>




APointTargetActor_PawnMoving::APointTargetActor_PawnMoving()
{
	//static ConstructorHelpers::FClassFinder<UMovingUIWidget> MovingUIClassObj(TEXT("WidgetBlueprint'/Game/Blueprints/yw/PawnMovingUI/PawnMovingUI.PawnMovingUI_C'"));
	//MovingUIClass = MovingUIClassObj.Class;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	MiniMapBound = CreateDefaultSubobject<UBoxComponent>(TEXT("MiniMapBound"));
	MiniMapBound->SetupAttachment(RootComponent);
	MiniMapBound->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APointTargetActor_PawnMoving::BeginPlay()
{
	Super::BeginPlay();

	pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	CachePawn = Cast<ARealtyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}

void APointTargetActor_PawnMoving::OnControlLost()
{
	Super::OnControlLost();

	pc->bShowMouseCursor = true;

	CachePawn->EnablePawn(false);
	if (MovingUIPtr)
	{
		MovingUIPtr->RemoveFromParent();
		MovingUIPtr = nullptr;
	}
}

void APointTargetActor_PawnMoving::OnControlGet()
{
	Super::OnControlGet();


	pc->bShowMouseCursor = true;

	FRotator R = GetActorRotation();
	R.Roll = R.Pitch = 0;
	CachePawn->EnablePawn(true,R);

	MovingUIPtr = CreateWidget<UMovingUIWidget>(GetWorld(), MovingUIClass);
	MovingUIPtr->BoundCenter.X = MiniMapBound->GetComponentLocation().X;
	MovingUIPtr->BoundCenter.Y = MiniMapBound->GetComponentLocation().Y;
	MovingUIPtr->BoundHalfX = MiniMapBound->GetScaledBoxExtent().X;
	MovingUIPtr->BoundHalfY = MiniMapBound->GetScaledBoxExtent().Y;
	MovingUIPtr->MinimapTex = MinimapTex;
	MovingUIPtr->OnInit();
	MovingUIPtr->AddToViewport(-1);
	//UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameAndUI());
}

void APointTargetActor_PawnMoving::OnLeftMouseButton_Pressed()
{
	/*pc->bShowMouseCursor = !pc->bShowMouseCursor;
	if (!pc->bShowMouseCursor)
	{
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameAndUI());
	}*/


	{
		//CachePawn->AddMovementInput(CachePawn->GetActorForwardVector(), 50);
	}
}

void APointTargetActor_PawnMoving::OnLeftMouseButton_Released()
{

}



void APointTargetActor_PawnMoving::OnForward(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	//if (Scale != 0.0f)
	//{
	//	CachePawn->AddMovementInput(CachePawn->GetActorForwardVector(), Scale);
	//}
}

void APointTargetActor_PawnMoving::OnRight(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	//if (Scale != 0.0f)
	//{
	//	CachePawn->AddMovementInput(CachePawn->GetActorRightVector(), Scale);
	//}
}

void APointTargetActor_PawnMoving::OnTurn(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	//CachePawn->AddControllerYawInput(Scale * 3.0f);
}

void APointTargetActor_PawnMoving::OnLookup(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	//CachePawn->AddControllerPitchInput(Scale * 3.0f);
}
