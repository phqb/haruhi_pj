/*
 * Physics.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef PHYSICS_H_
#define PHYSICS_H_

#include <SFML/System/Vector2.hpp>
#include <SFML/System/Time.hpp>
#include "Polygon.h"

using namespace std;
using namespace sf;

/**
 * /brief				An class containing physics implements
 * /method is_collide()	Return true if two polygons collide, false otherwise
 * /method update()		Update physics rules after a given time
 */
class Physics
{
    public:
        static bool is_collide(const Polygon& p1, const Polygon& p2);
        static void update(Time delta_time);
};

#endif /* PHYSICS_H_ */
