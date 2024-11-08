// Copyright ACCENT, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "A1CreatureBase.generated.h"

UCLASS()
class A1_API AA1CreatureBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AA1CreatureBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
