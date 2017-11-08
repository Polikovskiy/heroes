#ifndef WEREVOLF_H
#define WEREVOLF_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesWerevolf.h"

class Werevolf : public Unit {
    public:
    	Werevolf(const std::string& name);
    	~Werevolf();
};

#endif