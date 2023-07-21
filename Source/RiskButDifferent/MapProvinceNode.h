// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
//#include "MyPlayerController.h"
#include "MapProvinceNode.generated.h"

UCLASS()
class RISKBUTDIFFERENT_API AMapProvinceNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapProvinceNode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Test
	void TestBois();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> worldPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* body;
	UFUNCTION()
		void Highlight(UPrimitiveComponent* TouchedComponent);

	//AMyPlayerController* controller;
};
