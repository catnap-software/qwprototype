// Copyright CatnapSoftware 2024


#include "QWCharacterBase.h"

// Sets default values
AQWCharacterBase::AQWCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AQWCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQWCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AQWCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

