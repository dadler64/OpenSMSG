//
// Created by Daniel Adler on 5/3/18.
//

#ifndef OPENSMSG_TERRAIN_H
#define OPENSMSG_TERRAIN_H


class Terrain {
public:
    Terrain();
    ~Terrain();
    void setWall(Terrain *, struct Tile *, int, int, bool); // 0x10001014
    bool hasConnectedPath(int, int); // 0x10001023
    void loadNewCourseType(int); // 0x10001032
    bool render(class Tile *, float); // 0x1000104b
    int getVariation(class Tile *); // 0x1000105a
    bool hasPath(class Tile *); // 0x1000107d
    class Tile *tileAt(int, int); // 0x1000108c
    class Tile *tileHit(int, int); // 0x1000109b
    void resetTerrain(); // 0x1000109b
    void drawBezierSpline(int, int, int, int, int, int, int, int, int);
    void passCollarInfo(int * const, int);
    void calcAllNormals(class Tile *);
    void lowerCorner(class Tile *, int);

    static class Terrain *getInstance();

    void lowerEdgeCorner(class Tile *, int, class Tile *, float);
    void localRender(class Tile *, class Tile *, float);
    void drawCircle(class Tile *, float);
    void drawLine(int, int, int, int, int, int, int);
    void changeLighting(int);
    void renderTile(int, int, int, int, int);
    void closeSystem();
    void setType(class Tile *,int,int);
    void drawCardinalSpline(int, int, int, int, int, int, int, int, int, int, int);
    int getType(class Tile *);
    void updatePath(int, int, int);
    void setZoomLevel(int);
    void stripRender(class Tile *, int, float);
    bool getWall(class Tile *, int);
    void layPath(class Tile *,int,int);
    void initTerrain();
    void initSystem(int, int, struct HDC__ *, bool);
    void resize(int, int);
    void calcNormals(class Tile *);
    void setSplineHeight(float);
    void elevateCorner(class Tile *, int);
    int getElevation(class Tile *,int);
private:
};


#endif //OPENSMSG_TERRAIN_H
