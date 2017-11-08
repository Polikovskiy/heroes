#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "Unit.h"

class Spell {
protected:
	int spellpower;
	int needMana;
	std::string spell_name;

public:
	Spell(int spellpower, int needMana, std::string spell_name);
	~Spell();
    int getSpellPower();
    int getNeedMana();
    std::string getSpellName();
	virtual void action(Unit* our, Unit* target) = 0;
};

#endif