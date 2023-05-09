// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GameFramework/Character.h>
#include "RealtyPawn.generated.h"

UCLASS()
class EASYREALTYRUNTIME_API ARealtyPawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARealtyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EnablePawn(bool enable,FRotator r = FRotator(0, -90, 0));

	// Called to bind functionality to input
	void InitializeDefaultPawnInputBindings();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere) class USpringArmComponent* SpringArmComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere) class UCameraComponent* CameraComponent;
	UPROPERTY() class URoamComponent* ConnectedRoamComp;

	UFUNCTION(BlueprintCallable)
	void AddPawnWorldOffset(FVector DeltaLocation);

	void ToBeDog(bool tobe);
protected:

	UPROPERTY() TObjectPtr<class ARealtyPlayerController> cachePC;

public:

	void OnLeftMouseButton_Pressed();
	void OnLeftMouseButton_Released();
	void OnRightMouseButton_Pressed();
	void OnRightMouseButton_Released();
	void OnWheelChanged(float Value);

	void OnForward(float Scale);
	void OnRight(float Scale);
	void OnTurn(float Scale);
	void OnLookup(float Scale);

public:
	UFUNCTION(BlueprintCallable)
	void SetCameraLagSpeed(float InLagSpeed);
	//360
	UFUNCTION(BlueprintCallable)
		void InitComp();
};
