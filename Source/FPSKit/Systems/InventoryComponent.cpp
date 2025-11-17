#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::AddWeapon(TSubclassOf<AActor> WeaponClass)
{
    if (WeaponClass)
    {
        Weapons.Add(WeaponClass);
    }
}
