// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

AFGProjectile::AFGProjectile() : Super() {
	this->mCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	this->RootComponent = this->mCollisionComp;
	this->mProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bReplicateMovement = true;
	this->bReplicates = true;
	this->InitialLifeSpan = 3;
}
void AFGProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGProjectile::PostInitializeComponents(){ Super::PostInitializeComponents(); }
bool AFGProjectile::ShouldSave_Implementation() const{ return bool(); }
bool AFGProjectile::NeedTransform_Implementation(){ return bool(); }
float AFGProjectile::TakeDamage(float DamageAmount,  FDamageEvent const& DamageEvent,  AController* EventInstigator, AActor* DamageCauser){ return float(); }
void AFGProjectile::LifeSpanExpired(){ }
void AFGProjectile::OnImpact(const FHitResult& hitResult){ }
void AFGProjectile::OnBounce(const FHitResult& hitResult, const FVector& hitVelocity){ }
void AFGProjectile::SetProjectileData(FProjectileData projectileData){ }
void AFGProjectile::SetInitialVelocity(FVector inVelocity){ }
void AFGProjectile::DealExplosionDamage(const FHitResult& impact){ }
void AFGProjectile::DealImpactDamage(const FHitResult& impact){ }
void AFGProjectile::DisableAndSetLifeSpan(){ }
void AFGProjectile::OnRep_Exploded(){ }
void AFGProjectile::OnNotifiedExploded(){ }
bool AFGProjectile::AttachProjectileToImpactActor(const FHitResult& impact){ return bool(); }
void AFGProjectile::OnRep_InitialVelocity(){ }
