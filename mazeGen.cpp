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
 int r = 0; //store the randomly generated number.
 // note: the is_exit flag is being used to flag if a node is a dead end, or only connects to one non-flagged node.
 // note: we're generating the maze as we're building the paths. voidpointers in nodeMatix mark an ungenerated node, and thus we generate a node there if we try to go to it. this is where we fill the mold.
 while(quota != 0){ //keeps going until all nodes have been generated.
  if(false){ //should check if all adjacent(NESW) are not nullPtrs.
   //if no ungenerated node is adjacent, then is_exit is flagged true.
   //then, pop this node off of pushpop, and deincrement quota by 1.
  }
  switch(r){
   case 0: //try to go north
    int XN = xN;
    int YN = yN-1;
    break;
   case 1: //try to east
    int XN = xN+1;
    int YN = yN;
    break;
   case 2: //try to go south
    int XN = xN;
    int YN = yN+1;
    break;
   case 3; //try to go west
    int XN = xN-1;
    int YN = yN;
    break;
  }
  if( ((XN >= 0)&&(XN < x)) && ((YN >= 0)&&(YN < y)) ){
     if(nodeMatrix[XN][YN] == nullptr){
      nodeMatix[XN][YN] = new Node();
      nodeMatix[XN][YN]->x = xN;
      nodeMatix[XN][YN]->y = yN-1;
      nodeMatix[xN][yN]->paths[r] = nodeMatix[XN][YN];
      nodeMatix[XN][YN]->paths[(r+2)%4] = nodeMatix[xN][yN];
      pushpop.push_back(nodeMatix[xN][yN]);
      xN = XN;
      yN = YN;
     } else {
      if((pushpop.back()->x != XN)||(pushpop.back()->y != YN)){
       if(!(nodeMatix[XN][YN]->is_exit)){
        pushpop.push_back(nodeMatrix[xN][yN]);
        xN = XN;
        yN = YN;
       } else {
        r = (r+1)%4;
       }
      }
     }
    }
 }
}
