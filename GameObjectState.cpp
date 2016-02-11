/*
 * GameObjectState.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "GameObjectState.h"

GameObjectState::GameObjectState() {
	cur_ani_fr = x = y = 0;
	cur_ani = NULL;
}

GameObjectState::GameObjectState(int _x, int _y, Animation* _cur_ani, size_t _cur_ani_fr) {
    x = _x;
    y = _y;
    cur_ani = _cur_ani;
    cur_ani_fr = _cur_ani_fr;
}

GameObjectState::~GameObjectState() {
    //dtor
}
