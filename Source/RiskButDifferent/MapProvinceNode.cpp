// Fill out your copyright notice in the Description page of Project Settings.


#include "MapProvinceNode.h"

// Sets default values
AMapProvinceNode::AMapProvinceNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<USphereComponent>(TEXT("Body"));
	RootComponent = body;
	body->OnBeginCursorOver.AddDynamic(this, &AMapProvinceNode::Highlight);
}

// Called when the game starts or when spawned
void AMapProvinceNode::BeginPlay()
{
	Super::BeginPlay();
	
	//controller = Cast<AMyPlayerController>(GetWorld()->GetFirstPlayerController());
}

// Called every frame
void AMapProvinceNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMapProvinceNode::TestBois()
{

}

void AMapProvinceNode::Highlight(UPrimitiveComponent* TouchedComponent)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("Province touched")));
	//controller->selectedNode = this;
}

