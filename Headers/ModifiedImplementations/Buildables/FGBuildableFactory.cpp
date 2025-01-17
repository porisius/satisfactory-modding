// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableFactory.h"

AFGBuildableFactory::AFGBuildableFactory(){ }
void AFGBuildableFactory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableFactory::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
bool AFGBuildableFactory::GetNetDormancy(const FVector& ViewPos, const FVector& ViewDir,  AActor* Viewer, AActor* ViewTarget, UActorChannel* InChannel, float Time, bool bLowBandwidth){ return bool(); }
void AFGBuildableFactory::BeginPlay(){ }
void AFGBuildableFactory::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableFactory::Tick(float dt){ }
void AFGBuildableFactory::Destroyed(){ }
void AFGBuildableFactory::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableFactory::GainedSignificance_Implementation(){ }
void AFGBuildableFactory::LostSignificance_Implementation(){ }
void AFGBuildableFactory::GainedSignificance_Native(){ }
void AFGBuildableFactory::LostSignificance_Native(){ }
void AFGBuildableFactory::SetupForSignificance(){ }
void AFGBuildableFactory::Factory_Tick(float dt){ }
void AFGBuildableFactory::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableFactory::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableFactory::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableFactory::OnBuildableReplicationDetailStateChange(bool newStateIsActive){ }
void AFGBuildableFactory::OnReplicationDetailActorCreated(){ }
void AFGBuildableFactory::OnReplicationDetailActorRemoved(){ }
bool AFGBuildableFactory::ShouldSkipBuildEffect(){ return bool(); }
TArray< UFGFactoryConnectionComponent* > AFGBuildableFactory::GetConnectionComponents() const{ return TArray<UFGFactoryConnectionComponent*>(); }
float AFGBuildableFactory::GetEmissivePower(){ return float(); }
float AFGBuildableFactory::GetIdlePowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetDefaultProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::CalcPowerConsumption(float power, float overclock, float exponent){ return float(); }
float AFGBuildableFactory::CalcProducingPowerConsumptionForPotential(float potential) const{ return float(); }
bool AFGBuildableFactory::IsConfigured() const{ return bool(); }
bool AFGBuildableFactory::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableFactory::SetIsProductionPaused(bool isPaused){ }
EProductionStatus AFGBuildableFactory::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
float AFGBuildableFactory::GetProductionProgress() const{ return float(); }
float AFGBuildableFactory::GetProductionCycleTime() const{ return float(); }
float AFGBuildableFactory::GetDefaultProductionCycleTime() const{ return float(); }
float AFGBuildableFactory::GetProductionCycleTimeForRecipe(TSubclassOf< UFGRecipe > recipe) const{ return float(); }
float AFGBuildableFactory::CalcProductionCycleTimeForPotential(float potential) const{ return float(); }
float AFGBuildableFactory::GetProductivity(){ return float(); }
void AFGBuildableFactory::SetPendingPotential(float newPendingPotential){ }
float AFGBuildableFactory::GetCurrentMaxPotential() const{ return float(); }
float AFGBuildableFactory::GetMaxPossiblePotential() const{ return float(); }
void AFGBuildableFactory::TryStopIdlingLoopEffects(bool didLosePower){ }
void AFGBuildableFactory::TryStartIdlingLoopEffects(bool didGainPower){ }
void AFGBuildableFactory::TryStartProductionLoopEffects(bool didStartProducing){ }
void AFGBuildableFactory::TryStopProductionLoopEffects(bool didStopProducing){ }
void AFGBuildableFactory::UpdateAnimTickOption(EVisibilityBasedAnimTickOption newOption){ }
void AFGBuildableFactory::OnIsProducingChanged_Native(bool newIsProducing){ }
void AFGBuildableFactory::OnHasPowerChanged_Native(bool newHasPower){ }
void AFGBuildableFactory::SetCurrentPotential(float newCurrentPotential){ }
void AFGBuildableFactory::OnReplicatingDetailsChanged(){ }
void AFGBuildableFactory::Factory_ProductionCycleCompleted(float overProductionRate){ }
void AFGBuildableFactory::Factory_CollectInput_Implementation(){ }
void AFGBuildableFactory::Factory_PullPipeInput_Implementation(float dt){ }
void AFGBuildableFactory::Factory_PushPipeOutput_Implementation(float dt){ }
void AFGBuildableFactory::Factory_StartProducing(){ }
void AFGBuildableFactory::Factory_TickProducing(float dt){ }
void AFGBuildableFactory::Factory_TickProductivity(float dt){ }
void AFGBuildableFactory::Factory_StopProducing(){ }
void AFGBuildableFactory::NativeUpdateEffects(float DeltaSeconds){ }
void AFGBuildableFactory::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor* AFGBuildableFactory::GetOrCreateReplicationDetailActor(){ return nullptr; }
void AFGBuildableFactory::OnRep_CurrentPotential(){ }
void AFGBuildableFactory::OnRep_IsProductionPaused(){ }
void AFGBuildableFactory::OnRep_IsProducing(){ }
void AFGBuildableFactory::OnPotentialInventoryItemRemoved(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
void AFGBuildableFactory::SetIsProducing(uint8 isProducing){ }
void AFGBuildableFactory::SetHasPower(uint8 hasPower){ }
void AFGBuildableFactory::SetCurrentProductivity(uint8 productivity){ }
