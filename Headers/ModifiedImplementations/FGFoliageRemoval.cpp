// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFoliageRemoval.h"

bool FRemovedInstanceArray::NetDeltaSerialize(FNetDeltaSerializeInfo & DeltaParms){ return bool(); }
void AFGFoliageRemoval::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGFoliageRemoval::IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const{ return bool(); }
AFGFoliageRemoval::AFGFoliageRemoval(){ }
void AFGFoliageRemoval::PostActorCreated(){ Super::PostActorCreated(); }
void AFGFoliageRemoval::BeginPlay(){ }
void AFGFoliageRemoval::Destroyed(){ }
void AFGFoliageRemoval::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGFoliageRemoval::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGFoliageRemoval::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGFoliageRemoval::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGFoliageRemoval::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGFoliageRemoval::NeedTransform_Implementation(){ return bool(); }
bool AFGFoliageRemoval::ShouldSave_Implementation() const{ return bool(); }
void AFGFoliageRemoval::Apply(){ }
bool AFGFoliageRemoval::RemoveInstance(FTransform foliageTransform, bool localSpace , int32 instanceId){ return bool(); }
bool AFGFoliageRemoval::RemoveInstances(TArray< FTransform > foliageTransforms, TArray< int32 > instanceIds){ return bool(); }
void AFGFoliageRemoval::RemovedInstances_ItemAdded(int32 idx){ }
void AFGFoliageRemoval::RemovedInstances_ItemRemoved(int32 idx){ }
void AFGFoliageRemoval::RemovedInstances_ItemChanged(int32 idx){ }
void AFGFoliageRemoval::RemovedInstances_ReplicationFrameDone(){ }
int32 AFGFoliageRemoval::GetInstanceClosestTo(FVector foliageLocation, FVector& out_closestFoliageLocation, bool localSpace) const{ return int32(); }
void AFGFoliageRemoval::BuildRemovalList(const TArray<FRemovedInstance>& instances, TArray<int32>& out_toRemove){ }
void AFGFoliageRemoval::LevelStreamedIn( UHierarchicalInstancedStaticMeshComponent* meshComponent){ }
void AFGFoliageRemoval::MakeSureDataIsValid(){ }
void AFGFoliageRemoval::RegisterWithSubsystem(){ }
void AFGFoliageRemoval::RemoveFromSubsystem(){ }
