// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemPickup.h"

AFGItemPickup::AFGItemPickup(){ }
void AFGItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGItemPickup::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGItemPickup::BeginPlay(){ }
void AFGItemPickup::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGItemPickup::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGItemPickup::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGItemPickup::NeedTransform_Implementation(){ return bool(); }
bool AFGItemPickup::ShouldSave_Implementation() const{ return bool(); }
void AFGItemPickup::GainedSignificance_Implementation(){ }
void AFGItemPickup::LostSignificance_Implementation(){ }
void AFGItemPickup::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGItemPickup::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGItemPickup::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGItemPickup::IsUseable_Implementation() const{ return bool(); }
void AFGItemPickup::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGItemPickup::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGItemPickup::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGItemPickup::PickUpByCharacter( AFGCharacterPlayer* byCharacter){ }
bool AFGItemPickup::PickupByAmount(int32 amount){ return bool(); }
void AFGItemPickup::Multicast_PlayPickupEffect_Implementation(){ }
float AFGItemPickup::GetNormalizedCollectionProgress(){ return float(); }
void AFGItemPickup::RespawnItems(){ }
void AFGItemPickup::ClearPickup(){ }
void AFGItemPickup::PlantPickup(){ }
void AFGItemPickup::Grow(){ }
void AFGItemPickup::SetNumItems(int32 numItems){ }
void AFGItemPickup::OnCollectTimerComplete(){ }
void AFGItemPickup::AddToPlayerInventory( AFGCharacterPlayer* character){ }
void AFGItemPickup::OnRep_PickedUp(){ }
void AFGItemPickup::OnRep_StateUpdated(){ }
void AFGItemPickup::UpdateRadioactivity(){ }
