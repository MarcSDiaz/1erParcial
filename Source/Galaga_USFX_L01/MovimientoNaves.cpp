// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoNaves.h"

// Sets default values for this component's properties
UMovimientoNaves::UMovimientoNaves()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Velocidad = 5.0f;
	V = FVector(-Velocidad, 0.0f, 0.0f);
	// ...
}


// Called when the game starts
void UMovimientoNaves::BeginPlay()
{
	Super::BeginPlay();
	AActor* Parent = GetOwner();
	if (Parent)
	{
		PosicionInicial = Parent->GetActorLocation();
	}
}


// Called every frame
void UMovimientoNaves::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector Limite1 = PosicionInicial + FVector(-400.0f, 0.0f, 0.0f);
	FVector Limite2 = PosicionInicial + FVector(0.0f, -500.0f, 0.0f);
	AActor* Parent = GetOwner();
	if (Parent)
	{
		FVector PosicionActual = Parent->GetActorLocation();
		FVector NuevaPosicion = PosicionActual + V;

		if (NuevaPosicion.X == Limite1.X)
		{
			V = FVector(0.0f, -Velocidad, 0.0f);
		}
		if (NuevaPosicion.Y == Limite2.Y)
		{
			V = FVector(Velocidad, 0.0f, 0.0f);
		}

		Parent->SetActorLocation(NuevaPosicion);
	}

	// ...
}

