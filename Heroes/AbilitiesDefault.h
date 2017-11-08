#ifndef ABILITIESDEFAULT_H
#define ABILITIESDEFAULT_H

#include <iostream>
#include "Abilities.h"

class AbilitiesDefault: public Abilities {
    public:
    	AbilitiesDefault(Unit* owner, int damage);
    	~AbilitiesDefault();
    	void action(Unit* enemy);
    	void counterAttack(Unit* enemy);
};

#endif