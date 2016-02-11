/*
 * Scene.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef SCENE_H_
#define SCENE_H_

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "CurrentLayer.h"
#include "Bgm.h"
#include "GameObject.h"
#include <vector>
#include <string>

using namespace std;
using namespace sf;

class Scene
{
    public:
        Scene(int w, int h, int fps, int _max_trvl_spd, const string title);
        virtual ~Scene();
        RenderWindow rdr;
        View view;
        void set_center(Vector2i _p);
        void add_layer(CurrentLayer* lyr);
        void load_Bgm(const string path);
        void update();
    protected:
    private:
        Bgm bgm;
        bool bgm_loaded;
        vector<CurrentLayer*> lyrs;
        bool trvlg;
        int trvl_spd, max_trvl_spd;
        Clock t;
        Vector2i pos;
};

#endif /* SCENE_H_ */
