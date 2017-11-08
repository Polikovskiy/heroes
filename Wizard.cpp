#include "Wizard.h"

Wizard::Wizard(const std::string& name) : SpellCaster(name, "Wizard") {
	spellbook["Fireball"] = new Fireball();
}
Wizard::~Wizard() {}