    #include "HealthComponent.h"
#include "GameFramework/Actor.h"

UHealthComponent::UHealthComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    MaxHealth = 100.f;
}

void UHealthComponent::BeginPlay()
{
    Super::BeginPlay();
    CurrentHealth = MaxHealth;
}

void UHealthComponent::TakeDamage(float Amount)
{
    CurrentHealth -= Amount;
    if (CurrentHealth <= 0.f)
    {
        CurrentHealth = 0.f;
        OnDeath.Broadcast();
    }
}
