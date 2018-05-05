
#ifndef Game_hpp
#define Game_hpp

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <iostream>

class Game {
public:
    Game();
    ~Game();
    
    void init(const char* title, int width, int height, bool fullscreen);
    
    void handleEvents();
    void update();
    void render();
    void clean();
    
    bool running(){ return isRunning; }
    
private:
    int counter = 0;
    int size = 64;
    bool isRunning = false;
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif /* Game_hpp */
