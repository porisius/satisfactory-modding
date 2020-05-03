// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGChatManager.h"

FChatMessageStruct::FChatMessageStruct(){ }
FChatMessageStruct::FChatMessageStruct(FString messageString,  AFGPlayerState* sender, float serverTimeStamp){ }
AFGChatManager* AFGChatManager::Get(UObject* worldContext){ return nullptr; }
AFGChatManager::AFGChatManager() : Super() {
	this->mMaxNumMessagesInHistory = 50;
	this->mMessageVisibleDuration = 10;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
FString AFGChatManager::GetChatMessageName(const FChatMessageStruct& inMessage){ return FString(); }
FLinearColor AFGChatManager::GetChatMessageColor(const FChatMessageStruct& inMessage){ return FLinearColor(); }
void AFGChatManager::Multicast_BroadcastChatMessage_Implementation(const FChatMessageStruct& newMessage){ }
void AFGChatManager::AddChatMessageToReceived(const FChatMessageStruct& inMessage){ }
void AFGChatManager::GetReceivedChatMessages(TArray< FChatMessageStruct >& out_messages) const{ }
int32 AFGChatManager::GetMaxNumMessagesInHistory() const{ return int32(); }
float AFGChatManager::GetMessageVisibleDuration() const{ return float(); }
