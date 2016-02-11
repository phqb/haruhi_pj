/*
 * StaticObject.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "StaticObject.h"

StaticObject::StaticObject() {
    //ctor
}

StaticObject::~StaticObject() {
    //dtor
}

GameObjectState StaticObject::prev_state(int n) {
    return states.back();
}

void StaticObject::save_state(GameObjectState state) {
    if (states.empty())
        states.push_back(state);
    else
        states.back() = state;
}

