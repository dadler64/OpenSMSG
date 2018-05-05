//
// Created by Daniel Adler on 4/7/18.
//

#include "Terrain.h"
#include "Tile.h"


Tile Terrain::tileAt(int, int) {
    return nullptr;
}

int Terrain::getElevation(Tile, int) {
    return 0;
}

boolean Terrain::getWall(Tile, int) {
    return (Tile.xPos == World.Width || Tile.xPos);
}

int Terrain::getType(Tile) {
    return 0;
}
