// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInventoryComponent.h"
#include "FactoryGameCustomVersion.h"

FInventoryItem::FInventoryItem(){ }
FInventoryItem::FInventoryItem(TSubclassOf<  UFGItemDescriptor > itemClass){ }
bool FInventoryItem::Serialize(FArchive& ar) {
	ar.UsingCustomVersion(FFactoryGameCustomVersion::GUID);
	if (ar.CustomVer(FFactoryGameCustomVersion::GUID) >= 2) {
		ar << ItemClass;
		ar << ItemState;
	}
	return true;
}
const FInventoryItem FInventoryItem::NullInventoryItem = FInventoryItem();
FInventoryStack::FInventoryStack(){ }
FInventoryStack::FInventoryStack(const FInventoryItem& item){ }
FInventoryStack::FInventoryStack(int32 numItems, TSubclassOf<  UFGItemDescriptor > itemClass){ }
void UFGInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGInventoryComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void UFGInventoryComponent::PreNetReceive(){ }
UFGInventoryComponent::UFGInventoryComponent() : Super() {
	this->mDefaultInventorySize = 1;
	this->mAdjustedSizeDiff = 0;
	this->mCanBeRearrange = true;
}
void UFGInventoryComponent::Serialize(FArchive& ar){ Super::Serialize(ar); }
void UFGInventoryComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGInventoryComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGInventoryComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGInventoryComponent::ShouldSave_Implementation() const{ return bool(); }
void UFGInventoryComponent::OnRegister(){ Super::OnRegister(); }
void UFGInventoryComponent::BeginPlay(){ }
void UFGInventoryComponent::SetDefaultSize(int32 defaultSize){ }
void UFGInventoryComponent::Resize(int32 newSize){ }
void UFGInventoryComponent::SortInventory(){ }
void UFGInventoryComponent::Server_SortInventory_Implementation(){ }
bool UFGInventoryComponent::Server_SortInventory_Validate(){ return bool(); }
bool UFGInventoryComponent::HasAuthority() const{ return bool(); }
bool UFGInventoryComponent::IsItemAllowed(TSubclassOf< UFGItemDescriptor > item, const int32 idx) const{ return bool(); }
int32 UFGInventoryComponent::FindEmptyIndex() const{ return int32(); }
int32 UFGInventoryComponent::GetFirstIndexWithItem(int32 StartIndex) const{ return int32(); }
int32 UFGInventoryComponent::AddStack(const FInventoryStack& stack, bool allowPartialAdd){ return int32(); }
void UFGInventoryComponent::AddStacks(const TArray< FInventoryStack >& stacks){ }
int32 UFGInventoryComponent::AddStackToIndex(int32 idx, const FInventoryStack& stack, bool allowPartial){ return int32(); }
bool UFGInventoryComponent::GetStackFromIndex(int32 idx, FInventoryStack& out_stack) const{ return bool(); }
void UFGInventoryComponent::Remove(TSubclassOf< UFGItemDescriptor > itemClass, int32 num){ }
void UFGInventoryComponent::RemoveFromIndex(int32 idx, int32 num){ }
void UFGInventoryComponent::RemoveAllFromIndex(int32 idx){ }
void UFGInventoryComponent::Empty(){ }
bool UFGInventoryComponent::HasItems(TSubclassOf< UFGItemDescriptor > itemClass, int32 num) const{ return bool(); }
int32 UFGInventoryComponent::GetNumItems(TSubclassOf< UFGItemDescriptor > itemClass) const{ return int32(); }
bool UFGInventoryComponent::HasEnoughSpaceForStacks(const TArray< FInventoryStack >& stacks) const{ return bool(); }
bool UFGInventoryComponent::HasEnoughSpaceForStack(const FInventoryStack& stack) const{ return bool(); }
void UFGInventoryComponent::SetStateOnIndex(int32 index, const FSharedInventoryStatePtr& itemState){ }
int32 UFGInventoryComponent::GetFullestStackIndex(){ return int32(); }
void UFGInventoryComponent::GetInventoryStacks(TArray< FInventoryStack >& out_stacks) const{ }
TArray<int32> UFGInventoryComponent::GetRelevantStackIndexes(TArray< TSubclassOf<  UFGItemDescriptor > > relevantClasses, int32 stackLimit , bool sortResult){ return TArray<int32>(); }
void UFGInventoryComponent::AddArbitrarySlotSize(int32 index, int32 arbitrarySlotSize){ }
void UFGInventoryComponent::RemoveArbitrarySlotSize(int32 index){ }
int32 UFGInventoryComponent::GetSlotSize(int32 index, TSubclassOf< UFGItemDescriptor > itemDesc) const{ return int32(); }
TSubclassOf< UFGItemDescriptor > UFGInventoryComponent::GetAllowedItemOnIndex(int32 idx){ return TSubclassOf<UFGItemDescriptor>(); }
void UFGInventoryComponent::SetAllowedItemOnIndex(int32 idx, TSubclassOf< UFGItemDescriptor > allowedItemClass){ }
bool UFGInventoryComponent::CanSplitStackAtIdx(int32 idx){ return bool(); }
void UFGInventoryComponent::SplitStackAtIdx(int32 idx, int32 numItemsToMove){ }
void UFGInventoryComponent::SetCanBeRearranged(bool canBeRearranged){ }
void UFGInventoryComponent::CopyFromOtherComponent(UFGInventoryComponent* otherComponent){ }
void UFGInventoryComponent::OnRep_InventoryStacks(){ }
void UFGInventoryComponent::OnItemsAdded(int32 idx, int32 num){ }
void UFGInventoryComponent::OnItemsRemoved(int32 idx, int32 num, FInventoryItem item){ }
FInventoryStack& UFGInventoryComponent::GetStackFromIndex(int32 idx){ return *(new FInventoryStack); }
void UFGInventoryComponent::UpdateRadioactivity(int32 idx, TSubclassOf<UFGItemDescriptor> itemClass){ }
