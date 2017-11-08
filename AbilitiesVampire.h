#ifndef ABILITIESVAMPIRE_H
#define ABILITIESVAMPIRE_H

#include <iostream>
#include "Abilities.h"

class AbilitiesVampire: public Abilities {
    public:
    	AbilitiesVampire(Unit* owner, int damage);
    	~AbilitiesVampire();
    	void action(Unit* enemy);
    	void counterAttack(Unit* enemy);
    	void bloodDrain(Unit* enemy, int damage);
    	void infected(Unit* enemy);
};

#endif