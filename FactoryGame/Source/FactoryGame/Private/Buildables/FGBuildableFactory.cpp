// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableFactory.h"
#include "FGFactoryHologram.h"
#include "FGPowerInfoComponent.h"

AFGBuildableFactory::AFGBuildableFactory() : Super() {
	this->mPowerConsumptionExponent = 1.60000002384186;
	this->mPowerInfoClass = UFGPowerInfoComponent::StaticClass();
	this->mMinimumProducingTime = 2;
	this->mMinimumStoppedTime = 5;
	this->mNumCyclesForProductivity = 20;
	this->mCurrentPotential = 1;
	this->mPendingPotential = 1;
	this->mMinPotential = 0.00999999977648258;
	this->mMaxPotential = 1;
	this->mMaxPotentialIncreasePerCrystal = 0.5;
	this->mFluidStackSizeDefault = EStackSize::SS_FLUID;
	this->mSignificanceRange = 18000;
	this->mHologramClass = AFGFactoryHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = true; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
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
float AFGBuildableFactory::GetSignificanceBias(){ return float(); }
void AFGBuildableFactory::GainedSignificance_Native(){ }
void AFGBuildableFactory::LostSignificance_Native(){ }
void AFGBuildableFactory::SetupForSignificance(){ }
void AFGBuildableFactory::Factory_Tick(float dt){ }
void AFGBuildableFactory::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableFactory::OnBuildableReplicationDetailStateChange(bool newStateIsActive){ }
void AFGBuildableFactory::OnReplicationDetailActorCreated(){ }
bool AFGBuildableFactory::ShouldSkipBuildEffect(){ return bool(); }
TArray< UFGFactoryConnectionComponent* > AFGBuildableFactory::GetConnectionComponents() const{ return TArray<UFGFactoryConnectionComponent*>(); }
bool AFGBuildableFactory::HasPower() const{ return bool(); }
bool AFGBuildableFactory::RunsOnPower() const{ return bool(); }
float AFGBuildableFactory::GetIdlePowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::GetDefaultProducingPowerConsumption() const{ return float(); }
float AFGBuildableFactory::CalcProducingPowerConsumptionForPotential(float potential) const{ return float(); }
bool AFGBuildableFactory::IsConfigured() const{ return bool(); }
bool AFGBuildableFactory::IsProducing() const{ return bool(); }
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
bool AFGBuildableFactory::ShouldBeConsideredForBase_Implementation(){ return bool(); }
void AFGBuildableFactory::OnIsProducingChanged_Native(bool newIsProducing){ }
void AFGBuildableFactory::OnHasPowerChanged_Native(bool newHasPower){ }
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
void AFGBuildableFactory::OnRep_IsProducing(){ }
void AFGBuildableFactory::OnPotentialInventoryItemRemoved(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
EProductionStatusChange AFGBuildableFactory::OnProductionStatusChange = EProductionStatusChange();
