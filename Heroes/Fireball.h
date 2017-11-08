#ifndef FIREBALL_H
#define FIREBALL_H

#include "Spell.h"

class Fireball : public Spell {
public:
	Fireball();
	~Fireball();
	
	void action(Unit* our, Unit* target);
};

#endif