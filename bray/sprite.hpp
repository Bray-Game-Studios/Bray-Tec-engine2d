#pragma once
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>

using namespace std;
class Sprite {
    public:
        float x;
        float y;
        float h;
        float w;

        const char *image;
        SDL_Surface* surface; 
    Sprite(float conX, float conY, float conH, float conW, const char *conImage) {

        x = conX;
        y = conY;

        h = conH;
        w = conW;
        
        /*Prepare texture for rendering*/
        
        SDL_Texture* texture = NULL;

        SDL_Surface* temp = NULL; 
        temp = SDL_LoadBMP(conImage);

        texture = SDL_CreateTextureFromSurface(renderer, temp);

        SDL_FreeSurface(temp); 
        /*Prepare rect to store sprite in*/
        SDL_Rect rect;
        rect.x = x; 
        rect.y = y; 
        rect.w = w; 
        rect.h = h; 

        SDL_RenderCopy(renderer, texture, NULL, &rect);
        SDL_RenderPresent(renderer);
        
    

   

        SDL_DestroyTexture(texture);

        
    }


        
};