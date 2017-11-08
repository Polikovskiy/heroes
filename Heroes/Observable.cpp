#include <iostream>
#include "Observable.h"

Observable::Observable() {}
Observable::~Observable() {}

void Observable::addObserver(Observer* newObserver) {
    observer.insert(newObserver);
    std::cout << "MARK" << std::endl;
}

void Observable::die(Unit* target) {
	for(std::set<Observer*>::iterator it = observer.begin(); it != observer.end(); it++) {
		    std::cout << "addLife" << std::endl;
			(*it)->heal(target);
	}
}