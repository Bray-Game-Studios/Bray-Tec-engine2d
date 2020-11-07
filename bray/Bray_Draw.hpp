#pragma once
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "Bray_Window.hpp"
#include <iostream>
using namespace std;

/*Render simple 2D sprites*/

class Draw {

    public:
        void Sprite() {

            SDL_Rect rect;
            rect.h = 50;
            rect.w = 50;
            rect.x = 0;
            rect.y = 0;
            SDL_RenderFillRect(renderer, &rect);
            SDL_RenderPresent(renderer); 
        }
};