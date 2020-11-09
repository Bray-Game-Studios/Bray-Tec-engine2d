#pragma once
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include <iostream>

using namespace std;
class Sprite {
    public:
        Vector2 vector = Vector2(0, 0, 0);
        float h;
        float w;
        const char *image;
        SDL_Surface* surface; 
        void Transform(Vector2 TransformVector) {
            vector = Vector2(TransformVector.x, TransformVector.y, TransformVector.rotation);
        }
    Sprite(Vector2 conTransform, float conH, float conW, const char *conImage) {
         vector = Vector2(conTransform.x, conTransform.y, conTransform.rotation);
        
        
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
        rect.x = vector.x; 
        rect.y = vector.y; 
        rect.w = w; 
        rect.h = h; 

        SDL_RenderCopy(renderer, texture, NULL, &rect);
        SDL_RenderPresent(renderer);
        
    

   

        SDL_DestroyTexture(texture);

        
    }


        
};