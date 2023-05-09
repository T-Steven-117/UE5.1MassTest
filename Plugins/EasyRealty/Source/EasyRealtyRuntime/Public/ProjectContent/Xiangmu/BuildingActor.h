// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/ShapeComponent.h>
#include "BuildingActor.generated.h"


UCLASS()
class UFloorBoundboxComponent : public UShapeComponent
{

	GENERATED_BODY()

public:

	UFloorBoundboxComponent();
	UFloorBoundboxComponent(const FVector& InExtent);

	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	virtual void UpdateBodySetup() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BoxExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FString FloorInformation;

};


UCLASS()
class EASYREALTYRUNTIME_API ABuildingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class UStaticMeshComponent> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class USceneComponent> LookPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<class UFloorBoundboxComponent*> Floors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanScenery;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class USceneComponent> SceneryPoint;


#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenerationFloor") float FloorStep = 20.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenerationFloor") int32 FloorCount = 10;
#endif
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	UFUNCTION(CallInEditor, Category = "GenerationFloor") void GenerationFloor();
#endif

};
