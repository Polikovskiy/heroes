#include "Necromant.h"

Necromant::Necromant(const std::string& name) : SpellCaster(name, "Necromant"), Observer() {}
Necromant::~Necromant() {}

void Necromant::attack(Unit* target) {
     target->takeDamage(this->getAbilities()->getDamage());
     if ( this->mana < 20 ) {
     	return;
     } else {
     	mark(target);
     }
}

void Necromant::mark(Unit* target) {
	target->addObserver(this);
	this->mana -= 20;
}

void Necromant::heal(Unit* observable) {
	std::cout << observable->getName() << " gives life " << name << std::endl;
	this->getState()->addHp((observable->getState()->getHpLimit())*0.2);
}