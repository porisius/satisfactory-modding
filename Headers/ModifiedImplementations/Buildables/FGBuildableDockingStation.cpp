// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableDockingStation.h"
#include "FGReplicationDetailInventoryComponent.h"
#include "FGPowerInfoComponent.h"
#include "FGFactoryHologram.h"

AFGBuildableDockingStation::AFGBuildableDockingStation() : Super() {
	this->mStorageSizeX = 4; 
	this->mStorageSizeY = 4; 
	this->mTransferSpeed = 1; 
	this->mFuelTransferSpeed = 1; 
	this->mFuelInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("FuelInventoryHandler"));
	this->mInventoryHandler = CreateDefaultSubobject<UFGReplicationDetailInventoryComponent>(TEXT("InventoryHandler"));
	this->mIsInLoadMode = true; 
	this->mStackTransferSize = 0.25; 
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
	this->bReplicates = true; 
	this->NetCullDistanceSquared = 5624999936; 
}
void AFGBuildableDockingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableDockingStation::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableDockingStation::BeginPlay(){ }
void AFGBuildableDockingStation::Destroyed(){ }
bool AFGBuildableDockingStation::Dock( AActor* actor){ return bool(); }
void AFGBuildableDockingStation::Undock(){ }
void AFGBuildableDockingStation::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableDockingStation::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableDockingStation::IsLoadUnloading() const{ return bool(); }
void AFGBuildableDockingStation::Factory_Tick(float dt){ }
void AFGBuildableDockingStation::Factory_TickProducing(float dt){ }
void AFGBuildableDockingStation::Factory_CollectInput_Implementation(){ }
bool AFGBuildableDockingStation::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableDockingStation::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor_DockingStation* AFGBuildableDockingStation::GetCastRepDetailsActor() const{ return nullptr; }
void AFGBuildableDockingStation::OnRep_FuelInventory(){ }
bool AFGBuildableDockingStation::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableDockingStation::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
int32 AFGBuildableDockingStation::GetFirstIndexWithItem(UFGInventoryComponent* inventory){ return int32(); }
bool AFGBuildableDockingStation::Factory_LoadFuel(UFGInventoryComponent* dockedFuelInventory, float percentOfStack){ return bool(); }
void AFGBuildableDockingStation::Factory_LoadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::Factory_UnloadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::LoadUnloadVehicleComplete(){ }
FName AFGBuildableDockingStation::sFuelTag = FName();
