#include <iostream>
#include "Vampire.h"
#include "Soldier.h"
#include "Rogue.h"
#include "Werevolf.h"
#include "Berserk.h"
#include "Wizard.h"
#include "Fireball.h"
#include "Heal.h"
#include "Necromant.h"
#include "Priest.h"

int main() {
	Vampire* dracula = new Vampire("Dracula");
	Soldier*  jaine = new Soldier("Jaine");
	std::cout << jaine << std::endl;
	Soldier*  mike = new Soldier("Mike");
	std::cout << mike << std::endl;
	Rogue* aliBaBa  = new Rogue("aliBaBa");
	std::cout << aliBaBa << std::endl;
	Werevolf* pups  = new Werevolf("pups");
	std::cout << pups << std::endl;
    Berserk* viking  = new Berserk("viking");
	std::cout << viking << std::endl;


	Wizard* merlin = new Wizard("Merlin");
	std::cout << merlin << std::endl;
	Priest* etlau = new Priest("Etlau");
	std::cout << etlau << std::endl;
    Necromant* sceleton = new Necromant("sceleton");
    std::cout << sceleton << std::endl;

    sceleton->attack(dracula);

    jaine->attack(sceleton);
    std::cout << sceleton << std::endl;

    dracula->attack(sceleton);
	std::cout << sceleton << std::endl;



	dracula->attack(jaine);
	std::cout << jaine << std::endl;

	jaine->attack(dracula);
	std::cout << dracula << std::endl;

	dracula->attack(jaine);
	std::cout << jaine << std::endl;
	std::cout << dracula << std::endl;

	jaine->attack(mike);
    std::cout << jaine << std::endl;
	std::cout << mike << std::endl;

	aliBaBa->attack(dracula);
	std::cout << aliBaBa << std::endl;
	std::cout << dracula << std::endl;

	merlin->cast(dracula, "Fireball");
	std::cout << dracula << std::endl;
	std::cout << merlin << std::endl;

    
	merlin->addSpell(new Heal());
	merlin->cast(jaine, "Lighting");

	std::cout << jaine << std::endl;
	std::cout << merlin << std::endl;


	pups->attack(mike);
	std::cout << mike << std::endl;
	std::cout << pups << std::endl;

	mike->attack(pups);
    std::cout << mike << std::endl;
	std::cout << pups << std::endl;

	merlin->cast(viking, "Fireball");
	std::cout << viking << std::endl;
	std::cout << merlin << std::endl;

	etlau->cast(mike, "Heal");
	std::cout << mike << std::endl;

    merlin->cast(mike, "Heal");
	std::cout << mike << std::endl;

	etlau->cast(dracula, "Fireball");
	std::cout << dracula << std::endl;

	std::cout << sceleton << std::endl;

	   

	delete dracula;
	return 0;
}