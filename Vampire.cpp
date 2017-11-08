#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesVampire.h"
#include "Vampire.h"

Vampire::Vampire(const std::string& name) : Unit(name, new State(150), new AbilitiesVampire(this, 30), "Vampire") {}
Vampire::~Vampire() {}

