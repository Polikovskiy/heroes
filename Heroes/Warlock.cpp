#include "Warlock.h"

Warlock::Warlock(const std::string& name) : SpellCaster(name, "Warlock") {
	spellbook["Exhortation"] = new Exhortation();
}
Warlock::~Warlock() {}