// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableConveyorLift.h"
#include "FGFactoryConnectionComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

AFGBuildableConveyorLift::AFGBuildableConveyorLift() : Super() {
	this->mMeshHeight = 200.0;
	this->mBottomMesh = nullptr;
	this->mMidMesh = nullptr;
	this->mHalfMidMesh = nullptr;
	this->mTopMesh = nullptr;
	this->mBellowMesh = nullptr;
	this->mJointMesh = nullptr;
	this->mShelfMesh = nullptr;
	this->mIsReversed = false;
	this->mVisibilityComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityMesh"));
	this->mVisibilityComponent->SetupAttachment(RootComponent);
}
void AFGBuildableConveyorLift::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableConveyorLift::BeginPlay(){ }
int32 AFGBuildableConveyorLift::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableConveyorLift::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildableConveyorLift::Dismantle_Implementation(){ }
float AFGBuildableConveyorLift::GetLastRenderTime() const{ return float(); }
void AFGBuildableConveyorLift::DestroyVisualItems(){ }
void AFGBuildableConveyorLift::TickItemTransforms(float dt){ }
void AFGBuildableConveyorLift::TickRadioactivity(){ }
void AFGBuildableConveyorLift::Factory_UpdateRadioactivity( AFGRadioactivitySubsystem* subsystem){ }
FBoxCenterAndExtent AFGBuildableConveyorLift::FitClearance(float transformZ,
		float stepHeight,
		const FVector2D& extend2D,
		const FVector& extentBias){ return FBoxCenterAndExtent(); }
void AFGBuildableConveyorLift::OnRep_TopTransform(){ }
const FVector2D AFGBuildableConveyorLift::CLEARANCE_EXTENT_2D = FVector2D();
