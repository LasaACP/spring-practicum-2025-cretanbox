#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(){
 x = 10;
 y = 10;
 Node* nodeMatrix[x][y];
 list<Node>* pushpop = new list<Node>*[(x*y)];

 for(int X = 0; X < x; X++){
  for(int Y = 0; Y < y; Y++) {
   Node* newNode = new Node;
   newNode->x = X;
   newNode->y = Y;
   nodeMatrix[X][Y] = newNode;
  }
 }

 while()
}
