// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryMan_GameMode.h"
#include "GameFramework/Actor.h"

ABatteryMan_GameMode::ABatteryMan_GameMode() {
	PrimaryActorTick.bCanEverTick = true;
}

void ABatteryMan_GameMode::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABatteryMan_GameMode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
}

void ABatteryMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABatteryMan_GameMode::SpawnPlayerRecharge()
{
	float randX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float randY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(randX, randY, Spawn_Z);
	FRotator SpawnRotation = FRotator::ZeroRotator;

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}
