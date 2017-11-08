#ifndef VAMPIRE_H
#define VAMPIRE_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesVampire.h"

class Vampire : public Unit {
    public:
    	Vampire(const std::string& name);
    	~Vampire();
};

#endif