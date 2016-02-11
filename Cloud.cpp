/*
 * Cloud.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Cloud.h"

Cloud::Cloud() {
    //ctor
}

Cloud::~Cloud() {
    //dtor
}

GameObjectState Cloud::next_state(Time& delta_time) {
    GameObjectState r, cur_state = states.back();
    r.cur_ani = cur_state.cur_ani;
    r.cur_ani_fr = cur_state.cur_ani_fr;
    int speed = (rand() % 2) - (rand() % 2);
    r.x = cur_state.x + speed*delta_time.asSeconds();
    r.y = cur_state.y + speed*delta_time.asSeconds();
    return r;
}
