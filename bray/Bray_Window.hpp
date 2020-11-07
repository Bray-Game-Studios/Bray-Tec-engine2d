#pragma once
#include "SDL2/SDL.h"
#include "funcdef.hpp"
#include "SDL2/SDL_image.h"
using namespace std;
int frames = 0;

SDL_Renderer* renderer;
SDL_Window *window;
bool quit = false;
void WindowSetup(int SCREEN_WIDTH, int SCREEN_HEIGHT, char title[5000]) {
    


     
    /*CREATE WINDOW*/
    SDL_Init(SDL_INIT_VIDEO);
    
    window = SDL_CreateWindow(title, 0, 0, 
    SCREEN_HEIGHT, SCREEN_WIDTH, SDL_WINDOW_HIDDEN);
    SDL_ShowWindow(window);
    //Renderer
    renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

   

    

    SDL_Event e;
    
    
    while (!quit){
        
        update();
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            if (e.type == SDL_KEYDOWN){
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                quit = true;
            }
        }
        frames++;
    }


  
    SDL_Event event;
    int running = 1;
  


}
