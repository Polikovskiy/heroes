#include "Spell.h"

Spell::Spell(int spellpower, int needMana, std::string spell_name) {
	this->spellpower = spellpower;
	this->needMana = needMana;
	this->spell_name = spell_name;
}
Spell::~Spell() {

}

int Spell::getSpellPower() {
    return spellpower;
}

int Spell::getNeedMana() {
    return needMana;
}

std::string Spell::getSpellName() {
    return spell_name;
}