// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemPickup_Spawnable.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AFGItemPickup_Spawnable::AFGItemPickup_Spawnable() : Super() {
	this->mMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
	this->mDestroyOnPickup = true; 
	this->bReplicates = true; 
}
void AFGItemPickup_Spawnable::BeginPlay(){ }
bool AFGItemPickup_Spawnable::ShouldSave_Implementation() const{ return bool(); }
bool AFGItemPickup_Spawnable::NeedTransform_Implementation(){ return bool(); }
void AFGItemPickup_Spawnable::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGItemPickup_Spawnable::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
AFGItemPickup_Spawnable* AFGItemPickup_Spawnable::CreateItemDrop( UWorld* world, const FInventoryStack& item, FVector spawnLocation, FRotator spawnRotation, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ return nullptr; }
AFGItemPickup_Spawnable* AFGItemPickup_Spawnable::AddItemToWorldStackAtLocation( UWorld* world, const FInventoryStack& item, FVector spawnLocation, FRotator spawnRotation, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ return nullptr; }
void AFGItemPickup_Spawnable::CreateItemDropsInCylinder( UWorld* world, const TArray<FInventoryStack>& items, FVector aroundLocation, float sphereRadius, const TArray<class AActor*>& actorsToIgnore, TArray<class AFGItemPickup_Spawnable*>& out_itemDrops, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ }
void AFGItemPickup_Spawnable::SpawnInventoryCrate( UWorld* world, const TArray< FInventoryStack >& items, FVector spawnLocation, const TArray<class AActor*>& actorsToIgnore,  AFGCrate*& out_Crate, TSubclassOf< AFGCrate > crateClass){ }
void AFGItemPickup_Spawnable::FindGroundLocationAndRotation( UWorld* world, FVector fromLocation, const TArray<AActor*>& actorsToIgnore, FVector& out_location, FRotator& out_rotation){ }
void AFGItemPickup_Spawnable::FindGroundLocationInfrontOfActor(const AActor* sourceActor, float offsetLength, const FInventoryStack& item, FVector& out_location, FRotator& out_rotation){ }
bool AFGItemPickup_Spawnable::GenerateSpheresInCapsule(FVector center, float radius, float innerRadius, TArray<FVector>& out_result){ return bool(); }
