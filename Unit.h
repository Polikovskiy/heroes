#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "State.h"
#include "Abilities.h"
//#include "Observable.h"

typedef enum {
	SOLDIER,
	ROGUE,
	BERSERK,
	VAMPIRE,
	WEREWOLF,
	WIZARD,
	HEALER,
	PRIEST,
	WARLOCK,
	NECROMANCER
} classes;

class Abilities;

class UnitIsDeadException {};

class Unit {
    protected:
    	std::string unit_type;
    	State* state;
    	Abilities* abilities;
    	std::string name;

    	void isAlive();
    public:
	    Unit(const std::string name, State* state, Abilities* abilities, const std::string unit_type);
	    ~Unit();

	    std::string getName();
	    std::string getType();
	    State* getState();
	    Abilities* getAbilities();
	    void setAbilities(Abilities* newAbilities);
	    void setType(const std::string newUnit_type);
	    void setState(State* newState);
	    void takeDamage(int damage);
	    void takeMagicDamage(int damage);
	    void attack(Unit* enemy);
	    
};

std::ostream& operator<<(std::ostream& out, Unit* unit);

#endif

