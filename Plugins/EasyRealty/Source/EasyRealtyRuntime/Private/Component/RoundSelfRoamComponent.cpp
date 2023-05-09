// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/RoundSelfRoamComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/RealtyPlayerController.h"
#include <UObject/ConstructorHelpers.h>
#include <Curves/CurveFloat.h>
#include <Kismet/KismetMathLibrary.h>

// Sets default values for this component's properties
URoundSelfRoamComponent::URoundSelfRoamComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	LeftMouseButtonDown = false;

}


// Called when the game starts
void URoundSelfRoamComponent::BeginPlay()
{
	Super::BeginPlay();

	LeftMouseButtonDown = false;

	UsePawnActor = nullptr;

	
}


// Called every frame
void URoundSelfRoamComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (!UsePawnActor)
		return;

	OnMouseMove();

	if (LeftMouseButtonDown)
	{
		FVector2D delta = TargetMouseLocation - CacheMouseLocation;

		TargetPawnRotation = CachePawnRotation;
		TargetPawnRotation.Yaw += delta.X * 0.1f;
		TargetPawnRotation.Pitch = FMath::ClampAngle(TargetPawnRotation.Pitch - delta.Y * 0.1f, -60, 60);

	}
	FRotator r =
		UKismetMathLibrary::RInterpTo(
			UsePawnActor->GetActorRotation(),
			TargetPawnRotation,
			DeltaTime, 30);

	UsePawnActor->SetActorRotation(r);


}

void URoundSelfRoamComponent::Init(class AActor* PawnActor)
{
	UsePawnActor = PawnActor;

	LeftMouseButtonDown = false;


	if (UsePawnActor)
	{
		TargetPawnRotation = CachePawnRotation = UsePawnActor->GetActorRotation();
	}

}

void URoundSelfRoamComponent::OnLeftMouseButton_Pressed()
{
	if (!UsePawnActor)
	{
		return;
	}


	LeftMouseButtonDown = true;

	CacheMouseLocation = TargetMouseLocation = GetMouseLocation();

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	TargetPawnRotation = CachePawnRotation = UsePawnActor->GetActorRotation();
}

void URoundSelfRoamComponent::OnLeftMouseButton_Released()
{

	LeftMouseButtonDown = false;
}


void URoundSelfRoamComponent::OnMouseMove()
{
	if (UsePawnActor && LeftMouseButtonDown)
	{
		TargetMouseLocation = GetMouseLocation();
	}
}


void URoundSelfRoamComponent::InitComp()
{
	if (!UsePawnActor)
	{
		return;
	}

	UsePawnActor->SetActorRotation(FRotator(0, 0, 0));
	CachePawnRotation = TargetPawnRotation = FRotator(0, 0, 0);
}

void URoundSelfRoamComponent::OnRotationStart(FVector2D v)
{
	if (!UsePawnActor)
	{
		return;
	}


	LeftMouseButtonDown = true;

	Cache_TargetMouseLocation = CacheMouseLocation = TargetMouseLocation = v;

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	TargetPawnRotation = CachePawnRotation = UsePawnActor->GetActorRotation();
}

void URoundSelfRoamComponent::OnRotationEnd()
{
	LeftMouseButtonDown = false;
	Dir = FMath::RandBool();
}

void URoundSelfRoamComponent::OnRotationUpdate(FVector2D v)
{
	if (UsePawnActor && LeftMouseButtonDown)
	{
		Cache_TargetMouseLocation = v;
	}
}

void URoundSelfRoamComponent::StartAutoRotation(float DeltaTime)
{
	CachePawnRotation = UsePawnActor->GetActorRotation();
	CachePawnRotation.Yaw += (Dir ? 1 : -1) * 6 * DeltaTime;


	CachePawnRotation.Pitch = UKismetMathLibrary::FInterpTo(CachePawnRotation.Pitch, 0, DeltaTime, 1);



	TargetPawnRotation = CachePawnRotation;
}

void URoundSelfRoamComponent::EndAutoRotation()
{
	Dir = FMath::RandBool();
}

FVector2D URoundSelfRoamComponent::GetMouseLocation()
{
	FVector2D f;

	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	pc->GetMousePosition(f.X, f.Y);

	return f;
}

