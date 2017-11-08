#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "Fireball.h"

class Wizard : public SpellCaster {
public:
	Wizard(const std::string& name);
	~Wizard();
};

#endif