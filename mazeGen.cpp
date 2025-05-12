#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(){
 srand(0); // sets rand() seed to 0
 x = 10; //sets maze width
 y = 10; //sets maze height
 Node* nodeMatrix[x][y]; //stores nodes by their x/y values. serves kinda like a mold or a support frame, and removed when the maze is generated.
 list<Node>* pushpop = new list<Node>*[(x*y)]; //a vertex array to be used as a stack for maze generation. uninitialized upon completeion.

 Node newNode = new Node();
 newNode->x = 0;
 newNode->y = 0;
 nodeMatrix[0,0] = newNode;
 pushpop.push(newNode);

 int quota = x*y; //equals how many nodes are left to generate
 int xN, yN; //coordinates for the position the algorithm will go.
 // note: the is_exit flag is being to flag if a node leads to a dead end, or only leads to nodes marked with this flag.
 // note: we're generating the maze as we're building the paths. voidpointers in nodeMatix mark an ungenerated node, and thus we generate a node there if we try to go to it. this is where we fill the mold.
 while(quota != 0){ //keeps going until all nodes have been generated.
  switch(rand() % 4){
   case 0:
    //try to go north.
    //If North is either out of bounds or North node with is_exit is true, break.
    break;
   case 1:
    break;
   case 2:
    break;
   case 3;
    break;
  }
 }
}
