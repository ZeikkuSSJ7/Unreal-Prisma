// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "MonsterShooterCharacter.h"
#include "MonsterShooter_GameInstance.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	damageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	damageCollision->SetupAttachment(RootComponent);

	aiPerpComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Component"));
	sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	sightConfig->SightRadius = 1250.0f;
	sightConfig->LoseSightRadius = 1280.0f;
	sightConfig->PeripheralVisionAngleDegrees = 90.0f;
	sightConfig->DetectionByAffiliation.bDetectEnemies = true;
	sightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	sightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	sightConfig->SetMaxAge(0.1f);

	aiPerpComp->ConfigureSense(*sightConfig);
	aiPerpComp->SetDominantSense(sightConfig->GetSenseImplementation());
	aiPerpComp->OnPerceptionUpdated.AddDynamic(this, &AEnemy::OnSensed);

	currentVelocity = FVector::ZeroVector;
	movementSpeed = 375.0f;
	distanceSquared = BIG_NUMBER;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	damageCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemy::OnHit);

	myGameInstance = Cast<UMonsterShooter_GameInstance>(GetGameInstance());
	
	baseLocation = this->GetActorLocation();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!currentVelocity.IsZero())
	{
		newLocation = GetActorLocation() + currentVelocity * DeltaTime;

		if (backToBaseLocation)
		{
			if ((newLocation - baseLocation).SizeSquared2D() < distanceSquared)
			{
				distanceSquared = (newLocation - baseLocation).SizeSquared2D();
			}
			else
			{
				currentVelocity = FVector::ZeroVector;
				distanceSquared = BIG_NUMBER;
				backToBaseLocation = false;

				SetNewRotation(GetActorForwardVector(), GetActorLocation());
			}
			
		}
		SetActorLocation(newLocation);
	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	AMonsterShooterCharacter* character = Cast<AMonsterShooterCharacter>(OtherActor);
	if (character)
	{
		character->DealDamage(damagevalue);
		return;
	}
	for (FName adae	 : OtherActor->Tags)
	{
		FString temp = adae.ToString();
		UE_LOG(LogTemp, Warning, TEXT("%s"), *temp);
	}
	if (OtherActor->ActorHasTag("Fin"))
	{
		myGameInstance->enemyFallen++;
		Destroy();
	}
}

void AEnemy::OnSensed(const TArray<AActor*>& UpdatedActors)
{
	for (AActor* actor : UpdatedActors)
	{
		FActorPerceptionBlueprintInfo info;
		aiPerpComp->GetActorsPerception(actor, info);


		if (info.LastSensedStimuli.Num() > 0)
		{
			if (info.LastSensedStimuli[0].WasSuccessfullySensed())
			{
				FVector dir = actor->GetActorLocation() - GetActorLocation();
				dir.Z = 0;

				currentVelocity = dir.GetSafeNormal() * movementSpeed;

				SetNewRotation(actor->GetActorLocation(), GetActorLocation());
			
			} else
			{
				FVector dir = baseLocation - GetActorLocation();

				dir.Z = 0.0f;

				if (dir.SizeSquared2D() > 1.0f)
				{
					currentVelocity = dir.GetSafeNormal() * movementSpeed;
					backToBaseLocation = true;

					SetNewRotation(baseLocation, GetActorLocation());
				}
			}
		}
		
	}
}

void AEnemy::SetNewRotation(FVector TargetPosition, FVector CurrentPosition)
{
	FVector newDirection = TargetPosition - CurrentPosition;
	newDirection.Z = 0;

	enemyRotation = newDirection.Rotation();

	SetActorRotation(enemyRotation);
	
}

void AEnemy::DealDamage(float DamageAmount)
{
	health -= DamageAmount;

	if (health <= 0.0f)
	{
		myGameInstance->enemyCount++;
		Destroy();
	}
	
}

