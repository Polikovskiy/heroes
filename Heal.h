#ifndef HEAL_H
#define HEAL_H

#include "Spell.h"

class Heal : public Spell {
public:
	Heal();
	~Heal();
	
	void action(Unit* our, Unit* target);
};

#endif