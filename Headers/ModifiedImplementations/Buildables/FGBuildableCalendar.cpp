// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableCalendar.h"

AFGBuildableCalendar::AFGBuildableCalendar(){ }
void AFGBuildableCalendar::BeginPlay(){ }
void AFGBuildableCalendar::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableCalendar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableCalendar::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund) const{ }
void AFGBuildableCalendar::OpenSlot(int32 dayNumber){ }
bool AFGBuildableCalendar::GetContentOnSlot(int32 dayNumber, FInventoryStack& out_slotContent){ return bool(); }
bool AFGBuildableCalendar::IsSlotOpened(int32 dayNumber) const{ return bool(); }
void AFGBuildableCalendar::OnInventoryItemRemoved(TSubclassOf< UFGItemDescriptor > itemClass, int32 numRemoved){ }
void AFGBuildableCalendar::StoreDataToEventSubsystem(){ }