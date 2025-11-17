#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSKIT_API UInventoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UInventoryComponent();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
    TArray<TSubclassOf<AActor>> Weapons;

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void AddWeapon(TSubclassOf<AActor> WeaponClass);
};
