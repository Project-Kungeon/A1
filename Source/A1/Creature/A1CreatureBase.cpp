// Copyright ACCENT, Inc. All Rights Reserved.


#include "Creature/A1CreatureBase.h"


// Sets default values
AA1CreatureBase::AA1CreatureBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA1CreatureBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AA1CreatureBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AA1CreatureBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

