#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesDefault.h"
#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(name, new State(100), new AbilitiesDefault(this, 20), "Soldier") {}
Soldier::~Soldier() {}
