// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Classes/GameFramework/SpringArmComponent.h"
#include "../Runtime/RealtyRuntimeActor.h"
#include "RoamComponent.generated.h"


UCLASS(ClassGroup = Camera, meta = (BlueprintSpawnableComponent), hideCategories = (Mobility))
class UYWSpringArmComponent : public USpringArmComponent
{
	GENERATED_BODY()

public:

	void OnUpdate()
	{
		UpdateDesiredArmLocation(false, false, false, 0.f);
	}

};


UCLASS()
class EASYREALTYRUNTIME_API ARoamActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARoamActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UYWSpringArmComponent* SpringArmComp;

};





UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class EASYREALTYRUNTIME_API URoamComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	URoamComponent();
	~URoamComponent();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	FString LastName;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:

	virtual void Init(class AActor* PawnActor);

	UPROPERTY() TObjectPtr<class ARealtyPlayerController> CachePC;
	UPROPERTY() TObjectPtr<class AActor> UsePawnActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ScaleMinMaxLength = FVector2D(300.0f, 200000.0f);
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D RotationClamp = FVector2D(-60, -26);
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D BoundCenter = FVector2D(0, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ExtentBound = FVector2D(5000, 5000);
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Right_double_click_time = 0.3f;

	float MoveSpeed = 200;
	float RotationSpeed = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)  float ScaleSpeed = 1500;

	//InputEvent
	virtual void OnLeftMouseButton_Pressed();
	virtual void OnLeftMouseButton_Released();
	virtual void OnRightMouseButton_Pressed();
	virtual void OnRightMouseButton_Released();
	virtual void OnWheelChanged(float Value);
	virtual void OnMouseMove();

	void ControlTick(float DeltaTime);
	void CursorTick(float DeltaTime);

public:

	FVector2D GetMouseLocation();
	FVector GetFocusPoint();
	FVector GetForwardLineTraceHitLocation(AActor* Source, ECollisionChannel TraceChannel);;
	UPROPERTY() FVector OrginLocation;

	bool LeftDown;
	bool RightDown;
	float right_doubleclick_time;
	bool right_doubleclick_sure;
	float right_doubleclick_sure_time;
	void clear_rightdoubleclick_state();
	FVector2D CacheMouseLocation;
	FVector2D TargetMouseLocation;

	FVector CachePawnLocation;
	FRotator CachePawnRotation;

	float DesiredArmLength;


	UPROPERTY() class ARoamActor* RA;

	UPROPERTY() class UCurveFloat* MoveCurve = nullptr;

	//UPROPERTY() float UCurveFloat* RotateFactor = nullptr;
	UPROPERTY() float MoveFactor;

	UPROPERTY() class UCurveFloat* ScaleCurve = nullptr;
	UPROPERTY() float ScaleFactor;
	UPROPERTY()
	ARealtyRuntimeActor* RealtyActorRef;
};


