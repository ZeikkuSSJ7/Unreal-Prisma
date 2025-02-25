// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterShooterCharacter.h"

#include <GeomUtils/GuContactBuffer.h>

#include "MonsterShooter_GameMode.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMonsterShooterCharacter::AMonsterShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(40, 95);
	turnRate = 130;
	lookUpRate = 130;

	firstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	firstPersonCamera-> SetupAttachment(GetCapsuleComponent());
	firstPersonCamera->AddRelativeLocation(FVector(-39.65f, 1.75f, 64.0f));
	firstPersonCamera->bUsePawnControlRotation = true;

	handsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character Mesh"));

	handsMesh->SetOnlyOwnerSee(true);
	handsMesh->SetupAttachment(firstPersonCamera);
	handsMesh->bCastDynamicShadow = false;
	handsMesh->CastShadow = false;
	handsMesh->AddRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	handsMesh->AddRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	gunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	gunMesh->SetOnlyOwnerSee(true);
	gunMesh->bCastDynamicShadow = false;
	gunMesh->CastShadow = false;

	muzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Location"));
	muzzleLocation-> SetupAttachment(gunMesh);
	muzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	gunOffset = FVector(100.0f, 0.0f, 10.0f); 
}

// Called when the game starts or when spawned
void AMonsterShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	gunMesh->AttachToComponent(handsMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("GripPoint"));

	world = GetWorld();

	animInstance = handsMesh->GetAnimInstance();
	
}

// Called every frame
void AMonsterShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMonsterShooterCharacter::StopFire()
{
	GetWorldTimerManager().ClearTimer(fireTimer);
}

void AMonsterShooterCharacter::OnFire()
{
	GetWorldTimerManager().SetTimer(fireTimer, this, &AMonsterShooterCharacter::_OnFire, 0.01f, true);
}


// Called to bind functionality to input
void AMonsterShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Jump", IE_Pressed, this, &AMonsterShooterCharacter::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMonsterShooterCharacter::StopJumping);
	
	InputComponent->BindAction("Fire", IE_Pressed, this, &AMonsterShooterCharacter::OnFire);
	InputComponent->BindAction("Fire", IE_Released, this, &AMonsterShooterCharacter::StopFire);

	InputComponent->BindAxis("MoveForward", this, &AMonsterShooterCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMonsterShooterCharacter::MoveRight);

	InputComponent->BindAxis("Turn", this, &AMonsterShooterCharacter::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &AMonsterShooterCharacter::LookAtRate);




}

void AMonsterShooterCharacter::_OnFire()
{
	if (world != nullptr)
	{
		spawnRotation = GetControlRotation();

		spawnLocation = ((muzzleLocation != nullptr) ?
			muzzleLocation->GetComponentLocation() : GetActorLocation()) + spawnRotation.RotateVector(gunOffset);

		FActorSpawnParameters actorSpawnParams;
		actorSpawnParams.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; // tema de aparecer si no colisiona

		world->SpawnActor<AProjectile>(projectile, spawnLocation, spawnRotation, actorSpawnParams);

		if (fireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, fireSound, GetActorLocation(), 0.3f);
		}

		if (fireAnimation != nullptr && animInstance != nullptr)
		{
			animInstance->Montage_Play(fireAnimation, 4.0f);
		}
	}
}

void AMonsterShooterCharacter::Jump()
{
	Super::Jump();
}

void AMonsterShooterCharacter::StopJumping()
{
	Super::StopJumping();
}

void AMonsterShooterCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMonsterShooterCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMonsterShooterCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * turnRate * GetWorld()->GetDeltaSeconds());
}

void AMonsterShooterCharacter::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate * lookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMonsterShooterCharacter::DealDamage(float damage)
{
	health -= damage;

	if (health <= 0.0f)
	{
		AMonsterShooter_GameMode* myGameMode = Cast<AMonsterShooter_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));

		if (myGameMode)
		{
			myGameMode->RestartGameplay(false);
		}
		
		Destroy();
	}
}

