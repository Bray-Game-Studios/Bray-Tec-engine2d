#pragma once
#include "SDL2/SDL.h"
#include "funcdef.hpp"
#include "SDL2/SDL_image.h"
#include "time.hpp"
using namespace std;
int frames = 0;
SDL_Event e;
SDL_Renderer* renderer;
SDL_Window *window;
bool quit = false;
void WindowSetup(int SCREEN_WIDTH, int SCREEN_HEIGHT, char title[5000]) {
    


     
    /*CREATE WINDOW*/
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow(title, 0, 0, 
    SCREEN_HEIGHT, SCREEN_WIDTH, SDL_WINDOW_HIDDEN);
    SDL_ShowWindow(window);
    //Renderer
    renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

   
    
    

    
    
    /*Calculate deltatime*/
    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
 
    while (!quit){
        if (frames == 0) {
            start();
        }
        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();

        _Time.deltaTime = (double)((NOW - LAST)*1000 / (double)SDL_GetPerformanceFrequency() );        
        update();
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            
        }
        frames++;
    }


  
    SDL_Event event;
    int running = 1;
  


}
