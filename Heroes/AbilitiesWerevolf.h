#ifndef ABILITIESWEREVOLF_H
#define ABILITIESWEREVOLF_H

#include <iostream>
#include "Abilities.h"

class AbilitiesWerevolf: public Abilities {
    protected:
    	std::string form;
    public:
    	AbilitiesWerevolf(Unit* owner, int damage);
    	~AbilitiesWerevolf();
    	std::string getForm();
    	void action(Unit* enemy);
    	void counterAttack(Unit* enemy);
    	void transform();
    	void infected(Unit* enemy);
};

#endif