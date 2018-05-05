//
// Created by Daniel Adler on 4/7/18.
//

#ifndef OPENSG_TERRAIN_H
#define OPENSG_TERRAIN_H


#include <jmorecfg.h>
#include "Tile.h"

class Terrain {

    Tile tileAt(int, int);
    int getElevation(Tile, int);
    boolean getWall(Tile, int);
    int getType(Tile);
};


#endif //OPENSG_TERRAIN_H
