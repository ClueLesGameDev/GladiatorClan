// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArenaPlayer.h"
#include "PlayerChar.generated.h"

/**
 * 
 */
UCLASS()
class GLADIATORCLAN_API APlayerChar : public AArenaPlayer
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	void MoveForward(float Value);
	void MoveRight(float Value);

	void Mouse_X(float Value);
	void Mouse_Y(float Value);
};
