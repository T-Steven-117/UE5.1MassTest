// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/CenterRoamComponent.h"
#include <Engine/GameViewportClient.h>
#include <Framework/Application/SlateApplication.h>
#include <Slate/SGameLayerManager.h>
#include <Engine/UserInterfaceSettings.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include <GameFramework/SpringArmComponent.h>
#include <Components/SceneComponent.h>
#include <Kismet/GameplayStatics.h>


// Sets default values for this component's properties
UCenterRoamComponent::UCenterRoamComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	LeftMouseButtonDown = false;

	InUse = false;
}


// Called when the game starts
void UCenterRoamComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	LeftMouseButtonDown = false;

	InUse = false;

	CenterLocation = GetFocusPoint();
}


// Called every frame
void UCenterRoamComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (!InUse)
		return;

	CalcPawnTransform(DeltaTime);

	OnMouseMove();

	if (LeftMouseButtonDown)
	{
		FVector2D delta = TargetMouseLocation - CacheMouseLocation;

		TargetPawnRotation = CachePawnRotation;
		TargetPawnRotation.Yaw += delta.X * 0.1f;
		TargetPawnRotation.Pitch = FMath::ClampAngle(TargetPawnRotation.Pitch - delta.Y * 0.1f, -60, 60);

	}
}




void UCenterRoamComponent::OnControlLost()
{
	LeftMouseButtonDown = false;

	InUse = false;

}

void UCenterRoamComponent::OnControlGet()
{
	InUse = true;

	CenterLocation = GetFocusPoint();

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!pawn)
	{
		return;
	}
	FVector PawnLoc = pawn->GetActorLocation();
	TargetDistance = (CenterLocation - PawnLoc).Size();

	TargetPawnRotation = UKismetMathLibrary::FindLookAtRotation(PawnLoc, CenterLocation);

	CalcPawnTransform(1000);
}



void UCenterRoamComponent::OnControlGet(FVector NewFocusLoc, FRotator NewFocusRot)
{
	InUse = true;

	CenterLocation = GetFocusPoint(NewFocusLoc, NewFocusRot);

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!pawn)
	{
		return;
	}
	FVector PawnLoc = pawn->GetActorLocation();
	TargetDistance = (CenterLocation - PawnLoc).Size();

	TargetPawnRotation = UKismetMathLibrary::FindLookAtRotation(PawnLoc, CenterLocation);

	CalcPawnTransform(1000);
}

void UCenterRoamComponent::OnLeftMouseButton_Pressed()
{
	if (!InUse)
	{
		return;
	}

	LeftMouseButtonDown = true;

	CacheMouseLocation = TargetMouseLocation = GetMouseLocation();

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	TargetPawnRotation = CachePawnRotation = UKismetMathLibrary::FindLookAtRotation(pawn->GetActorLocation(), CenterLocation);
}

void UCenterRoamComponent::OnLeftMouseButton_Released()
{
	if (!InUse)
	{
		return;
	}

	LeftMouseButtonDown = false;
}


void UCenterRoamComponent::OnMouseMove()
{
	if (InUse && LeftMouseButtonDown)
	{
		TargetMouseLocation = GetMouseLocation();
	}
}


FVector2D UCenterRoamComponent::GetMouseLocation()
{
	if (UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport())
	{
		FVector2D MousePosition = FSlateApplication::Get().GetCursorPos();
		TSharedPtr<IGameLayerManager> LayerManager = ViewportClient->GetGameLayerManager();
		FGeometry ViewportGeometry = LayerManager->GetViewportWidgetHostGeometry();
		FVector2D p = ViewportGeometry.AbsoluteToLocal(MousePosition);

		FVector2D ViewportSize;
		ViewportClient->GetViewportSize(ViewportSize);
		float ViewportScale = GetDefault<UUserInterfaceSettings>()->GetDPIScaleBasedOnSize(FIntPoint(ViewportSize.X, ViewportSize.Y));

		return p * ViewportScale;
	}

	return FVector2D::ZeroVector;
}

void UCenterRoamComponent::CalcPawnTransform(float DT)
{
	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!InUse || !pawn)
	{
		return;
	}

	FRotator r =
		UKismetMathLibrary::RInterpTo(
			pawn->GetActorRotation(),
			TargetPawnRotation,
			DT, 30);

	FVector dir = r.Vector();

	FVector PawnLoc = pawn->GetActorLocation();

	FVector CurrentLoc = CenterLocation - dir * TargetDistance;

	TArray<AActor*> OutActors;
	FHitResult OutHit;
	if (UKismetSystemLibrary::LineTraceSingle(GetWorld(), CenterLocation, CurrentLoc, ETraceTypeQuery::TraceTypeQuery1, false, OutActors, EDrawDebugTrace::None, OutHit, true))
	{
		//后面可以改成透明
		float NewDistance = (CenterLocation - OutHit.Location).Size() * 0.9f;

		CurrentLoc = CenterLocation - dir * NewDistance;
	}

	pawn->SetActorLocation(CurrentLoc);

	FRotator CorrRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLoc, CenterLocation);
	pawn->SetActorRotation(CorrRotation);



}



FVector UCenterRoamComponent::GetFocusPoint()
{
	AActor* a = GetOwner();

	FVector loc = a->GetActorLocation();
	FRotator r = a->GetActorRotation();

	FVector dir = UKismetMathLibrary::GetForwardVector(r);
	dir.Normalize();

	float absPitch = 90.0f - UKismetMathLibrary::Abs(r.Pitch);

	//
	if (UKismetMathLibrary::NearlyEqual_FloatFloat(absPitch, 90.0f))
	{
		const float ConstDistance = 100.0f;

		return ConstDistance * dir + loc;
	}
	else
	{
		return (loc.Z - MinPlaneZ) / UKismetMathLibrary::DegCos(absPitch) * dir + loc;
	}
}

FVector UCenterRoamComponent::GetFocusPoint(FVector NewLoc, FRotator NewRot)
{
	FVector loc = NewLoc;
	FRotator r = NewRot;

	FVector dir = UKismetMathLibrary::GetForwardVector(r);
	dir.Normalize();

	float absPitch = 90.0f - UKismetMathLibrary::Abs(r.Pitch);

	//
	if (UKismetMathLibrary::NearlyEqual_FloatFloat(absPitch, 90.0f))
	{
		const float ConstDistance = 100.0f;

		return ConstDistance * dir + loc;
	}
	else
	{
		return (loc.Z - MinPlaneZ) / UKismetMathLibrary::DegCos(absPitch) * dir + loc;
	}
}
