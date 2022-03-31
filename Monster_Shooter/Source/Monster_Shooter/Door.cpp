// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "MonsterShooterCharacter.h"
#include "MonsterShooter_GameMode.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Mesh"));
	RootComponent = doorMesh;

	collisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Component"));
	collisionComponent->SetupAttachment(doorMesh);
	
	
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	collisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ADoor::OnHit);
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	AMonsterShooterCharacter* character = Cast<AMonsterShooterCharacter>(OtherActor);

	if (character)
	{
		AMonsterShooter_GameMode* myGameMode =
			Cast<AMonsterShooter_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));

		if (myGameMode)
		{
			myGameMode->RestartGameplay(true);
		}
	}
}

