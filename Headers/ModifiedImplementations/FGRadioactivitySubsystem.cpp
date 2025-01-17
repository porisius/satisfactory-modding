// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRadioactivitySubsystem.h"

AFGRadioactivitySubsystem::AFGRadioactivitySubsystem(){ }
void AFGRadioactivitySubsystem::BeginPlay(){ }
void AFGRadioactivitySubsystem::Tick(float dt){ }
void AFGRadioactivitySubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGRadioactivitySubsystem::OnActorSpawned(AActor* spawnedActor){ }
void AFGRadioactivitySubsystem::OnActorDestroyed(AActor* destroyedActor){ }
AFGRadioactivitySubsystem* AFGRadioactivitySubsystem::Get(UWorld* world){ return nullptr; }
AFGRadioactivitySubsystem* AFGRadioactivitySubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGRadioactivitySubsystem::SetEmitter(UObject* owner,
					 USceneComponent* attachRoot,
					 const FVector& attachLocation,
					 TSubclassOf< UFGItemDescriptor > itemClass,
					 int32 itemAmount,
					 int32 UID){ }
void AFGRadioactivitySubsystem::SetEmitter(UObject* owner,
					 USceneComponent* attachRoot,
					 const FVector& attachLocation,
					 float decay,
					 int32 UID){ }
float AFGRadioactivitySubsystem::calculateIntensity(int32 itemAmount, float itemDecay, float distance, float radiationFalloffByDistance){ return float(); }
FRadioactiveEmitter& AFGRadioactivitySubsystem::FindOrAddEmitter(TArray< FRadioactiveEmitter >& emitters, int32 UID){ return *(new FRadioactiveEmitter); }
int32 AFGRadioactivitySubsystem::FindEmitter(TArray< FRadioactiveEmitter >& emitters, int32 UID){ return int32(); }
