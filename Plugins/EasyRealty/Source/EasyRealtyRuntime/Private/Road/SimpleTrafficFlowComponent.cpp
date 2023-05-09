// Fill out your copyright notice in the Description page of Project Settings.


#include "Road/SimpleTrafficFlowComponent.h"
#include <Components/HierarchicalInstancedStaticMeshComponent.h>
#include <Components/SplineComponent.h>
#include <Kismet/KismetMathLibrary.h>

// Sets default values for this component's properties
USimpleTrafficFlowComponent::USimpleTrafficFlowComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	
}


// Called when the game starts
void USimpleTrafficFlowComponent::BeginPlay()
{
	Super::BeginPlay();
	CacheWayType = WayType;

	TrafficInstances.Empty();

	AActor* A = GetOwner();
	if (A)
	{
		TArray<UActorComponent*> Comps = A->GetComponentsByTag(USplineComponent::StaticClass(), TrafficFlowUseSplineTag);
		for (auto& tmp : Comps)
		{
			USplineComponent* sp = Cast<USplineComponent>(tmp);
			if (sp)
			{
				TrafficInstances.Add(FTrafficInstance());
				FTrafficInstance& Inst = TrafficInstances[TrafficInstances.Num() - 1];
				Inst.SplineComponent = sp;
			}
		}

	}

	Init();
	
}


// Called every frame
void USimpleTrafficFlowComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	Update(DeltaTime);
}

void USimpleTrafficFlowComponent::Init()
{

	for (auto &tmp : CarStaticMeshComponents)
	{
		tmp->ClearInstances();
	}

	if (CarMeshClass.Num() <= 0)
	{
		return;
	}

	TFunction<void(USplineComponent*, float, TArray<FCarInfo>&, bool,int32)> BuildCarInfo = [this](USplineComponent* SC, float SML, TArray<FCarInfo>& CI, bool R,int32 MeshNum)
	{
		CI.Empty();

		for (int32 i = 0; i < MeshNum; ++i)
		{
			CI.Add(FCarInfo());
			CI[i].MeshComponentIndex = i;
		}

		float CurrentDistanceLocal = 0.0f;
		while (1)
		{
			float d = GetNextRandomDistance(CurrentDistanceLocal);
			if (d > SML)
			{
				break;
			}
			CurrentDistanceLocal = d;

			int32 CarType = FMath::RandRange(0, MeshNum - 1);
			CI[CarType].DistanceOnSpline.Add(CurrentDistanceLocal);
			CI[CarType].RealTransform.Add(FTransform());
		}

		for (auto& tmp : CI)
		{
			UInstancedStaticMeshComponent* ISMC = CarStaticMeshComponents[tmp.MeshComponentIndex];

			int32 index = 0;
			for (auto disTMP : tmp.DistanceOnSpline)
			{
				if (R)
				{
					tmp.RealTransform[index] = SC->GetTransformAtDistanceAlongSpline(disTMP, ESplineCoordinateSpace::World);
				}
				else
				{
					tmp.RealTransform[index] = SC->GetTransformAtDistanceAlongSpline(FMath::Clamp<float>(SML - disTMP, 0, SML), ESplineCoordinateSpace::World);
				}
				FTransform& tf = tmp.RealTransform[index];
				FVector L = tf.GetLocation();
				L.Z += ZOffset;
				tf.SetLocation(L);
				if (!R)
				{
					tf.SetRotation(UKismetMathLibrary::MakeRotFromX(tf.GetRotation().GetForwardVector() * -1).Quaternion());
				}

				FVector OffsetDir = tf.GetRotation().GetRightVector();
				OffsetDir.Z = 0;
				tf.SetLocation(tf.GetLocation() + OffsetDir * LROffset);
				tf.SetScale3D(FVector(CarScaling));

				ISMC->AddInstance(tmp.RealTransform[index]);
				++index;
			}
		}
	};

	for (auto& Tmp : TrafficInstances)
	{
		Tmp.SplineMaxLength = Tmp.SplineComponent->GetSplineLength();
		int32 MeshNum = CarStaticMeshComponents.Num();

		BuildCarInfo(Tmp.SplineComponent, Tmp.SplineMaxLength,Tmp.CarInfos, true, MeshNum);
		if (CacheWayType == ETrafficWayType::ETWT_TwoWay)
			BuildCarInfo(Tmp.SplineComponent, Tmp.SplineMaxLength, Tmp.CarInfosL, false, MeshNum);

		Update(0);
	}
}

void USimpleTrafficFlowComponent::Update(float deltatime)
{
	float D = deltatime * MoveSpeedOfVehicles;
	TFunction<void(USplineComponent*, float, TArray<FCarInfo>&, bool)> UpdateCarTransform = [this, D](USplineComponent* SC, float SML, TArray<FCarInfo>& CI, bool R)
	{
		for (auto& tmp : CI)
		{
			int32 index = 0;
			for (auto& disTMP : tmp.DistanceOnSpline)
			{
				disTMP += D;
				if(disTMP >= SML)
					disTMP = UKismetMathLibrary::GenericPercent_FloatFloat(disTMP, SML);

				if (R)
				{
					tmp.RealTransform[index] = SC->GetTransformAtDistanceAlongSpline(disTMP, ESplineCoordinateSpace::World);
				}
				else
				{
					tmp.RealTransform[index] = SC->GetTransformAtDistanceAlongSpline(FMath::Clamp<float>(SML - disTMP, 0, SML), ESplineCoordinateSpace::World);
				}
			
				FTransform& tf = tmp.RealTransform[index];
				FVector L = tf.GetLocation();
				L.Z += ZOffset;
				tf.SetLocation(L);
				if (!R)
				{
					tf.SetRotation(UKismetMathLibrary::MakeRotFromX(tf.GetRotation().GetForwardVector() * -1).Quaternion());
				}
				FVector OffsetDir = tf.GetRotation().GetRightVector();
				OffsetDir.Z = 0;
				tf.SetLocation(tf.GetLocation() + OffsetDir * LROffset);
				tf.SetScale3D(FVector(CarScaling));
				++index;
			}
		}
	};


	TArray<int32> StartIndex;
	for (int32 i = 0;i <  CarStaticMeshComponents.Num();++i)
	{
		StartIndex.Add(0);
	}

	for (auto& Tmp : TrafficInstances)
	{
		UpdateCarTransform(Tmp.SplineComponent, Tmp.SplineMaxLength, Tmp.CarInfos, true);
		if (CacheWayType == ETrafficWayType::ETWT_TwoWay)
			UpdateCarTransform(Tmp.SplineComponent, Tmp.SplineMaxLength, Tmp.CarInfosL, false);

		//
		int32 index = 0;
		int32 acc = 0;
		for (auto& tmp : Tmp.CarInfos)
		{
			UInstancedStaticMeshComponent* ISMC = CarStaticMeshComponents[tmp.MeshComponentIndex];
			ISMC->BatchUpdateInstancesTransforms(StartIndex[tmp.MeshComponentIndex], tmp.RealTransform, true, false);
			if (CacheWayType == ETrafficWayType::ETWT_TwoWay)
				ISMC->BatchUpdateInstancesTransforms(StartIndex[tmp.MeshComponentIndex] + tmp.RealTransform.Num(), Tmp.CarInfosL[index].RealTransform, true, false);

			StartIndex[tmp.MeshComponentIndex] += tmp.RealTransform.Num();

			if (CacheWayType == ETrafficWayType::ETWT_TwoWay)
			{
				StartIndex[tmp.MeshComponentIndex] += Tmp.CarInfosL[index].RealTransform.Num();
			}
			++index;
		}
	}

	for (auto &tmp : CarStaticMeshComponents)
	{
		tmp->MarkRenderStateDirty();
	}

}

float USimpleTrafficFlowComponent::GetNextRandomDistance(float d)
{
	return
		d + MeanDistanceOfVehicles + FMath::RandRange(0.0f, RandomRangeAddedToMeanDistanceOfVehicles);
}

#if WITH_EDITOR
void USimpleTrafficFlowComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == TEXT("CarMeshClass"))
	{
		for (auto &tmp : CarStaticMeshComponents)
		{
			if (tmp)
			{
				tmp->UnregisterComponent();
				tmp->DestroyComponent();
			}
		}
		CarStaticMeshComponents.Empty();
		for (int32 i = 0; i < CarMeshClass.Num(); ++i)
		{
			UHierarchicalInstancedStaticMeshComponent* mc = NewObject<UHierarchicalInstancedStaticMeshComponent>(this ,*FString::Printf(TEXT("ISMC_%d"), i));
			if (mc)
			{
				mc->SetStaticMesh(CarMeshClass[i]);
				mc->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				mc->SetCanEverAffectNavigation(false);
				mc->CastShadow = false;
				mc->OnComponentCreated();
				mc->RegisterComponent();
				CarStaticMeshComponents.Add(mc);
			}
		}

	}
}
#endif