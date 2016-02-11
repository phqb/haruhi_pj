/*
 * GameObject.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Content.h"
#include "GameObjectState.h"
#include "Animation.h"
#include "AnimatedSprite.h"
#include "Polygon.h"
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
using namespace sf;

class GameObject
{
    public:
        GameObject();

        virtual ~GameObject();

        void create(const string _res_path, int _x, int _y, Time _fr_time);

        void set_collision_polygon(vector<Vector2i> p);

        void load_animations(const string _name, vector<IntRect> _rects);

        void init_animation(const string _ani);

        virtual GameObjectState next_state(Time& delta_time);

        const GameObjectState& cur_state();

        virtual GameObjectState prev_state(int n);

        virtual void save_state(GameObjectState state);

        void draw(Time& delta_time, GameObjectState& state, RenderWindow& rdr_tgr);

        const Polygon& get_col();

        void set_collision_ref_point(Vector2i p);

        void set_depth_ref(Vector2i u, Vector2i v);

        const Vector2i& get_depth_ref(int i);

        bool is_behind(GameObject* obj);

        void set_transparency(int trans);

    protected:
        Polygon col;
        vector<GameObjectState> states;
        Texture* txr;
        map<string, Animation> animations;
        AnimatedSprite spr;
        Vector2i depth_ref[2];
};

#endif /* GAMEOBJECT_H_ */
