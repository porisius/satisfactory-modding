// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSubsystemClasses.h"
#include "FGFoliageRemovalSubsystem.h"
#include "FGAdminInterface.h"

UFGSubsystemClasses::UFGSubsystemClasses() : Super() {
	this->mFoliageRemovalSubsystemClass = AFGFoliageRemovalSubsystem::StaticClass(); 
	this->mAdminInterfaceClass = AFGAdminInterface::StaticClass(); 
}
UFGSubsystemClasses* UFGSubsystemClasses::Get(){ return nullptr; }
