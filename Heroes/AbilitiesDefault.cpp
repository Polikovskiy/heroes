#include <iostream>
#include "Abilities.h"
#include "AbilitiesDefault.h"


AbilitiesDefault:: AbilitiesDefault(Unit* owner, int damage) : Abilities(owner, damage, "Soldier") {}
AbilitiesDefault::~AbilitiesDefault() {}

void AbilitiesDefault::action(Unit* enemy) {
    std::cout << owner->getName() << " attack " << enemy->getName() << std::endl;
    enemy->takeDamage(this->damage);
    enemy->getAbilities()->counterAttack(this->owner);
}

void AbilitiesDefault::counterAttack(Unit* enemy) {
    std::cout << owner->getName() << " counterAttack " << enemy->getName() << std::endl;
    enemy->takeDamage((this->damage)/2);
}
