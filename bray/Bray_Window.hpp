#pragma once
#include "SDL2/SDL.h"
using namespace std;
#include "funcdef.hpp"

SDL_Renderer* renderer;
SDL_Window *window;

void WindowSetup(int SCREEN_WIDTH, int SCREEN_HEIGHT, char title[5000]) {
    start();
    /*CREATE WINDOW*/
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(title, 0, 0, 
    SCREEN_HEIGHT, SCREEN_WIDTH, SDL_WINDOW_HIDDEN);
    SDL_ShowWindow(window);
    //Renderer
    renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_RenderClear(renderer); // fill the scene with white

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // the rect color (solid red)




    SDL_Delay(3000);
    SDL_Event event;
    int running = 1;
  
    SDL_DestroyWindow(window);
    SDL_Quit();

}
