#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesWerevolf.h"
#include "Werevolf.h"

Werevolf::Werevolf(const std::string& name) : Unit(name, new State(100), new AbilitiesWerevolf(this, 20), "Werevolf") {}
Werevolf::~Werevolf() {}