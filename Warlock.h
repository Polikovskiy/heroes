#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "Exhortation.h"

class Warlock : public SpellCaster {
public:
	Warlock(const std::string& name);
	~Warlock();
	void cast(Unit* enemy, const std::string& spellname);
};

#endif