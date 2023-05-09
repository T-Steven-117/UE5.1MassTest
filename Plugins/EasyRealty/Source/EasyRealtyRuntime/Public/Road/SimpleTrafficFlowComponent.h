// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SimpleTrafficFlowComponent.generated.h"


USTRUCT()
struct FCarInfo
{
	GENERATED_USTRUCT_BODY()
public:
	int32 MeshComponentIndex;
	TArray<float> DistanceOnSpline;
	TArray<FTransform> RealTransform;
};


UENUM(Blueprintable)
enum class ETrafficWayType :uint8
{
	ETWT_OneWay  UMETA(DisplayName = "One-Way"),
	ETWT_TwoWay  UMETA(DisplayName = "Two-Way")
};


USTRUCT()
struct FTrafficInstance
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(Transient) class USplineComponent* SplineComponent;
	UPROPERTY(Transient) float SplineMaxLength;
	UPROPERTY(Transient) TArray<FCarInfo> CarInfos;
	UPROPERTY(Transient) TArray<FCarInfo> CarInfosL;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYREALTYRUNTIME_API USimpleTrafficFlowComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USimpleTrafficFlowComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void Init();

	void Update(float deltatime);

public:



	UPROPERTY(EditAnywhere) FName TrafficFlowUseSplineTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<class UStaticMesh*> CarMeshClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeanDistanceOfVehicles = 5000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomRangeAddedToMeanDistanceOfVehicles = 5000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float MoveSpeedOfVehicles = 3000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) ETrafficWayType WayType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float LROffset = 200;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZOffset = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float CarScaling = 1;

	
	UPROPERTY(VisibleAnywhere) TArray<class UHierarchicalInstancedStaticMeshComponent*> CarStaticMeshComponents;


	UPROPERTY(Transient) ETrafficWayType CacheWayType;

	UPROPERTY(Transient) TArray<FTrafficInstance> TrafficInstances;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:

	
	float GetNextRandomDistance(float d);


};
