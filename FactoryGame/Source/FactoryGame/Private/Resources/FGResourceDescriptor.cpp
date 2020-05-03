// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceDescriptor.h"

#if WITH_EDITOR
void UFGResourceDescriptor::PostEditChangeProperty( FPropertyChangedEvent& propertyChangedEvent){ }
#endif 
UFGResourceDescriptor::UFGResourceDescriptor() : Super() {
	this->mCollectSpeedMultiplier = 1;
	this->mManualMiningAudioName = "Metal";
	this->mUseDisplayNameAndDescription = true;
	this->mStackSize = EStackSize::SS_MEDIUM;
	this->mCanBeDiscarded = true;
	this->mForm = EResourceForm::RF_SOLID;
}
bool UFGResourceDescriptor::CanBeHandMined(TSubclassOf< UFGResourceDescriptor > inClass){ return bool(); }
UMaterialInstance* UFGResourceDescriptor::GetDepositMaterial(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
UStaticMesh* UFGResourceDescriptor::GetDepositMesh(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
UMaterial* UFGResourceDescriptor::GetDecalMaterial(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
float UFGResourceDescriptor::GetDecalSize(TSubclassOf< UFGResourceDescriptor > inClass){ return float(); }
FLinearColor UFGResourceDescriptor::GetPingColor(TSubclassOf< UFGResourceDescriptor > inClass){ return FLinearColor(); }
float UFGResourceDescriptor::GetCollectSpeedMultiplier(TSubclassOf< UFGResourceDescriptor > inClass){ return float(); }
UTexture2D* UFGResourceDescriptor::GetCompasTexture(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
UParticleSystem* UFGResourceDescriptor::GetManualMiningParticle(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
UParticleSystem* UFGResourceDescriptor::GetDestroyedParticle(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
FName UFGResourceDescriptor::GetManualMiningAudioName(TSubclassOf< UFGResourceDescriptor > inClass){ return FName(); }
UParticleSystem* UFGResourceDescriptor::GetFactoryMiningParticle(TSubclassOf< UFGResourceDescriptor > inClass){ return nullptr; }
