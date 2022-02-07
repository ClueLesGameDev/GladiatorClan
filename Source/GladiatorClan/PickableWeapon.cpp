// Fill out your copyright notice in the Description page of Project Settings.


#include "PickableWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"

APickableWeapon::APickableWeapon()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	MySphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	MySphere->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	MySkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletel Mesh Hammer"));
	MySkeletalMesh->AttachToComponent(MySphere, FAttachmentTransformRules::KeepRelativeTransform);

	DamageBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Box"));
	DamageBox->AttachToComponent(MySphere, FAttachmentTransformRules::KeepRelativeTransform);

}

void APickableWeapon::BeginPlay()
{
}

UBoxComponent* APickableWeapon::GetDamageBox() const
{
	return nullptr;
}
