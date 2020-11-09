#pragma once
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "time.hpp"
#include "funcdef.hpp"
#include "Bray_Engine.hpp"
using namespace std;


class keyCode {
        public:
            SDL_Scancode A = SDL_SCANCODE_A;
            SDL_Scancode B = SDL_SCANCODE_B;
            SDL_Scancode C = SDL_SCANCODE_C;
            SDL_Scancode D = SDL_SCANCODE_D;
            SDL_Scancode E = SDL_SCANCODE_E;
            SDL_Scancode F = SDL_SCANCODE_F;
            SDL_Scancode G = SDL_SCANCODE_G;
            SDL_Scancode H = SDL_SCANCODE_H;
            SDL_Scancode I = SDL_SCANCODE_I;
            SDL_Scancode J = SDL_SCANCODE_J;
            SDL_Scancode K = SDL_SCANCODE_K;
            SDL_Scancode L = SDL_SCANCODE_L;
            SDL_Scancode M = SDL_SCANCODE_M;
            SDL_Scancode N = SDL_SCANCODE_N;
            SDL_Scancode O = SDL_SCANCODE_O;
            SDL_Scancode P = SDL_SCANCODE_P;
            SDL_Scancode Q = SDL_SCANCODE_Q;
            SDL_Scancode R = SDL_SCANCODE_R;
            SDL_Scancode S = SDL_SCANCODE_S;
            SDL_Scancode T = SDL_SCANCODE_T;
            SDL_Scancode U = SDL_SCANCODE_U;
            SDL_Scancode V = SDL_SCANCODE_V;
            SDL_Scancode W = SDL_SCANCODE_W;
            SDL_Scancode X = SDL_SCANCODE_X;
            SDL_Scancode Y = SDL_SCANCODE_Y;
            SDL_Scancode Z = SDL_SCANCODE_Z;
};
class events {

        
   
   private:
        void KeyDown() {
            keyboard_state_array = SDL_GetKeyboardState(NULL);
        }
        void KeyUp() {
            keyboard_state_array = SDL_GetKeyboardState(NULL);
        }   
     
    public:
 
        const Uint8* keyboard_state_array = SDL_GetKeyboardState(NULL);
        keyCode KeyCode;
  
        bool SDLK_s;
void Listen() {
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            } else if (e.type == SDL_KEYDOWN){
                KeyDown();
            } else if (e.type == SDL_KEYUP){
                KeyUp();
            }
            
        }
}
    bool OnKeyDown(SDL_Scancode Keycode_) {
        if (keyboard_state_array[Keycode_] == 1) {
            return true;

        }
        return false;
    }




    events() {
        keyboard_state_array = SDL_GetKeyboardState(NULL);
        Listen();
    }
            
        

    
};