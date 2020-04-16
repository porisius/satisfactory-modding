// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGStackableStorageHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"

AFGStackableStorageHologram::AFGStackableStorageHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35; 
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); 
	this->mUseBuildClearanceOverlapSnapp = true; 
	this->bHidden = true; 
	this->bReplicates = true; 
}
void AFGStackableStorageHologram::BeginPlay(){ }
bool AFGStackableStorageHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGStackableStorageHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
int32 AFGStackableStorageHologram::GetRotationStep() const{ return int32(); }
