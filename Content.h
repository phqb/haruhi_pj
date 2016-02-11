/*
 * Content.h
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#ifndef CONTENT_H_
#define CONTENT_H_

#include <SFML/Graphics/Texture.hpp>
#include <map>

using namespace std;
using namespace sf;

class Content
{
    public:
        Content();
        virtual ~Content();
        static map<string, Texture> loaded_textures;
    protected:
    private:
};

#endif /* CONTENT_H_ */
