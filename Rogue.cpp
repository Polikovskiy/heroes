#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesRogue.h"
#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(name, new State(100), new AbilitiesRogue(this, 20), "Rogue") {}
Rogue::~Rogue() {}
