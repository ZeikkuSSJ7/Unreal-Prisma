// Fill out your copyright notice in the Description page of Project Settings.


#include "PacmanPawn.h"

#include "Foodie.h"

// Sets default values
APacmanPawn::APacmanPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
}

// Called when the game starts or when spawned
void APacmanPawn::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &APacmanPawn::OnOverlapBegin);
}

// Called every frame
void APacmanPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!frozen)
	{
		AddMovementInput(GetActorForwardVector());
	}
}

// Called to bind functionality to input
void APacmanPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APacmanPawn::SetDirection(const FVector direction)
{
	if (direction == FVector::UpVector)
		SetActorRotation(FRotator(0, 270, 0));
	else if (direction == FVector::DownVector)
		SetActorRotation(FRotator(0, 90, 0));
	else if (direction == FVector::RightVector)
		SetActorRotation(FRotator(0, 0, 0));
	else if (direction == FVector::LeftVector)
		SetActorRotation(FRotator(0, 180, 0));
}

void APacmanPawn::OnOverlapBegin(AActor* PlayerActor, AActor* OtherActor)
{
	if (OtherActor->ActorHasTag("Foodie.Regular") || OtherActor->ActorHasTag("Foodie.PowerUp"))
	{
		Cast<AFoodie>(OtherActor)->Consume();
	}
}

