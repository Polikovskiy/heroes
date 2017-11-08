#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string& name, std::string type_spellcaster) 
	: Unit(name, new State(80), new AbilitiesDefault(this, 10), type_spellcaster) {
		this->mana = 100;
		this->maxMana = mana;
	}
SpellCaster::~SpellCaster() {
	// for ( Spell* s : spellbook ) {
	// 	delete s;
	// }
}

int SpellCaster::getMana() {
	return mana;
}

int SpellCaster::getMaxMana() {
	return maxMana;
}


void SpellCaster::setMana(int newMana) {
	if ( newMana < 0 ) {
		return;
	}
	if ( newMana > maxMana ) {
		newMana = maxMana;
	}
    mana = newMana;
}
	
void SpellCaster::cast(Unit* target, const std::string& spellname) {
	
	std::map<std::string, Spell*>::const_iterator pos = spellbook.find(spellname);

	if (pos == spellbook.end()) {
    	std::cout << "Spell not found" << std::endl;
    	return;
    }	
	if ( mana < pos->second->getNeedMana()) {
		std::cout << "not have a mana :(" << std::endl;
		return;
	}
	std::cout << name << " cast " << spellname << std::endl;
	if ( target->getType() == "Berserk") {
		std::cout << "magic not work!!!" << std::endl;
		return;
	}
    pos->second->action(this, target);
	mana -= pos->second->getNeedMana();
}

void SpellCaster::addSpell(Spell* newSpell) {
	spellbook.insert ( std::pair<std::string, Spell*>(newSpell->getSpellName(), newSpell));
}

std::ostream& operator<<(std::ostream& out, SpellCaster* spellcaster) {
	out << "Unit name: " << spellcaster->getName() << " , Unit Type: " << spellcaster->getType() << std::endl;
	out << *(spellcaster->getState()) << "Damage:" << spellcaster->getAbilities()->getDamage() << ", Mana: " << spellcaster->getMana() << "/" << spellcaster->getMaxMana() << std::endl;
	return out;
}