/*
 * Polygon.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef POLYGON_H_
#define POLYGON_H_

#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>
#include <climits>

using namespace std;
using namespace sf;

class Polygon : public ConvexShape  {
public:
    Polygon();
    virtual ~Polygon();
    Vector2<long> projection(Vector2i& axis) const;
    void get_normal_vectors(vector<Vector2i>& v) const;
    void set_ref_point(Vector2i p);

protected:

private:
    Vector2i ref_point;
};

#endif /* POLYGON_H_ */
