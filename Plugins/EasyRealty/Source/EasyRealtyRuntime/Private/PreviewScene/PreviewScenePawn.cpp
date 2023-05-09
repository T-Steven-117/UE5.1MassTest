// Fill out your copyright notice in the Description page of Project Settings.



#include "PreviewScene/PreviewScenePawn.h"
#include <Components/SceneComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <Components/SceneCaptureComponent2D.h>


// Sets default values
APreviewScenePawn::APreviewScenePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 0.0f;
	SpringArmComponent->bDoCollisionTest = false;
	//SpringArmComponent->SetRelativeRotation(FRotator(-10,0,0));


	CameraComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
}

// Called when the game starts or when spawned
void APreviewScenePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APreviewScenePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APreviewScenePawn::Init(class UTextureRenderTarget2D* Texture)
{
	if (CameraComponent)
	{
		CameraComponent->TextureTarget = Texture;
	}
}

void APreviewScenePawn::OnAddMoveDelta(const FVector2D& delta)
{
	FRotator r = SpringArmComponent->GetRelativeRotation() + FRotator(-delta.Y * 0.1f, delta.X * 0.1f, 0.0f);

	SpringArmComponent->SetRelativeRotation(FRotator
	(
		FMath::Clamp<float>(r.Pitch,-70,70),
		r.Yaw,
		0.0f
	));

}

void APreviewScenePawn::OnForwardMoveDelta(const float delta)
{
	//SpringArmComponent->TargetArmLength = FMath::Clamp<float>(SpringArmComponent->TargetArmLength - delta * MoveSpeed, 100, 600);
}

