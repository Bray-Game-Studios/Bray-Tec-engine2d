#include "Bray_Engine.hpp"

using namespace std;

Vector2 mario_Vector = Vector2(0, 0, 0);


void start() {
   Deb.Log("tst");
   Sprite mario = Sprite(mario_Vector, 50, 50, "/Users/home/Bray-engine/bray/templateProject/Assets/sprites/mario.bmp");


}
void update() {
  
  
   
   if (Event.OnKeyDown(Event.KeyCode.W)) {
      Deb.Log("W");
   } else if (Event.OnKeyDown(Event.KeyCode.A)) {
      Deb.Log("A");

   } 
   if (Event.OnKeyDown(Event.KeyCode.D)) {
      Deb.Log("D");
      // mario_Vector = Vector2(mario_Vector.x + 10, 0, 0);
      // mario.Transform(mario_Vector);
      
   } 
   
   
   
 
}

