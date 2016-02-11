/*
 * Content.cpp
 *
 *  Created on: Dec 12, 2015
 *      Author: phqb
 */

#include "Content.h"

Content::Content() {
    //ctor
}

Content::~Content() {
    loaded_textures.clear();
}

map<string, Texture> Content::loaded_textures;
