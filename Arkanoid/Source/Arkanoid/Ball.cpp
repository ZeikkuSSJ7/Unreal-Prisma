// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	smBall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball"));
	RootComponent = smBall;

	smBall->SetSimulatePhysics(true);
	smBall->SetEnableGravity(false);
	smBall->SetConstraintMode(EDOFMode::XZPlane);
	smBall->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	smBall->SetCollisionProfileName(TEXT("PhysicsActor"));

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->bShouldBounce = true;
	projectileMovement->Bounciness = 1.1f;
	projectileMovement->Friction = 0.0f;
	projectileMovement->Velocity.X = 0.0f;
	
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABall::Launch()
{
	if (!ballLaunched)
	{
		smBall->AddImpulse(FVector(140, 0,130), FName(), true);

		ballLaunched = true;
	}
}

UStaticMeshComponent* ABall::GetBall()
{
	return smBall;
}

