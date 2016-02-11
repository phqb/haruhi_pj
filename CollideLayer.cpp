/*
 * CollideLayer.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "CollideLayer.h"

CollideLayer::CollideLayer() {
    //ctor
}

CollideLayer::~CollideLayer() {
    //dtor
}

void CollideLayer::update(Time& delta_time, RenderWindow& rdr_tgr, bool trvlg, int trvl_spd) {
    int n = objs.size();
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (i != j && objs[i]->is_behind(objs[j]))
				swap(objs[i], objs[j]);
    GameObjectState state;
    bool collided;
    for (int i = 0; i < n; ++i) {
        if (!trvlg) {
            state = objs[i]->next_state(delta_time);
            collided = false;
            objs[i]->set_collision_ref_point(Vector2i(state.x, state.y));
            for (int j = 0; j < n; ++j)
                if (i != j && Physics::is_collide(objs[i]->get_col(), objs[j]->get_col())) {
                    collided = true;
                    break;
                }
            if (collided) {
                state.x = objs[i]->cur_state().x;
                state.y = objs[i]->cur_state().y;
            }
            objs[i]->save_state(state);
        } else
            state = objs[i]->prev_state(trvl_spd);
        objs[i]->draw(delta_time, state, rdr_tgr);
    }
}
