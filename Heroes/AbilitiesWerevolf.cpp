#include <iostream>
#include "Abilities.h"
#include "AbilitiesWerevolf.h"
#include <stdlib.h>
#include <time.h>
#include "Werevolf.h"


AbilitiesWerevolf:: AbilitiesWerevolf(Unit* owner, int damage) : Abilities(owner, damage, "Vampire") {
    this->form = "Human";
}
AbilitiesWerevolf::~AbilitiesWerevolf() {}

void AbilitiesWerevolf::action(Unit* enemy) {
    int flag;
    std::cout << owner->getName() << " in form " << form << std::endl;
    std::cout << "Transform? 1-yes, 0-no" << std::endl;
    std::cin >> flag;

    if ( flag ) {
        transform();
    }

	std::cout << owner->getName() << " attack " << enemy->getName() << std::endl;
    enemy->takeDamage(this->damage);
    enemy->getAbilities()->counterAttack(this->owner);

    if ( form == "Volf" ) {
        infected(enemy);
    }    
}

void AbilitiesWerevolf::counterAttack(Unit* enemy) {
    std::cout << owner->getName() << " counterattack " << enemy->getName() << std::endl;
    enemy->takeDamage((this->damage)/2);
}

void AbilitiesWerevolf::transform() {
    if ( form == "Human" ) {
        owner->getState()->setHpLimit((owner->getState()->getHpLimit())*2);
        owner->getState()->setHp((owner->getState()->getHp())*2);
        damage *= 2;
        form = "Volf";
        std::cout << owner->getName() << " transform in " << form << std::endl;
    } else if ( form == "Volf" ) {
        owner->getState()->setHpLimit((owner->getState()->getHpLimit())/2);
        owner->getState()->setHp((owner->getState()->getHp())/2);
        damage /= 2;
        form = "Human";
        std::cout << owner->getName() << " transform in " << form << std::endl;
    } else {
        return;
    }
}


void AbilitiesWerevolf::infected(Unit* enemy) {
	int infected;
	srand(time(NULL));
	infected = 0 + rand() % 4;
	if (enemy->getType() == "Werevolf" || enemy->getType() == "Vampire") {
		return;
	}
    if ( enemy->getState()->getHp() == 0 ) {
    	return;
    }
    if (infected) {
        enemy->setAbilities(new AbilitiesWerevolf(enemy, enemy->getAbilities()->getDamage()));
        enemy->setType("Werevolf");
        std::cout << enemy->getName() << " infected !!!" << std::endl;
    }
}