//
// Created by Daniel Adler on 4/30/18.
//

#ifndef OPENSMSG_TEXTUREMANAGER_H
#define OPENSMSG_TEXTUREMANAGER_H

#include "Game.h"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* filename, SDL_Renderer* renderer);
};


#endif //OPENSMSG_TEXTUREMANAGER_H
