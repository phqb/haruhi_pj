/*
 * main.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include <SFML/Window/Event.hpp>
#include "GameObjectState.h"
#include "GameObject.h"
#include "StaticObject.h"
#include "Cloud.h"
#include "Scene.h"
#include "Player.h"
#include "CurrentLayer.h"
#include "CollideLayer.h"
#include <vector>

using namespace std;
using namespace sf;

int main() {
    Scene scene(1280, 720, 60, 8, "Game");
    scene.load_Bgm("res/bgm/technika2.ogg");
	CurrentLayer layer0;
	Cloud cloud[100];
	for (int i = 0; i < 100; ++i) {
		cloud[i].create("res/bg/cloud_2.png", rand() % 2000, rand() % 2000, seconds(1.0f));
		cloud[i].load_animations("def", vector<IntRect> {IntRect(0, 0, 343, 118)});
		cloud[i].init_animation("def");
		layer0.add(&cloud[i]);
	}
	CurrentLayer layer1;
	StaticObject bg[10];
	for (int i = 0; i < 10; ++i) {
		bg[i].create("res/bg/iso_2.png", rand() % 2000, rand() % 2000, seconds(1.0f));
		bg[i].load_animations("def", vector<IntRect> {IntRect(0, 0, 181, 94)});
		bg[i].init_animation("def");
		layer1.add(&bg[i]);
	}
	CollideLayer layer2;
	Player player;
	player.create("res/sprite/iso/iso.png", 200, 200, seconds(0.015f));
	player.set_collision_polygon(vector<Vector2i> {Vector2i(10, 125), Vector2i(40, 140), Vector2i(70, 125), Vector2i(40, 110)});
	player.set_depth_ref(Vector2i(10, 125), Vector2i(70, 125));
	player.load_animations("l", vector<IntRect> {IntRect(0, 405, 80, 135)});
	player.load_animations("r", vector<IntRect> {IntRect(0, 810, 80, 135)});
	player.load_animations("u", vector<IntRect> {IntRect(0, 540, 80, 135)});
	player.load_animations("d", vector<IntRect> {IntRect(0, 0, 80, 135)});
	player.load_animations("lu", vector<IntRect> {IntRect(0, 135, 80, 135)});
	player.load_animations("ld", vector<IntRect> {IntRect(0, 270, 80, 135)});
	player.load_animations("ru", vector<IntRect> {IntRect(0, 675, 80, 135)});
	player.load_animations("rd", vector<IntRect> {IntRect(0, 945, 80, 135)});
	player.init_animation("d");
	player.set_move_speed(250);
	layer2.add(&player);
	vector<IntRect> vt;
	int i = 0, j = 0;
	for (int k = 1; k <= 128; ++k) {
		vt.push_back(IntRect(i, j, 80, 80)); i += 80;
		if (i == 960) {	i = 0; j += 80; }
	}
	GameObject tree[10];
	for (int i = 0; i < 10; i++) {
		tree[i].create("res/sprite/tree/treegrow.png", rand() & 2000, rand() & 2000, seconds(0.12f));
		tree[i].set_collision_polygon(vector<Vector2i> {Vector2i(10, 70), Vector2i(40, 80), Vector2i(70, 70), Vector2i(40, 60)});
		tree[i].set_depth_ref(Vector2i(10, 70), Vector2i(70, 70));
		tree[i].load_animations("def", vt);
		tree[i].init_animation("def");
		layer2.add(&tree[i]);
	}
	StaticObject tower;
	tower.create("res/sprite/tower.png", -500, -500, seconds(0.015f));
	tower.set_collision_polygon(vector<Vector2i> {Vector2i(129, 574), Vector2i(129 + 212, 574 + 103), Vector2i(561, 537), Vector2i(561 - 231, 537 - 115)});
	tower.set_depth_ref(Vector2i(129, 574), Vector2i(561, 537));
    tower.load_animations("def", vector<IntRect> {IntRect(0, 0, 605, 676)});
    tower.init_animation("def");
    layer2.add(&tower);
    StaticObject tower_left;
    tower_left.create("res/sprite/tower_left.png", 500, 500, seconds(0.015f));
    tower_left.set_collision_polygon(vector<Vector2i> {Vector2i(3, 280), Vector2i(62, 312), Vector2i(93, 285), Vector2i(33, 251)});
    tower_left.set_depth_ref(Vector2i(3, 280), Vector2i(93, 285));
    tower_left.load_animations("def", vector<IntRect> {IntRect(0, 0, 265, 335)});
    tower_left.init_animation("def");
    layer2.add(&tower_left);
    StaticObject tower_right;
    tower_right.create("res/sprite/tower_right.png", 500, 500, seconds(0.015f));
    tower_right.set_collision_polygon(vector<Vector2i> {Vector2i(154, 246), Vector2i(200, 281), Vector2i(259, 253), Vector2i(214, 222)});
    tower_right.set_depth_ref(Vector2i(154, 246), Vector2i(259, 253));
    tower_right.load_animations("def", vector<IntRect> {IntRect(0, 0, 265, 335)});
    tower_right.init_animation("def");
	layer2.add(&tower_right);
	scene.add_layer(&layer1);
	scene.add_layer(&layer2);
	scene.add_layer(&layer0);
	Event event;
	while (scene.rdr.isOpen()) {
		while (scene.rdr.pollEvent(event))
			if (event.type == Event::Closed) {
				scene.rdr.close();
				return 0;
			}
        scene.set_center(Vector2i(player.cur_state().x, player.cur_state().y));
		scene.update();
	}
	return 0;
}
