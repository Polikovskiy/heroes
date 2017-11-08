#include <iostream>
#include "Abilities.h"
#include "AbilitiesRogue.h"


AbilitiesRogue:: AbilitiesRogue(Unit* owner, int damage) : Abilities(owner, damage, "Rogue") {}
AbilitiesRogue::~AbilitiesRogue() {}

void AbilitiesRogue::action(Unit* enemy) {
    std::cout << owner->getName() << " attack " << enemy->getName() << std::endl;
    enemy->takeDamage(this->damage);
}

void AbilitiesRogue::counterAttack(Unit* enemy) {
    std::cout << owner->getName() << " counterAttack " << enemy->getName() << std::endl;
    enemy->takeDamage((this->damage)/2);
}
