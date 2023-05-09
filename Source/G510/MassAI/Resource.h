// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resource.generated.h"

UCLASS()
class G510_API AResource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResource();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void AddToResourceQueue();
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* staticComp;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int Floors=1;

};
