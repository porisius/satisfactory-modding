// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGMaterialEffect_Build.h"


UFGMaterialEffect_Build::UFGMaterialEffect_Build() : Super() {
	this->mAutoDestroy = true; 
	this->PrimaryComponentTick.TickGroup = TG_DuringPhysics; this->PrimaryComponentTick.EndTickGroup = TG_PrePhysics; this->PrimaryComponentTick.bTickEvenWhenPaused = false; this->PrimaryComponentTick.bCanEverTick = true; this->PrimaryComponentTick.bStartWithTickEnabled = false; this->PrimaryComponentTick.bAllowTickOnDedicatedServer = true; this->PrimaryComponentTick.TickInterval = 0; 
	this->bAutoActivate = true; 
}
void UFGMaterialEffect_Build::SetInstigator( AActor* instigator){ }
void UFGMaterialEffect_Build::SetCost(TArray< FItemAmount > cost){ }
void UFGMaterialEffect_Build::SetSpeed(float speed){ }
