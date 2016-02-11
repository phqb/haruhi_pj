/*
 * CurrentLayer.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef CURRENTLAYER_H_
#define CURRENTLAYER_H_

#include <SFML/Graphics/RenderWindow.hpp>
#include "GameObject.h"
#include <vector>

using namespace std;

/** \brief An layer storing game objects
 *
 * Work like vector, no more no less.
 */
class CurrentLayer
{
    public:
        CurrentLayer();
        virtual ~CurrentLayer();
        void add(GameObject* _obj);
        virtual void update(Time& delta_time, RenderWindow& rdr_tgr, bool trvlg, int trvl_spd);
    protected:
        vector<GameObject*> objs;
};

#endif /* CURRENTLAYER_H_ */
