// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipePart.h"
#include "FGColoredInstanceMeshProxy.h"
#include "FGPowerInfoComponent.h"
#include "FGBuildablePipePart.h"

#if WITH_EDITOR
void AFGBuildablePipePart::OnConstruction(const FTransform& transform){ }
#endif 
AFGBuildablePipePart::AFGBuildablePipePart() : Super() {
	this->mLength = 200; 
	this->mSupportComponentDefaultMesh = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("SupportMeshCompProxyHolder")); this->mSupportComponentDefaultMesh->SetupAttachment(this->RootComponent);
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
	this->mHologramClass = AFGBuildablePipePart::StaticClass(); 
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
void AFGBuildablePipePart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipePart::BeginPlay(){ }
void AFGBuildablePipePart::SetSupportLength(float length){ }
void AFGBuildablePipePart::SetupConnectionComponent(){ }
const FName AFGBuildablePipePart::SupportMeshName = FName();
float AFGBuildablePipeHyperPart::GetPipeProgressOfConnection_Implementation(const UFGPipeConnectionComponentBase* connectionEnteredThrough){ return float(); }
void AFGBuildablePipeHyperPart::OnPipeMove_Implementation(UFGCharacterMovementComponent* charMove, float deltaTime){ }
bool AFGBuildablePipeHyperPart::OnPipeEnter_Implementation(UFGCharacterMovementComponent* charMove, const UFGPipeConnectionComponentBase* connectionEnteredThrough , const AActor* fromPipe){ return bool(); }
