#pragma once
#include <pthread.h>
#include "funcdef.hpp"
using namespace std;
// void *up(void *par) {
//     while (1) {
//         update();
//     }
// }
int main() {

    while(running) {
        update();
    }
    
    RenderSprite();
    WindowSetup(500, 500, "Bray Game");
    // pthread_t threads;
    // pthread_create(&threads, NULL, up, (void *)NULL);

    return 0;
}