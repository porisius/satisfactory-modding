// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSplineComponent.h"


UFGSplineComponent::UFGSplineComponent() : Super() {
	this->mSplineMeshLength = 100; 
	this->mCollisionSpacing = 100; 
	this->mCollisionExtent.X = 1; this->mCollisionExtent.Y = 1; this->mCollisionExtent.Z = 1; 
	this->mUseInstancing = true; 
}
void UFGSplineComponent::SetOverrideMaterial( UMaterialInterface* material){ }
void UFGSplineComponent::UpdateSplineMeshes(){ }
void UFGSplineComponent::DrawDebugSpline(const FColor& color1, const FColor& color2, float thickness) const{ }
int32 UFGSplineComponent::GetNumberOfMeshes() const{ return int32(); }
USplineMeshComponent* UFGSplineComponent::GetMesh(int32 index) const{ return nullptr; }
UFGInstancedSplineMeshComponent* UFGSplineComponent::GetInstancedMesh() const{ return nullptr; }
void UFGSplineComponent::SetVectorParameterOnInstancedMeshMaterials(FName parameterName, FVector inVector){ }
void UFGSplineComponent::SetUseInstancing(bool useInstancing){ }
void UFGSplineComponent::SetAdditionalCustomDepthPass(bool enable){ }
void UFGSplineComponent::GenerateCollisionIdx(int32 idx, float splineLength, int32 numCollisions){ }
bool UFGSplineComponent::IsSegmentStraight(int32 fromPointIdx, int32 toPointIdx) const{ return bool(); }
void UFGSplineComponent::GenerateSplineCollisions(){ }
UFGInstancedSplineMeshComponent* UFGSplineComponent::CreateInstancedSplineMeshComponent(){ return nullptr; }
USplineMeshComponent* UFGSplineComponent::CreateSplineMeshComponent(){ return nullptr; }
