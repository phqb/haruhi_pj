/*
 * CollideLayer.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef COLLIDELAYER_H_
#define COLLIDELAYER_H_

#include "CurrentLayer.h"
#include "Physics.h"
#include <climits>

class CollideLayer : public CurrentLayer
{
    public:
        CollideLayer();
        virtual ~CollideLayer();
        void update(Time& delta_time, RenderWindow& rdr_tgr, bool trvlg, int trvl_spd);
    protected:
    private:
};

#endif /* COLLIDELAYER_H_ */
