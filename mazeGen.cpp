#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(){
 //Node* c = s;
 //s->x = 0;
 //s->y = 0;
 x = 10;
 y = 10;
 Node* ohGodItsHideous[x][y];

 for(int X = 0; X < x; X++){
  for(int Y = 0; Y < y; Y++) {
   Node* thatsANewNode = new Node;
   thatsANewNode->x = X;
   thatsANewNode->y = Y;
   ohGodItsHideous[X][Y] = thatsANewNode;
  }
 }

 while()
}
