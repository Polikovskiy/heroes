#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "Heal.h"
#include "Fireball.h"

class Priest : public SpellCaster {
public:
	Priest(const std::string& name);
	~Priest();
};

#endif