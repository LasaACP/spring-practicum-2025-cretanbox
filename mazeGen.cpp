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
 nodeMatrix[0][0] = newNode;
 pushpop.push(newNode);

 int quota = x*y; //equals how many nodes are left to generate
 int xN, yN; //coordinates for the position the algorithm will go.
 // note: the is_exit flag is being used to flag if a node is a dead end, or only connects to one non-flagged node.
 // note: we're generating the maze as we're building the paths. voidpointers in nodeMatix mark an ungenerated node, and thus we generate a node there if we try to go to it. this is where we fill the mold.
 while(quota != 0){ //keeps going until all nodes have been generated.
  if(false){ //should check if all adjacent(NESW) are not nullPtrs.
   //if no ungenerated node is adjacent, then is_exit is flagged true.
   //then, pop this node off of pushpop, and deincrement quota by 1.
  }
  switch(rand() % 4){
   case 0: //using yN-1 to point North
    if(yN-1 >= 0){
     if(nodeMatrix[xN][yN-1] == nullptr){
      nodeMatix[xN][yN-1] = new Node();
      nodeMatix[xN][yN-1]->x = xN;
      nodeMatix[xN][yN-1]->y = yN-1;
      nodeMatix[xN][yN];
     }
    }
    break;
   case 1:
    //try to go east.
    //If East is either out of bounds or East node with is_exit is true, break.
    break;
   case 2:
    //try to go south.
    //If South is either out of bounds or South node with is_exit is true, break.
    break;
   case 3;
    //you get the deal. same thing but with west.
    break;
  }
 }
}
