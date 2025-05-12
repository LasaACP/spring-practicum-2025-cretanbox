#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(){
 srand(0); // sets rand() seed to 0
 x = 10; //sets maze width
 y = 10; //sets maze height
 Node* nodeMatrix[x][y]; //stores nodes by their x/y values. serves kinda like a mold or a support frame, and removed when the maze is generated.
 list<Node>* pushpop = new list<Node>*[(x*y)]; //a vertex array to be used as a stack for maze generation. uninitialized upon completeion.


 nodeMatrix[0][0] = new Node();
 //pushpop.push(nodeMatrix[0][0]);
 int quota = x*y; //equals how many nodes are left to generate
 while(quota != 0){ //keeps going until all nodes have been generated.
  
 }
}
