#include <iostream>
#include "State.h"


State::State(int hp) {
    this->hp = hp;
    this->hpLimit = hp;
}

State::~State() {}

int State::getHp() {
    return this->hp;
}	

int State::getHpLimit() {
    return this->hpLimit;
}
void State::addHp(int hp) {
    this->hp += hp;
    if ( this->hp > this->hpLimit ) {
        this->hp = this->hpLimit;
    }
}

void State::setHp(int newHp) {
    if (newHp < 0 ) {
        return;
    }
    if (newHp > this->hpLimit ) {
        newHp = this->hpLimit;
    }
    this->hp = newHp;

}

void State::setHpLimit(int newHpLimit) {
    if (newHpLimit < 0 ) {
        return;
    }

    this->hpLimit = newHpLimit;

}  

std::ostream& operator<<(std::ostream& out, State& state) {
    out << "State: " << "hp: " << state.getHp() << "/" << state.getHpLimit() << std::endl;
    return out;
}