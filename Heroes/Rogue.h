#ifndef ROGUE_H
#define ROGUE_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesRogue.h"

class Rogue : public Unit {
    public:
    	Rogue(const std::string& name);
    	~Rogue();
};

#endif