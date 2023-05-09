// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/BuildingActor.h"
#include <Components/SceneComponent.h>
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <PrimitiveSceneProxy.h>
#include <SceneView.h>
#include <PrimitiveViewRelevance.h>

#if WITH_EDITOR
#include <Editor.h>
#endif


UFloorBoundboxComponent::UFloorBoundboxComponent()
{
	BoxExtent = FVector(32.0f, 32.0f, 32.0f);

}



UFloorBoundboxComponent::UFloorBoundboxComponent(const FVector& InExtent)
{
	BoxExtent = InExtent;
}

FPrimitiveSceneProxy* UFloorBoundboxComponent::CreateSceneProxy()
{
	class FFloorSceneProxy final : public FPrimitiveSceneProxy
	{
	public:
		SIZE_T GetTypeHash() const override
		{
			static size_t UniquePointer;
			return reinterpret_cast<size_t>(&UniquePointer);
		}

		FFloorSceneProxy(const UFloorBoundboxComponent* InComponent)
			: FPrimitiveSceneProxy(InComponent)
			, bDrawOnlyIfSelected(false)
			, BoxExtents(InComponent->BoxExtent)
			, BoxColor(FColor(255, 0, 0, 255))
			, LineThickness(InComponent->LineThickness)
		{
			bWillEverBeLit = false;
		}

		virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
		{
			QUICK_SCOPE_CYCLE_COUNTER(STAT_FloorSceneProxy_GetDynamicMeshElements);

			const FMatrix& LocalToWorld = GetLocalToWorld();

			for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
			{
				if (VisibilityMap & (1 << ViewIndex))
				{
					const FSceneView* View = Views[ViewIndex];

					const FLinearColor DrawColor = BoxColor;

					FPrimitiveDrawInterface* PDI = Collector.GetPDI(ViewIndex);
					DrawOrientedWireBox(PDI, LocalToWorld.GetOrigin(), LocalToWorld.GetScaledAxis(EAxis::X), LocalToWorld.GetScaledAxis(EAxis::Y), LocalToWorld.GetScaledAxis(EAxis::Z), BoxExtents, DrawColor, SDPG_World, LineThickness);
				}
			}
		}

		virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
		{
			const bool bProxyVisible = !bDrawOnlyIfSelected || IsSelected();

			const bool bShowForCollision = View->Family->EngineShowFlags.Collision && IsCollisionEnabled();

			FPrimitiveViewRelevance Result;
			Result.bDrawRelevance = (IsShown(View) && bProxyVisible) || bShowForCollision;
			Result.bDynamicRelevance = true;
			Result.bShadowRelevance = IsShadowCast(View);
			Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);
			return Result;
		}
		virtual uint32 GetMemoryFootprint(void) const override { return(sizeof(*this) + GetAllocatedSize()); }
		uint32 GetAllocatedSize(void) const { return(FPrimitiveSceneProxy::GetAllocatedSize()); }

	private:
		const uint32	bDrawOnlyIfSelected : 1;
		const FVector	BoxExtents;
		const FColor	BoxColor;
		const float LineThickness;
	};

	return new FFloorSceneProxy(this);
}

FBoxSphereBounds UFloorBoundboxComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	return FBoxSphereBounds(FBox(-BoxExtent, BoxExtent)).TransformBy(LocalToWorld);
}

void UFloorBoundboxComponent::UpdateBodySetup()
{

}


// Sets default values
ABuildingActor::ABuildingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	Mesh->SetupAttachment(RootComponent);

	LookPoint = CreateDefaultSubobject<USceneComponent>(TEXT("LookPoint"));
	LookPoint->SetupAttachment(Mesh);

	SceneryPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SceneryPoint"));
	SceneryPoint->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void ABuildingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



#if WITH_EDITOR
void ABuildingActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property->GetName().Equals(TEXT("Floors")))
	{
		for (auto& tmp : Floors)
		{
			if (tmp == nullptr)
			{
				tmp = NewObject<UFloorBoundboxComponent>(this);
				tmp->RegisterComponent();
				tmp->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
			}
		}
	}


}
void ABuildingActor::GenerationFloor()
{
	if (Floors.Num() <= 0 || FloorCount <= 0)
		return;

	FVector FirstExtent = Floors[0]->BoxExtent;
	FVector FirstLoc = Floors[0]->GetRelativeLocation();
	//while(Floors.Num())
	//{
	//	Floors[Floors.Num() - 1]->UnregisterComponent();
	//	Floors[Floors.Num() - 1]->DestroyComponent();
	//	Floors.RemoveAt(Floors.Num() - 1);
	//}
	for (int32 i = 0; i < Floors.Num(); ++i)
	{
		Floors[i]->UnregisterComponent();
		Floors[i]->DestroyComponent();
	}
	Floors.Empty();


	UFloorBoundboxComponent* tmp = NewObject<UFloorBoundboxComponent>(this);
	tmp->BoxExtent = FirstExtent;

	tmp->FloorInformation = FString::Printf(TEXT("뒤%d짜"), 1);

	tmp->RegisterComponent();
	tmp->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
	tmp->SetRelativeLocation(FirstLoc);
	Floors.Add(tmp);

	for (int32 i = 1; i < FloorCount; ++i)
	{
		tmp = NewObject<UFloorBoundboxComponent>(this);
		tmp->BoxExtent = FirstExtent;

		tmp->FloorInformation = FString::Printf(TEXT("뒤%d짜"), i + 1);

		tmp->RegisterComponent();
		tmp->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
		tmp->SetRelativeLocation(Floors[i - 1]->GetRelativeLocation() + FVector(0, 0, FloorStep));

		Floors.Add(tmp);
	}


	GEditor->MarkPackageDirty();
}

#endif


