#include <iostream>
#include "Abilities.h"

Abilities::Abilities(Unit* owner, int damage, std::string name) {
	this->owner = owner;
	this->name = name;
	this->damage = damage;
}
 
Abilities::~Abilities() {}

const int Abilities::getDamage() const {
	return this->damage;
}

void Abilities::setDamage(int newDamage) {
	damage = newDamage;
}	
