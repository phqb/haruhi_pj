/*
 * CurrentLayer.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "CurrentLayer.h"

CurrentLayer::CurrentLayer() {}

CurrentLayer::~CurrentLayer() {
    objs.clear();
}

void CurrentLayer::update(Time& delta_time, RenderWindow& rdr_tgr, bool trvlg, int trvl_spd) {
    int n = objs.size();
    GameObjectState state;
    for (int i = 0; i < n; i++) {
        if (!trvlg) {
            state = objs[i]->next_state(delta_time);
            objs[i]->save_state(state);
        } else
            state = objs[i]->prev_state(trvl_spd);
        objs[i]->draw(delta_time, state, rdr_tgr);
    }
}

void CurrentLayer::add(GameObject* _obj) {
	objs.push_back(_obj);
}

