// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryMaterialInstanceManager.h"


UFGFactoryMaterialInstanceManager::UFGFactoryMaterialInstanceManager() : Super() {
	this->mMaterialInstances.SetNum(18); 
}
void UFGFactoryMaterialInstanceManager::Init(UMaterialInterface* materialInterface, FString& lookupName, FString& lookupPrefix, UWorld* worldContext, bool canBeColored){ }
void UFGFactoryMaterialInstanceManager::RefreshMaterialColors(){ }
void UFGFactoryMaterialInstanceManager::RefreshMaterialColorForIndex(int32 index){ }
void UFGFactoryMaterialInstanceManager::SetVectorParameterOnAllInstances(FName paramName, FVector value){ }
UMaterialInstanceDynamic* UFGFactoryMaterialInstanceManager::GetMaterialForIndex(int32 index){ return nullptr; }
void UFGFactoryMaterialInstanceManager::GetMaterialInstanceNames(TArray<FString>& out_instanceNames){ }
TArray<FString>& UFGFactoryMaterialInstanceManager::GetMaterialInstanceNames(){ return *(new TArray<FString>); }
void UFGFactoryMaterialInstanceManager::AppendPrefixToInstanceName(const FString& prefix, const FString& baseName, FString& out_PrefixedName){ }
