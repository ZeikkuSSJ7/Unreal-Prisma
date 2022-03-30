// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "TeleporterActor.generated.h"

UCLASS()
class PACMAN_API ATeleporterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeleporterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TeleportToTarget(AActor* Actor);

	UPROPERTY(EditAnywhere)
		ATeleporterActor* target = nullptr;

	UPROPERTY(EditAnywhere)
		USoundCue* teleportSound;
	
	UFUNCTION()
		void OnOverlapBegin(AActor* TeleporterActor, AActor* OtherActor);
};
