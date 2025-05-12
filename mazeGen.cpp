#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(Node* s){
 Node* c = s; // what's this for? - CS
 s->x = 0; 
 s->y = 0; 
 Node* ohGodItsHideous[10][10];

 Node* thatsANewNode = new Node; 
 ohGodItsHideous[0][y + 1] = thatsANewNode;
 

  while(false){
    if (c == s){
     return s; 
    }
   else{
    if (){}
   }
  }
  return s; 
}
