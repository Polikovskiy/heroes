#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesDefault.h"

class Soldier : public Unit {
    public:
    	Soldier(const std::string& name);
    	~Soldier();
};

#endif