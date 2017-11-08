#include "Fireball.h"

Fireball::Fireball() : Spell(30, 30, "Fireball") {}
Fireball::~Fireball() {}
	
void Fireball::action(Unit* our, Unit* target) {
	std::cout << target->getName() << " burns in the fire!" << std::endl;

	if ( our->getType() == "Priest" || our->getType() == "Healer" ) {
		if (our->getType() == "Priest" && target->getType() == "Vampire" ) {
			target->takeMagicDamage(spellpower*2);
        } else if (our->getType() == "Priest" && target->getType() == "Necromancer" ) {
			target->takeMagicDamage(spellpower*2);
		} else {
			target->takeMagicDamage(spellpower/2);
		}
	} else {
		target->takeMagicDamage(spellpower);
	}
}