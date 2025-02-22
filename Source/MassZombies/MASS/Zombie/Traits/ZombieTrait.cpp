// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTrait.h"

#include "MassEntityTemplateRegistry.h"
#include "MassZombies/MASS/Zombie/Tags/ZombieTag.h"

void UZombieTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	FMassEntityManager& EntityManager = UE::Mass::Utils::GetEntityManagerChecked(World);
	
	BuildContext.AddTag<FZombieTag>();

	const FConstSharedStruct ZombieKilledParamsFragment = EntityManager.GetOrCreateConstSharedFragment(ZombieKilledParams);
	BuildContext.AddConstSharedFragment(ZombieKilledParamsFragment);
}
