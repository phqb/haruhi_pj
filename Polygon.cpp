/*
 * Polygon.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Polygon.h"

Polygon::Polygon() {
    //ctor
}

Polygon::~Polygon() {
    //dtor
}

Vector2<long> Polygon::projection(Vector2i& axis) const {
    Vector2<long> r = Vector2<long>(LONG_MAX, LONG_MIN);
    size_t n = getPointCount();
    for (size_t i = 0; i < n; ++i) {
        Vector2f p = getPoint(i);
        long d = (p.x + ref_point.x)*axis.x + (p.y + ref_point.y)*axis.y;
        r.x = min(r.x, d);
        r.y = max(r.y, d);
    }
    return r;
}

void Polygon::get_normal_vectors(vector<Vector2i>& v) const {
    size_t n = getPointCount();
    for (size_t i = 0; i < n; ++i) {
        Vector2f p1 = getPoint(i), p2 = getPoint((i + 1)%n);
        v.push_back(Vector2i((int)(p2.y - p1.y), (int)(p1.x - p2.x)));
    }
}

void Polygon::set_ref_point(Vector2i p) {
    ref_point = p;
}
