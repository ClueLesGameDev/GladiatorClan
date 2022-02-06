// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChar.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"

void APlayerChar::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerChar::MoveRight);
	PlayerInputComponent->BindAxis("Mouse_X", this, &APlayerChar::Mouse_X);
	PlayerInputComponent->BindAxis("Mouse_Y", this, &APlayerChar::Mouse_Y);

	//Bind Attack Function
}

void APlayerChar::MoveForward(float Value)
{
	if (!IsAlive)
	{
		return;
	}

	if (!IsAttacking)
	{
		FRotator CamRot = GetControlRotation();
		CamRot.Pitch = 0.0f;
		FVector MoveDir = CamRot.Vector();

		GetCharacterMovement()->AddInputVector(MoveDir * Value);

	}
}

void APlayerChar::MoveRight(float Value)
{
	if (!IsAlive)
	{
		return;
	}

	if (!IsAttacking)
	{
		FRotator CamRot = GetControlRotation();
		CamRot.Pitch = 0.0f;
		FVector MoveDir = CamRot.RotateVector(FVector::RightVector);

		GetCharacterMovement()->AddInputVector(MoveDir * Value);

	}

}

void APlayerChar::Mouse_X(float Value)
{
	float Input = Value * 100.0f * GetWorld()->GetDeltaSeconds();
	AddControllerYawInput(Input);
}

void APlayerChar::Mouse_Y(float Value)
{
	float Input = Value * 100.0f * GetWorld()->GetDeltaSeconds();
	AddControllerPitchInput(Input);
}
