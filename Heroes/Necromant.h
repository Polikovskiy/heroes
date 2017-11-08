#ifndef NECROMANT_H
#define NECROMANT_H

#include "SpellCaster.h"
#include "Observer.h"

class Necromant : public SpellCaster , public Observer {
public:
	Necromant(const std::string& name);
	~Necromant();
	void attack(Unit* target);
	void heal(Unit* observable);
	void mark(Unit* target);
};

#endif