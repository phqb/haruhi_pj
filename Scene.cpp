/*
 * Scene.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Scene.h"

Scene::Scene(int w, int h, int fps, int _max_trvl_spd, const string title) {
    trvlg = false;
    trvl_spd = 1;
    max_trvl_spd = _max_trvl_spd;
    rdr.create(VideoMode(w, h), title);
    rdr.setFramerateLimit(fps);
	rdr.setVerticalSyncEnabled(true);
	rdr.setKeyRepeatEnabled(true);
	view.setCenter(0, 0);
	view.setSize(w, h);
	bgm_loaded = false;
}

Scene::~Scene() {
    //dtor
}

void Scene::set_center(Vector2i _p) {
    pos = _p;
}

void Scene::add_layer(CurrentLayer* lyr) {
    lyrs.push_back(lyr);
}

void Scene::load_Bgm(const string path) {
    bgm_loaded = bgm.load(path, true, true);
}

void Scene::update() {
    trvlg = false;
    if (Keyboard::isKeyPressed(Keyboard::LShift))
        trvlg = true;
    if (!trvlg)
        trvl_spd = 1;
    if (trvlg && Keyboard::isKeyPressed(Keyboard::Up))
        ++trvl_spd;
    if (trvl_spd > max_trvl_spd)
        trvl_spd = max_trvl_spd;
    if (trvlg && Keyboard::isKeyPressed(Keyboard::Down))
        --trvl_spd;
    if (trvl_spd < 1)
        trvl_spd = 1;
    Time delta_time = t.restart();
    if (bgm_loaded)
        bgm.update(delta_time, trvlg, trvl_spd);
    rdr.clear();
    view.setCenter(pos.x, pos.y);
    rdr.setView(view);
    for (int i = 0; i < (int)lyrs.size(); ++i)
        lyrs[i]->update(delta_time, rdr, trvlg, trvl_spd);
    rdr.display();
}
