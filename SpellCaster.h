#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "Unit.h"
#include "State.h"
#include "AbilitiesDefault.h"
#include "Spell.h"
#include "Observable.h"
#include <map>


class SpellCaster : public Unit {
    protected:
    	int mana;
    	int maxMana;
    	std::map<std::string, Spell*> spellbook;
    public:
    	SpellCaster(const std::string& name, std::string type_spellcaster);
    	~SpellCaster();

    	int getMana();
    	int getMaxMana();
    	void setMana(int newMana);


    	void cast(Unit* enemy, const std::string& spellname);
    	void addSpell(Spell* newSpell);
};

std::ostream& operator<<(std::ostream& out, SpellCaster* spellcaster);

#endif