/*
 * Player.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Player.h"

using namespace std;
using namespace sf;

Player::Player() {
	move_speed = 0;
}

Player::~Player() {}

void Player::set_move_speed(int _move_speed) {
    move_speed = _move_speed;
}

GameObjectState Player::next_state(Time& delta_time) {
    GameObjectState r;
    r.cur_ani_fr = 0;
    Vector2i dir = Vector2i(0, 0);
    if (Keyboard::isKeyPressed(Keyboard::Left) && Keyboard::isKeyPressed(Keyboard::Up)) {
        dir.x = -move_speed;
        dir.y = -move_speed/2;
        r.cur_ani = &animations["lu"];
    } else if (Keyboard::isKeyPressed(Keyboard::Left) && Keyboard::isKeyPressed(Keyboard::Down)) {
        dir.x = -move_speed;
        dir.y = move_speed/2;
        r.cur_ani = &animations["ld"];
    } else if (Keyboard::isKeyPressed(Keyboard::Left)) {
        dir.x = -move_speed;
        r.cur_ani = &animations["l"];
    } else if (Keyboard::isKeyPressed(Keyboard::Right) && Keyboard::isKeyPressed(Keyboard::Up)) {
        dir.x = move_speed;
        dir.y = -move_speed/2;
        r.cur_ani = &animations["ru"];
    } else if (Keyboard::isKeyPressed(Keyboard::Right) && Keyboard::isKeyPressed(Keyboard::Down)) {
        dir.x = move_speed;
        dir.y = move_speed/2;
        r.cur_ani = &animations["rd"];
    } else if (Keyboard::isKeyPressed(Keyboard::Right)) {
        dir.x = move_speed;
        r.cur_ani = &animations["r"];
    } else if (Keyboard::isKeyPressed(Keyboard::Up)) {
        dir.y = -move_speed;
        r.cur_ani = &animations["u"];
    } else if (Keyboard::isKeyPressed(Keyboard::Down)) {
        dir.y = move_speed;
        r.cur_ani = &animations["d"];
    } else {
        r.cur_ani = states.back().cur_ani;
        r.cur_ani_fr = spr.getCurrentFrame();
    }
    r.x = states.back().x + dir.x*delta_time.asSeconds();
    r.y = states.back().y + dir.y*delta_time.asSeconds();
    return r;
}
