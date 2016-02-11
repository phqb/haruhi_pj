/*
 * Physics.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Physics.h"

using namespace std;

bool Physics::is_collide(const Polygon& p1, const Polygon& p2) {
    vector<Vector2i> n;
    p1.get_normal_vectors(n);
    p2.get_normal_vectors(n);
    for (unsigned int i = 0; i < n.size(); ++i) {
        Vector2<long> pj1 = p1.projection(n[i]), pj2 = p2.projection(n[i]);
        if (((pj1.x < pj2.x) && (pj1.y <= pj2.x)) || ((pj1.x >= pj2.x) && (pj2.y <= pj1.x)))
            return false;
    }
    return true;
}

void Physics::update(Time delta_time) {

}

