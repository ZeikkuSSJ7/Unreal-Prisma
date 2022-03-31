// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "MonsterShooterCharacter.generated.h"

UCLASS()
class MONSTER_SHOOTER_API AMonsterShooterCharacter : public ACharacter
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this character's properties
	AMonsterShooterCharacter();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* handsMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* gunMesh;
	
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USceneComponent* muzzleLocation;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh)
		UCameraComponent* firstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
		float turnRate;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
		float lookUpRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
		FVector gunOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<AProjectile> projectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase*  fireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* fireAnimation;

	UAnimInstance* animInstance;

	UWorld* world;

	FRotator spawnRotation;
	FVector spawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float health = 100;

	void DealDamage(float damage);

	FTimerHandle fireTimer;

protected:
	void OnFire();
	void Jump();
	void StopJumping();
	void MoveForward(float Value);
	void MoveRight(float value);

	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);
};
