// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	smBrick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	smBrick->SetCollisionEnabled((ECollisionEnabled::QueryAndPhysics));
	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	boxCollision-> SetBoxExtent(FVector(25, 10, 10));

	RootComponent = boxCollision;
}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();

	//boxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
	boxCollision->OnComponentHit.AddDynamic(this, &ABrick::OnHit);
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABrick::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (GetWorldTimerManager().IsTimerActive(TimerHandle)) return;
	
	if (OtherActor->ActorHasTag("Ball"))
	{
		ABall* myBall = Cast<ABall>(OtherActor);

		FVector ballVelocity = myBall->GetVelocity();
		ballVelocity *= (speedModifierOnBounce - 0.97f);

		myBall->GetBall()->SetPhysicsLinearVelocity(ballVelocity, true);
		
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ABrick::DestroyBrick, 0.1f, false);
		
	}
}

void ABrick::DestroyBrick()
{
	
	this->ConditionalBeginDestroy();
}


