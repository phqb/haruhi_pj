/*
 * GameObject.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "GameObject.h"

using namespace std;
using namespace sf;

GameObject::GameObject() {
	txr = NULL;
}

GameObject::~GameObject() {
    states.clear();
    animations.clear();
    delete txr;
}

void GameObject::create(const string _res_path, int _x, int _y, Time _fr_time) {
    if (Content::loaded_textures.find(_res_path) == Content::loaded_textures.end()) {
        Content::loaded_textures[_res_path] = Texture();
        Content::loaded_textures[_res_path].loadFromFile(_res_path);
        Content::loaded_textures[_res_path].setSmooth(true);
    }
    txr = &Content::loaded_textures[_res_path];
    spr = AnimatedSprite(_fr_time, false, true);
    states.push_back(GameObjectState(_x, _y, NULL, 0));
}

void GameObject::set_collision_polygon(vector<Vector2i> p) {
    int n = p.size();
    col.setPointCount(n);
    for (int i = 0; i < n; ++i) col.setPoint(i, (Vector2f)p[i]);
    col.setFillColor(Color::Transparent);
    col.setOutlineThickness(1);
    col.setOutlineColor(Color::White);
}

void GameObject::load_animations(const string _name, vector<IntRect> _rects) {
    animations[_name] = Animation();
    animations[_name].setSpriteSheet(*txr);
    for (int i = 0; i < (int)_rects.size(); ++i)
        animations[_name].addFrame(_rects[i]);
}

void GameObject::init_animation(const string _ani) {
    spr.play();
    spr.setAnimation(animations[_ani]);
    spr.setFrame(0, true);
    states.back().cur_ani = &animations[_ani];
}

GameObjectState GameObject::next_state(Time& delta_time) {
    GameObjectState r = states.back();
    r.cur_ani_fr = spr.getCurrentFrame();
    return r;
}

const GameObjectState& GameObject::cur_state() {
    return states.back();
}

GameObjectState GameObject::prev_state(int n) {
    GameObjectState r;
    for (int i = 0; i < n && states.size() > 1; ++i) {
        r = states.back();
        states.pop_back();
    }
    return r;
}

void GameObject::save_state(GameObjectState state) {
    states.push_back(state);
}

void GameObject::draw(Time& delta_time, GameObjectState& state, RenderWindow& rdr_tgr) {
    if (state.cur_ani != NULL) {
		spr.setAnimation(*state.cur_ani);
		spr.setFrame(state.cur_ani_fr, false);
		spr.update(delta_time);
		spr.setPosition(state.x, state.y);
		//col.setPosition(state.x, state.y);
    }
    rdr_tgr.draw(spr);
    //rdr_tgr.draw(col);
}

const Polygon& GameObject::get_col() {
    return col;
}

void GameObject::set_collision_ref_point(Vector2i p) {
    col.set_ref_point(p);
}

void GameObject::set_depth_ref(Vector2i u, Vector2i v) {
    depth_ref[0] = u;
    depth_ref[1] = v;
}

const Vector2i& GameObject::get_depth_ref(int i) {
    return depth_ref[i];
}

bool GameObject::is_behind(GameObject* obj) {
    int xa = obj->get_depth_ref(0).x + obj->cur_state().x;
    int ya = obj->get_depth_ref(0).y + obj->cur_state().y;
    int xb = obj->get_depth_ref(1).x + obj->cur_state().x;
    int yb = obj->get_depth_ref(1).y + obj->cur_state().y;
    int a = yb - ya, b = xa - xb;
    long c = ya*xb - xa*yb;
    return  ((depth_ref[0].x + cur_state().x)*a + (depth_ref[0].y + cur_state().y)*b + c > 0) ||
            ((depth_ref[1].x + cur_state().x)*a + (depth_ref[1].y + cur_state().y)*b + c > 0);
}

void GameObject::set_transparency(int trans) {
	Color c = spr.getColor();
	c.a = trans;
	spr.setColor(c);
}
