// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/RealtyPawn.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <Components/CapsuleComponent.h>

#include "Component/RoamComponent.h"
#include "GameFramework/PlayerInput.h"
#include "Runtime/RealtyPlayerController.h"
#include "Runtime/PointTargetActor.h"
#define HEIGHT 420
ARealtyPawn::ARealtyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UCapsuleComponent* CC = Cast<UCapsuleComponent>(RootComponent);
	CC->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CC->SetCollisionObjectType(ECC_Pawn);
	CC->SetCapsuleRadius(30);
	CC->SetCapsuleHalfHeight(30);
	CC->SetCollisionResponseToAllChannels(ECR_Block);
	CC->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(GetCapsuleComponent());
	SpringArmComponent->bDoCollisionTest = false;
	SpringArmComponent->TargetArmLength = 0;
	SpringArmComponent->bEnableCameraLag = false;
	SpringArmComponent->CameraLagSpeed = 5;
	SpringArmComponent->bEnableCameraRotationLag = false;
	SpringArmComponent->CameraRotationLagSpeed = 5;
	SpringArmComponent->bUsePawnControlRotation = false;
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->SetRelativeLocation(FVector(0, 0, HEIGHT));
	bUseControllerRotationPitch = bUseControllerRotationRoll = bUseControllerRotationYaw = false;


	GetCharacterMovement()->SetAutoActivate(false);
	GetCharacterMovement()->SetActive(false);
	GetCharacterMovement()->MaxWalkSpeed = 4000.0f;
}

// Called when the game starts or when spawned
void ARealtyPawn::BeginPlay()
{
	Super::BeginPlay();
	

	cachePC = Cast<ARealtyPlayerController>(GetController());
}

// Called every frame
void ARealtyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARealtyPawn::EnablePawn(bool enable, FRotator r)
{
	UCapsuleComponent* cc = Cast<UCapsuleComponent>(RootComponent);
	cc->SetCollisionEnabled(enable ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);


	cachePC->SetControlRotation(r);
	SetActorRotation(r);

	SpringArmComponent->bUsePawnControlRotation = bUseControllerRotationYaw = enable;
	SpringArmComponent->TargetArmLength = enable ? 80 : 0;
	GetCharacterMovement()->SetActive(enable);
	GetCharacterMovement()->MaxStepHeight = 20.0f;
	SpringArmComponent->bDoCollisionTest = enable;

	SpringArmComponent->CameraLagSpeed = enable ? 30 : 5;
	SpringArmComponent->CameraRotationLagSpeed = enable ? 30 : 5;

}



void ARealtyPawn::InitializeDefaultPawnInputBindings()
{
	static bool bBindingsAdded = false;
	if (!bBindingsAdded)
	{
		bBindingsAdded = true;

		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping(TEXT("RealtyPawn_LeftMouseButton"), EKeys::LeftMouseButton));
		UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping(TEXT("RealtyPawn_RightMouseButton"), EKeys::RightMouseButton));

		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Forward"), EKeys::W, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Forward"), EKeys::S, -1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Right"), EKeys::A, -1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Right"), EKeys::D, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Turn"), EKeys::MouseX, 1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Lookup"), EKeys::MouseY, -1.f));
		UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping(TEXT("RealtyPawn_Zoom"), EKeys::MouseWheelAxis));
	}
}


// Called to bind functionality to input
void ARealtyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InitializeDefaultPawnInputBindings();

	PlayerInputComponent->BindAction(TEXT("RealtyPawn_LeftMouseButton"), EInputEvent::IE_Pressed, this, &ARealtyPawn::OnLeftMouseButton_Pressed);
	PlayerInputComponent->BindAction(TEXT("RealtyPawn_LeftMouseButton"), EInputEvent::IE_Released, this, &ARealtyPawn::OnLeftMouseButton_Released);

	PlayerInputComponent->BindAction(TEXT("RealtyPawn_RightMouseButton"), EInputEvent::IE_Pressed, this, &ARealtyPawn::OnRightMouseButton_Pressed);
	PlayerInputComponent->BindAction(TEXT("RealtyPawn_RightMouseButton"), EInputEvent::IE_Released, this, &ARealtyPawn::OnRightMouseButton_Released);

	PlayerInputComponent->BindAxis(TEXT("RealtyPawn_Zoom"), this, &ARealtyPawn::OnWheelChanged);
	PlayerInputComponent->BindAxis(TEXT("RealtyPawn_Forward"), this, &ARealtyPawn::OnForward);
	PlayerInputComponent->BindAxis(TEXT("RealtyPawn_Right"), this, &ARealtyPawn::OnRight);
	PlayerInputComponent->BindAxis(TEXT("RealtyPawn_Turn"), this, &ARealtyPawn::OnTurn);
	PlayerInputComponent->BindAxis(TEXT("RealtyPawn_Lookup"), this, &ARealtyPawn::OnLookup);

}

void ARealtyPawn::AddPawnWorldOffset(FVector DeltaLocation)
{
	if (!ConnectedRoamComp)
		return;
	//ConnectedRoamComp->AddPawnWorldOffset(DeltaLocation);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, "sfdfsdfsdfsdfsdf");
}

void ARealtyPawn::ToBeDog(bool tobe)
{
	if (tobe)
	{
		CameraComponent->SetRelativeLocation(FVector(0, 0, 170));
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
	else
	{
		CameraComponent->SetRelativeLocation(FVector(0, 0, HEIGHT));
		GetCharacterMovement()->MaxWalkSpeed = 4000.0f;
	}
}

void ARealtyPawn::OnLeftMouseButton_Pressed()
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnLeftMouseButton_Pressed();
	}
}

void ARealtyPawn::OnLeftMouseButton_Released()
{

	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnLeftMouseButton_Released();
	}
}


void ARealtyPawn::OnRightMouseButton_Pressed()
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnRightMouseButton_Pressed();
	}

}

void ARealtyPawn::OnRightMouseButton_Released()
{

	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnRightMouseButton_Released();
	}
}

void ARealtyPawn::OnWheelChanged(float Value)
{

	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnWheelChanged(Value);
		//GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor::Green,*FString(TEXT("%f"), Value));
	}
}


void ARealtyPawn::OnForward(float Scale)
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnForward(Scale);
	}
}

void ARealtyPawn::OnRight(float Scale)
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnRight(Scale);
	}
}

void ARealtyPawn::OnTurn(float Scale)
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnTurn(Scale);
	}
}

void ARealtyPawn::OnLookup(float Scale)
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->OnLookup(Scale);
	}
}

void ARealtyPawn::SetCameraLagSpeed(float InLagSpeed)
{
	//SpringArmComponent->CameraLagSpeed = InLagSpeed;
}

void ARealtyPawn::InitComp()
{
	if (cachePC && cachePC->UsePawnTargetActor)
	{
		cachePC->UsePawnTargetActor->InitComp();
	}
}
