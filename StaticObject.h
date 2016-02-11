/*
 * StaticObject.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef STATICOBJECT_H_
#define STATICOBJECT_H_

#include "GameObject.h"

using namespace std;
using namespace sf;

class StaticObject : public GameObject
{
    public:
        StaticObject();
        virtual ~StaticObject();
        GameObjectState prev_state(int n);
        void save_state(GameObjectState state);
    protected:
    private:
};

#endif /* STATICOBJECT_H_ */
