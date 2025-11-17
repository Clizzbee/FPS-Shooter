#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIBaseCharacter.generated.h"

UCLASS()
class FPSKIT_API AAIBaseCharacter : public ACharacter
{
    GENERATED_BODY()
public:
    AAIBaseCharacter();

    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float SightRadius;

protected:
    virtual void BeginPlay() override;
};
