// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceScanner.h"

AFGResourceScanner::AFGResourceScanner(){ }
void AFGResourceScanner::BeginPlay(){ }
void AFGResourceScanner::Tick(float dt){ }
bool AFGResourceScanner::ShouldSaveState() const{ return bool(); }
TArray< TSubclassOf< UFGResourceDescriptor > > AFGResourceScanner::GetScannableResources() const{ return TArray<TSubclassOf<UFGResourceDescriptor> >(); }
void AFGResourceScanner::SetResourceDescriptorToScanFor(TSubclassOf< UFGResourceDescriptor > inClass){ }
void AFGResourceScanner::UnEquip(){ }
void AFGResourceScanner::Server_ScanReleased_Implementation(){ }
bool AFGResourceScanner::Server_ScanReleased_Validate(){ return bool(); }
void AFGResourceScanner::ScanReleased(){ }
void AFGResourceScanner::AddEquipmentActionBindings(){ }
void AFGResourceScanner::OnScanPressed(){ }
void AFGResourceScanner::OnScanReleased(){ }
void AFGResourceScanner::GenerateNodeClusters(){ }
void AFGResourceScanner::GetNodesWithinDistance( AFGResourceNodeBase* node, float dist, TArray<  AFGResourceNodeBase* >& clusterNodes, TArray<  AFGResourceNodeBase* >& remainingNodes){ }
void AFGResourceScanner::GetClosetClusters(TArray<FNodeClusterData>& closestClusters){ }
void AFGResourceScanner::SplitNearbyClusters(TArray< FNodeClusterData >& clusters){ }
void AFGResourceScanner::OnCheatBoardOpened(){ }
