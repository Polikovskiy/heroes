#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include "Observer.h"
//#include "Unit.h"
#include <set>

//class Unit;


class Observable {
    protected:
    	std::set<Observer*> observer;
    public:
        Observable();
        ~Observable();
        void addObserver(Observer* newObserver);
        void die(Unit* target);	
};

#endif