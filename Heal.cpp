#include "Heal.h"

Heal::Heal() : Spell(30, 30, "Heal") {}
Heal::~Heal() {}
	
void Heal::action(Unit* our, Unit* target) {
	std::cout << target->getName() << " healed" << std::endl;

	if ( our->getType() == "Wizard") {
		target->getState()->addHp(spellpower/2);
	} else {
		target->getState()->addHp(spellpower);
	}
}