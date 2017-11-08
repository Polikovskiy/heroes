#ifndef ABILITIES_H
#define ABILITIES_H

#include <iostream>
#include "Unit.h"
#include "Observable.h"

class Unit;

class Abilities {
    protected:
    	Unit* owner;
    	std::string name;
    	int damage;
    public:
        Abilities(Unit* owner, int damage, std::string name);
        ~Abilities();

        virtual void action(Unit* target) = 0;
        virtual void counterAttack(Unit* target) = 0;
        const int getDamage() const;
        void setDamage(int newDamage);	
};

#endif