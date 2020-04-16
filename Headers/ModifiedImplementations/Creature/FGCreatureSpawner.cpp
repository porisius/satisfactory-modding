// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCreatureSpawner.h"
#include "Components/CapsuleComponent.h"

#if WITH_EDITOR
void AFGCreatureSpawner::PostEditMove(bool bFinished){ }
#endif 
AFGCreatureSpawner::AFGCreatureSpawner() : Super() {
	this->mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
	this->mNumberOfCreatures.Min = 1; this->mNumberOfCreatures.Max = 1; 
	this->mSpawnRadius = 200; 
	this->mSpawnHalfHeight = 300; 
	this->mSpawnerDistance = -1; 
	this->mRandomSeed = -1; 
	this->mRespawnTimeIndays = 3; 
	this->bCollideWhenPlacing = true; 
	this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding; 
	this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
}
void AFGCreatureSpawner::BeginPlay(){ }
void AFGCreatureSpawner::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCreatureSpawner::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCreatureSpawner::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCreatureSpawner::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCreatureSpawner::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGCreatureSpawner::NeedTransform_Implementation(){ return bool(); }
bool AFGCreatureSpawner::ShouldSave_Implementation() const{ return bool(); }
void AFGCreatureSpawner::GetSpawnLocations(TArray<FVector>& out_spawnLocations) const{ }
void AFGCreatureSpawner::SetSpawnerActive(bool active){ }
void AFGCreatureSpawner::SpawnCreatures_Implementation(){ }
void AFGCreatureSpawner::DestroyCreatures_Implementation(){ }
bool AFGCreatureSpawner::ShouldResetKillStatus(FSpawnData spawnData, int32 newDayNr){ return bool(); }
void AFGCreatureSpawner::UpdateKillStatus(int32 newDayNr){ }
bool AFGCreatureSpawner::IsTimeForCreature(){ return bool(); }
void AFGCreatureSpawner::TrySpawnCreatures(){ }
void AFGCreatureSpawner::CreatureDied(AActor* thisActor){ }
bool AFGCreatureSpawner::CalculateSpawningLocations(){ return bool(); }
void AFGCreatureSpawner::AddCreature( AFGCreature* newCreature){ }
float AFGCreatureSpawner::GetSpawnerWeight(){ return float(); }
bool AFGCreatureSpawner::TryFindNonOverlappingLocation(const TArray<FVector2D>& usedSpawnLocations, float spawnRadius, int32 maxRetries, FVector2D& out_location){ return bool(); }
bool AFGCreatureSpawner::IsLocationNonOverlapping(const FVector2D& location, const TArray< FVector2D >& usedLocations) const{ return bool(); }
void AFGCreatureSpawner::CleanupCreatureList(){ }
void AFGCreatureSpawner::SetupSpawnWeight(){ }
void AFGCreatureSpawner::SetupSpawnDistance(){ }
void AFGCreatureSpawner::TryDestroyCreatures(){ }
