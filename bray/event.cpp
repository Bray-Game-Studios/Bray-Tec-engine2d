#include "event.hpp"


// void events :: Listen() {
//         while (SDL_PollEvent(&e)){
//             if (e.type == SDL_QUIT){
//                 quit = true;
//             } else if (e.type == SDL_KEYDOWN){
//                 KeyDown();
//             } else if (e.type == SDL_KEYUP){
//                 KeyUp();
//             }
            
//         }
// }
// bool events :: OnKeyDown(SDL_Scancode Keycode_) {
//     if (keyboard_state_array[Keycode_] == 1) {
//         return true;

//     }
//     return false;
// }

// void events :: KeyDown() {
//     keyboard_state_array = SDL_GetKeyboardState(NULL);
// }
// void events :: KeyUp() {
//     keyboard_state_array = SDL_GetKeyboardState(NULL);
// }