#ifndef BERSERK_H
#define BERSERK_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesDefault.h"

class Berserk : public Unit {
    public:
    	Berserk(const std::string& name);
    	~Berserk();
    	void takeMagicDamage(int damage);
};

#endif