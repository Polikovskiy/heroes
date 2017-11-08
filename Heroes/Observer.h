#ifndef OBSERVER_H
#define OBSERVER_H

#include "Unit.h"


class Observable;

#include <iostream>

class Observer {
    public:
        Observer();
        ~Observer();

        virtual void heal(Unit* observable) = 0;	
};

#endif