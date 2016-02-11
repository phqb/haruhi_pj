/*
 * GameObjectState.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef GAMEOBJECTSTATE_H_
#define GAMEOBJECTSTATE_H_

#include "Animation.h"

using namespace std;

class GameObjectState
{
    public:
        GameObjectState();
        GameObjectState(int x, int y, Animation* cur_ani, size_t cur_ani_fr);
        virtual ~GameObjectState();
        int x, y;
        Animation* cur_ani;
        size_t cur_ani_fr;
    protected:
    private:
};

#endif /* GAMEOBJECTSTATE_H_ */
