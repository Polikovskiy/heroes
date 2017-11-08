#include "Priest.h"
#include "Fireball.h"

Priest::Priest(const std::string& name) : SpellCaster(name, "Priest") {
	spellbook["Fireball"] = new Fireball();
	spellbook["Heal"] = new Heal();
}
Priest::~Priest() {}