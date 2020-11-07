#include <iostream>

using namespace std;


class Vector2 {
    public:
        int x = 0;
        int y = 0;

        int rotation = 0;
        Vector2(int conX, int conY, int conRotation) {
            x = conX;
            y = conY;
            rotation = conRotation;
        }
    
};