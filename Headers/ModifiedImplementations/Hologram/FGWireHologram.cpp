// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWireHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"
#include "FGBuildable.h"

AFGWireHologram::AFGWireHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35; 
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildable::StaticClass()); 
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0; 
	this->bHidden = true; 
	this->bReplicates = true; 
}
void AFGWireHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGWireHologram::BeginPlay(){ }
void AFGWireHologram::Tick(float dt){ }
AActor* AFGWireHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
int32 AFGWireHologram::GetBaseCostMultiplier() const{ return int32(); }
bool AFGWireHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGWireHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGWireHologram::OnInvalidHitResult(){ }
void AFGWireHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
void AFGWireHologram::ScrollRotate(int32 delta, int32 step){ }
void AFGWireHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGWireHologram::Destroyed(){ }
void AFGWireHologram::CheckValidPlacement(){ }
void AFGWireHologram::SetupDepthMeshComponent(USceneComponent* attachParent, UMeshComponent* componentTemplate){ }
void AFGWireHologram::CheckClearance(){ }
void AFGWireHologram::CheckValidSnap(){ }
void AFGWireHologram::CheckLength(){ }
UFGCircuitConnectionComponent* AFGWireHologram::FindOverlappingCircuitConnectionComponent(const FVector& location,  AActor* actor,  UFGCircuitConnectionComponent* ignoredConnectionComponent){ return nullptr; }
void AFGWireHologram::StartLookAtBuilding(UFGCircuitConnectionComponent* overlappingComponent){ }
void AFGWireHologram::StopLookAtBuilding(){ }
void AFGWireHologram::StartLookAtTooManyConnectionsBuilding(UFGCircuitConnectionComponent* overlappingConnection){ }
float AFGWireHologram::GetLength() const{ return float(); }
