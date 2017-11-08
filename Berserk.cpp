#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesDefault.h"
#include "Berserk.h"

Berserk::Berserk(const std::string& name) : Unit(name, new State(120), new AbilitiesDefault(this, 25), "Berserk") {}
Berserk::~Berserk() {}

void Berserk::takeMagicDamage(int damage) {
	return;
}
