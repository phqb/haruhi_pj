/*
 * Cloud.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef CLOUD_H_
#define CLOUD_H_

#include "GameObject.h"

/** \brief          An inherited class from GameObject
 * \method move()	Perform an randomized moving in a given time.
 *					Because clouds in the sky moving randomly and we can't predict its direction :).
 */
class Cloud : public GameObject
{
    public:
        Cloud();
        virtual ~Cloud();
        GameObjectState next_state(Time& delta_time);
    protected:
    private:
};

#endif /* CLOUD_H_ */
