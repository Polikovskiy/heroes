#include <iostream>
#include "Abilities.h"
#include "AbilitiesVampire.h"
#include <stdlib.h>
#include <time.h>

AbilitiesVampire:: AbilitiesVampire(Unit* owner, int damage) : Abilities(owner, damage, "Vampire") {}
AbilitiesVampire::~AbilitiesVampire() {}

void AbilitiesVampire::action(Unit* enemy) {
	std::cout << owner->getName() << " attack " << enemy->getName() << std::endl;
    enemy->takeDamage(this->damage);
    bloodDrain(enemy, this->damage);
    enemy->getAbilities()->counterAttack(this->owner);
    infected(enemy);
}

void AbilitiesVampire::counterAttack(Unit* enemy) {
    std::cout << owner->getName() << " counterattack " << enemy->getName() << std::endl;
    enemy->takeDamage((this->damage)/2);
    bloodDrain(enemy, (this->damage)/2);
}

void AbilitiesVampire::bloodDrain(Unit* enemy, int damage) {
	if (enemy->getType() == "Vampire") {
		return;
	}
    if ( this->owner->getState()->getHp() == this->owner->getState()->getHpLimit() ) {
        return;
    }

    int hpBlood;
    if ( enemy->getState()->getHp() < damage ) {
    	hpBlood = enemy->getState()->getHp() * 0.15;
    } else {
    	hpBlood = damage * 0.15;
    }
    owner->getState()->addHp(hpBlood);
    std::cout << owner->getName() << " draine blood " << enemy->getName() << std::endl;
}

void AbilitiesVampire::infected(Unit* enemy) {
	int infected;
	srand(time(NULL));
	infected = 0 + rand() % 4;
	if (enemy->getType() == "Werevolf" || enemy->getType() == "Vampire" ) {
		return;
	}
    if ( enemy->getState()->getHp() == 0 ) {
    	return;
    }
    if (infected) {
        enemy->setAbilities(new AbilitiesVampire(enemy, enemy->getAbilities()->getDamage()));
        enemy->setType("Vampire");
        std::cout << enemy->getName() << " infected !!!, " << enemy->getName() << " became a vampire" << std::endl;
    }
}
