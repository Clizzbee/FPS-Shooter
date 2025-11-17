#include "WeaponBase.h"

AWeaponBase::AWeaponBase()
{
    PrimaryActorTick.bCanEverTick = true;
    Damage = 20.f;
    FireRate = 0.2f;
    MagazineSize = 30;
    LastFireTime = 0.f;
}

void AWeaponBase::BeginPlay()
{
    Super::BeginPlay();
}

void AWeaponBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AWeaponBase::Fire()
{
    // Base firing behavior - override in children
    LastFireTime = GetWorld()->GetTimeSeconds();
}

void AWeaponBase::StartFire() {}
void AWeaponBase::StopFire() {}
