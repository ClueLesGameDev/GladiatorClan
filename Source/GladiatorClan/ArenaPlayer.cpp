// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaPlayer.h"
#include "PickableWeapon.h"

// Sets default values
AArenaPlayer::AArenaPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArenaPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArenaPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArenaPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

