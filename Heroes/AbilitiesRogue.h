#ifndef ABILITIESRORUE_H
#define ABILITIESRORUE_H

#include <iostream>
#include "Abilities.h"

class AbilitiesRogue: public Abilities {
    public:
    	AbilitiesRogue(Unit* owner, int damage);
    	~AbilitiesRogue();
    	void action(Unit* enemy);
    	void counterAttack(Unit* enemy);
};

#endif