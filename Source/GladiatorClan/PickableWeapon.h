// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupItemsBase.h"
#include "PickableWeapon.generated.h"

/**
 * 
 */
UCLASS()
class GLADIATORCLAN_API APickableWeapon : public APickupItemsBase
{
	GENERATED_BODY()

public:

	APickableWeapon();

	virtual void BeginPlay() override;

	class UBoxComponent* GetDamageBox() const;
	
protected:

	UPROPERTY(EditAnywhere)
	class USphereComponent* MySphere;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* MySkeletalMesh;;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* DamageBox;
};
