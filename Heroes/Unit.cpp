#include <iostream>
#include "Unit.h"
#include "Observable.h"

Unit::Unit(const std::string name, State* state, Abilities* abilities, const std::string unit_type) :
Observable() {
	this->name = name;
	this->state = state;
	this->abilities = abilities;
	this->unit_type = unit_type;
	std::cout << name <<  " unit created " << std::endl;
}

Unit::~Unit() {
	delete state;
	delete abilities;
}

std::string Unit::getName() {
	return this->name;
}

std::string Unit::getType() {
	return this->unit_type;
}


State* Unit::getState() {
	return this->state;
}

Abilities* Unit::getAbilities() {
	return this->abilities;
}

void Unit::setAbilities(Abilities* newAbilities){
	this->abilities = newAbilities;
}

void Unit::setType(const std::string newUnit_type){
	this->unit_type = newUnit_type;
}

void Unit::setState(State* newState) {
	this->state = newState;
}

void Unit::takeDamage(int damage) {
    isAlive();     
	if ( damage > this->state->getHp() ) {
	    damage = this->state->getHp();
	}
	this->state->setHp(this->state->getHp()-damage);

	//if ( this->state->getHp() == 0 ) {
		//die(this);
	//}
}

void Unit::takeMagicDamage(int damage) {
	isAlive();
	this->takeDamage(damage);
}

void Unit::attack(Unit* enemy) {
	abilities->action(enemy);
}

void Unit::isAlive() {
	if ( this->state->getHp() == 0 ) {
		delete this;
		throw UnitIsDeadException();
	}
}

std::ostream& operator<<(std::ostream& out, Unit* unit) {
	out << "Unit name: " << unit->getName() << " , Unit Type: " << unit->getType() << std::endl;
	out << *(unit->getState()) << "Damage:" << unit->getAbilities()->getDamage() << std::endl;
	return out;
}
	

