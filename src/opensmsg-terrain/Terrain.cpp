//
// Created by Daniel Adler on 5/3/18.
//

#include "Terrain.h"


Terrain::Terrain()
{

}

Terrain::~Terrain()
{

}


void Terrain::setWall(Terrain* arg0, struct Tile* arg1, int arg2, int arg3, bool arg4)
{
//    bool var_16 = arg3;
//    int var_12 = arg2;
//    int var_8 = arg1;
//    stack[-76] = ebx;
//    stack[-80] = esi;
//    stack[-84] = edi;
//    esp = esp - 0x10;
//    asm { rep stosd  dword [edi], eax };
//    sub_100011d1(var_8, var_12, var_16, stack[-84], stack[-80], stack[-76]);
//    CMP(ebp, (esp + 0x4 - 0xc) + 0x50);
//    eax = sub_100180a0();
//    return eax;
} // @0x10001014

bool Terrain::hasConnectedPath(int,int)
{
    return false;
} // @0x10001023

void Terrain::loadNewCourseType(int)
{

} // @0x10001032

bool Terrain::render(class Tile *,float)
{
    return false;
} // @0x1000104b

int Terrain::getVariation(class Tile *)
{
    return 0;
} // @0x1000105a

bool Terrain::hasPath(class Tile *)
{
    return false;
} // @0x1000107d

Terrain::Tile *Terrain::tileAt(int, int) {
    return nullptr;
}

Terrain::Tile *Terrain::tileHit(int, int) {
    return nullptr;
}

void Terrain::resetTerrain() {

}

void Terrain::drawBezierSpline(int, int, int, int, int, int, int, int, int) {

}

void Terrain::passCollarInfo(int *const, int) {

}

void Terrain::calcAllNormals(Terrain::Tile *) {

}

void Terrain::lowerCorner(Terrain::Tile *, int) {

}

class Terrain *Terrain::getInstance() {
    return nullptr;
}

void Terrain::lowerEdgeCorner(Terrain::Tile *, int, Terrain::Tile *, float) {

}

void Terrain::localRender(Terrain::Tile *, Terrain::Tile *, float) {

}

void Terrain::drawCircle(Terrain::Tile *, float) {

}

void Terrain::drawLine(int, int, int, int, int, int, int) {

}

void Terrain::changeLighting(int) {

}

void Terrain::renderTile(int, int, int, int, int) {

}

void Terrain::closeSystem() {

}

void Terrain::setType(Terrain::Tile *, int, int) {

}

void Terrain::drawCardinalSpline(int, int, int, int, int, int, int, int, int, int, int) {

}

int Terrain::getType(Terrain::Tile *) {
    return 0;
}

void Terrain::updatePath(int, int, int) {

}

void Terrain::setZoomLevel(int) {

}

void Terrain::stripRender(Terrain::Tile *, int, float) {

}

bool Terrain::getWall(Terrain::Tile *, int) {
    return false;
}

void Terrain::layPath(Terrain::Tile *, int, int) {

}

void Terrain::initTerrain() {

}

void Terrain::initSystem(int, int, struct HDC__ *, bool) {

}

void Terrain::resize(int, int) {

}

void Terrain::calcNormals(Terrain::Tile *) {

}

void Terrain::setSplineHeight(float) {

}

void Terrain::elevateCorner(Terrain::Tile *, int) {

}

int Terrain::getElevation(Terrain::Tile *, int) {

    return 0;
}

