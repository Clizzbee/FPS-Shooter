#include "AIBaseCharacter.h"

AAIBaseCharacter::AAIBaseCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
    SightRadius = 1500.f;
}

void AAIBaseCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AAIBaseCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
