/*
 * Player.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <SFML/System/Vector2.hpp>
#include "GameObject.h"

using namespace std;
using namespace sf;

/** \brief              A controlable sprite of game
 *
 * \member move_speed   Velocity in pixel per second
 * \member col          Collision polygon
 * \method create()     Create a Player from given parameters
 * \method move()       Move with given direction
 * \method update()     Update position, animation's frame step, physics, ... and draw on screen
 */
class Player : public GameObject {
public:
	Player();
	virtual ~Player();

    void set_move_speed(int _move_speed);

    /** \brief see GameObject::move()
      * Moving direction is hooked by sf::Keyboard instance.
      */
    GameObjectState next_state(Time& delta_time);

private:
    int move_speed;
};

#endif /* PLAYER_H_ */
