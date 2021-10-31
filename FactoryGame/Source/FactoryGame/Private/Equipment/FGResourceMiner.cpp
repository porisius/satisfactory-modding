// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGResourceMiner.h"
#include "Components/SceneComponent.h"
#include "Equipment/FGEquipment.h"

AFGResourceMiner::AFGResourceMiner() : Super() {
	this->mPickParticleSystem = nullptr;
	this->mPickArmsAnim = nullptr;
	this->mCachedResouceNode = nullptr;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->mArmAnimation = EArmEquipment::AE_ResourceCollector;
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
}
void AFGResourceMiner::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGResourceMiner::Tick(float DeltaSeconds){ }
void AFGResourceMiner::UnEquip(){ }
bool AFGResourceMiner::ShouldSaveState() const{ return bool(); }
void AFGResourceMiner::DoMine(){ }
void AFGResourceMiner::ExtractResources(){ }
void AFGResourceMiner::RemoveEquipment(){ }
int32 AFGResourceMiner::GetNumResourcesPerExtract() const{ return int32(); }
void AFGResourceMiner::Server_ExtractResources_Implementation(){ }
bool AFGResourceMiner::Server_ExtractResources_Validate(){ return bool(); }
