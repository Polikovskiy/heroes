#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
    private:
    	int hp;
    	int hpLimit;
    public:
        State(int hp);
        ~State();

        int getHp();	
        int getHpLimit();
        void addHp(int hp);
        void setHp(int newHp); 
        void setHpLimit(int newHpLimit);
};

std::ostream& operator<<(std::ostream& out, State& state);

#endif