// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Enemy.generated.h"

UCLASS()
class MONSTER_SHOOTER_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		UBoxComponent* damageCollision;
	
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

	UPROPERTY(VisibleAnywhere, Category = Enemy)
		UAIPerceptionComponent* aiPerpComp; 


	UPROPERTY(VisibleDefaultsOnly, Category = Enemy)
		UAISenseConfig_Sight* sightConfig;

	UFUNCTION()
		void OnSensed(const TArray<AActor*>& UpdatedActors);

	UPROPERTY(VisibleAnywhere, Category = Movement)
		FRotator enemyRotation;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		FVector baseLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		FVector currentVelocity;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		float movementSpeed;

	void SetNewRotation(FVector targetPosition, FVector CurrentPosition);
	bool backToBaseLocation;
	FVector newLocation;
	float distanceSquared;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float health = 100;

	UPROPERTY(EditAnywhere)
	float damagevalue = 5;

public:
	void DealDamage(float DamageAmount);
};
