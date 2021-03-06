//
//  Game.cpp
//  2D_GameEngine
//
//  Created by Daniel Adler on 4/30/18.
//  Copyright © 2018 Daniel Adler. All rights reserved.
//

#include "Game.h"
#include "TextureManager.h"

SDL_Texture* playerTex;
SDL_Rect srcR, destR;

Game::Game()
{
    
}

Game::~Game()
{
    
}

void Game::init(const char *title, int width, int height, bool fullscreen)
{
    int flags = 0;
    
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }
        
        isRunning = true;
    }

    playerTex = TextureManager::LoadTexture("resources/player.png", renderer);
}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        default:
            break;
    }
}

void Game::update()
{
    counter++;

    destR.h = size;
    destR.w = size;
    destR.x = counter;
}

void Game::render()
{
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, playerTex, nullptr, &destR);
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
