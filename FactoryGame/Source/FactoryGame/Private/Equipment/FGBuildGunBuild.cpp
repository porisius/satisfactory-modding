// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGBuildGunBuild.h"

UFGBuildGunStateBuild::UFGBuildGunStateBuild(){ }
void UFGBuildGunStateBuild::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGBuildGunStateBuild::PreNetReceive(){ }
void UFGBuildGunStateBuild::BeginState_Implementation(){ }
void UFGBuildGunStateBuild::EndState_Implementation(){ }
void UFGBuildGunStateBuild::TickState_Implementation(float deltaTime){ }
void UFGBuildGunStateBuild::PrimaryFire_Implementation(){ }
void UFGBuildGunStateBuild::PrimaryFireRelease_Implementation(){ }
void UFGBuildGunStateBuild::SecondaryFire_Implementation(){ }
void UFGBuildGunStateBuild::ModeSelectPressed_Implementation(){ }
void UFGBuildGunStateBuild::ModeSelectRelease_Implementation(){ }
void UFGBuildGunStateBuild::ScrollDown_Implementation(){ }
void UFGBuildGunStateBuild::ScrollUp_Implementation(){ }
void UFGBuildGunStateBuild::ChangeScrollMode_Implementation(){ }
void UFGBuildGunStateBuild::ChangeNoSnapMode_Implementation(){ }
void UFGBuildGunStateBuild::ChangeGuideLinesSnapMode_Implementation(bool enabled){ }
void UFGBuildGunStateBuild::BuildSampleRelease_Implementation(){ }
bool UFGBuildGunStateBuild::IsValidBuildingSample( AFGBuildable* buildable) const{ return bool(); }
void UFGBuildGunStateBuild::OnRecipeSampled_Implementation(TSubclassOf<class UFGRecipe> recipe){ }
void UFGBuildGunStateBuild::SetActiveRecipe(TSubclassOf<  UFGRecipe > recipe){ }
TSubclassOf< class UFGItemDescriptor > UFGBuildGunStateBuild::GetDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
TArray< FItemAmount > UFGBuildGunStateBuild::GetHologramCost() const{ return TArray<FItemAmount>(); }
AFGHologram* UFGBuildGunStateBuild::GetHologram() const{ return nullptr; }
AFGHologram* UFGBuildGunStateBuild::SpawnChildHologram(AFGHologram* parent, TSubclassOf<  UFGRecipe > recipe){ return nullptr; }
void UFGBuildGunStateBuild::Server_ConstructHologram_Implementation(FNetConstructionID clientNetConstructID, FConstructHologramMessage data){ }
bool UFGBuildGunStateBuild::Server_ConstructHologram_Validate(FNetConstructionID clientNetConstructID, FConstructHologramMessage data){ return bool(); }
void UFGBuildGunStateBuild::InternalConstructHologram(FNetConstructionID clientNetConstructID){ }
void UFGBuildGunStateBuild::Server_ChangeGuideLinesSnapMode_Implementation(bool enabled){ }
bool UFGBuildGunStateBuild::Server_ChangeGuideLinesSnapMode_Validate(bool enabled){ return bool(); }
TArray< EHologramSplinePathMode > UFGBuildGunStateBuild::GetSupportedSplineModes(){ return TArray<EHologramSplinePathMode>(); }
void UFGBuildGunStateBuild::SetActiveSplineMode(EHologramSplinePathMode mode){ }
void UFGBuildGunStateBuild::HookUpUserSettings(){ }
void UFGBuildGunStateBuild::InternalExecuteDuBuildStepInput(bool isInputFromARelease){ }
void UFGBuildGunStateBuild::OnRep_Hologram(){ }
void UFGBuildGunStateBuild::ResetHologram(){ }
void UFGBuildGunStateBuild::Client_OnResetHologram_Implementation(){ }
void UFGBuildGunStateBuild::Client_OnBuildableConstructed_Implementation(TSubclassOf< UFGItemDescriptor > desc){ }
void UFGBuildGunStateBuild::Client_OnBuildableFailedConstruction_Implementation(FNetConstructionID netConstructionID){ }
void UFGBuildGunStateBuild::SpawnHologram(){ }
void UFGBuildGunStateBuild::RemoveHologram(){ }
void UFGBuildGunStateBuild::SetupHologramClearanceDetection(){ }
void UFGBuildGunStateBuild::CleanupHologramClearanceDetection(AFGHologram* hologram){ }
void UFGBuildGunStateBuild::SaveHologramScrollValues(){ }
void UFGBuildGunStateBuild::ClearHologramScrollValues(){ }
void UFGBuildGunStateBuild::RestoreHologramScrollValues(AFGHologram* hologram){ }
AFGHologram* UFGBuildGunStateBuild::InternalSpawnHologram(){ return nullptr; }
void UFGBuildGunStateBuild::BeginClearanceOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult){ }
void UFGBuildGunStateBuild::EndClearanceOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){ }
void UFGBuildGunStateBuild::OnUserSettingsUpdated(){ }
void UFGBuildGunStateBuild::UpdateClearanceData(){ }
