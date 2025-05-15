#include "mazeGen.h"


using namespace std; 

Node* mazeGen::Generate(){
 srand(0); // sets rand() seed to 0
 x = 10; //sets maze width
 y = 10; //sets maze height
 Node* nodeMatrix[x][y]; //stores nodes by their x/y values. serves kinda like a mold or a support frame, and removed when the maze is generated.
 list<Node>* pushpop = new list<Node>*[(x*y)]; //a vertex array to be used as a stack for maze generation. uninitialized upon completeion.

 Node newNode = new Node(); //create new node
 newNode->x = 0; // sets pos to (0,0), though might already be (0,0)
 newNode->y = 0;
 nodeMatrix[0][0] = newNode; //sets nodeMatrix (0,0) to node (0,0)
 pushpop.push(newNode); //puts node(0,0) at bottom of stack

 int quota = x*y; //equals how many nodes are left to generate
 int XC, YC; //coordinates for the position the algorithm will work with.
 int r = 0; //store the randomly generated number.
 // note: the is_exit flag is being used to flag if a node is a dead end, or only connects to one non-flagged node.
 // note: we're generating the maze as we're building the paths. voidpointers in nodeMatix mark an ungenerated node, and thus we generate a node there if we try to go to it. this is where we fill the mold.
 while(quota != 0){ //keeps going until all nodes have been generated.
  r = (rand()%4);
  switch(r){ //r is a randomly generated number that tells program which direction to go. This sets next position to go.
   case 0: //try to go north
    int XN = XC;
    int YN = YC-1; //Figured sense (0,0) will be top-left in display, that North points to the negative-y direction.
    break;
   case 1: //try to east
    int XN = XC+1;
    int YN = YC;
    break;
   case 2: //try to go south
    int XN = XC;
    int YN = YC+1;
    break;
   case 3; //try to go west
    int XN = XC-1;
    int YN = YC;
    break;
  }
  if( ((XN >= 0)&&(XN < x)) && ((YN >= 0)&&(YN < y)) ){ //checks if next position is in bounds.
     if(nodeMatrix[XN][YN] == nullptr){ //checks if there is an ungenerated node at next position
      nodeMatix[XN][YN] = new Node(); //creates new node.
      nodeMatix[XN][YN]->x = XN; //sets it's coordinates to (XN,YN) not to be confused with xN/yN.
      nodeMatix[XN][YN]->y = YN;
      nodeMatix[XC][YC]->paths[r] = nodeMatix[XN][YN]; //connects path between new node, and current node.
      nodeMatix[XN][YN]->paths[(r+2)%4] = nodeMatix[XC][YC];
      pushpop.push_back(nodeMatix[xN][yN]); //pushes current node to stack
      XC = XN; //tells program next node pos is now current node pos
      YC = YN;
     } else { //a node exists at next pos.
      if((pushpop.back()->x != XN)||(pushpop.back()->y != YN)){ //checks if next pos is not where the last pos was.
       if(!(nodeMatix[XN][YN]->is_exit)){ //checks if next pos doesn't have is_exit flagged.
        pushpop.push_back(nodeMatrix[XC][YC]); //pushes current node to stack
        XC = XN; //tells program next node pos is now current node pos
        YC = YN;
       } else { //next node has is_exit flagged
        for(int n = 0; n < 4; n++){
         if(nodeMatrix[XC][YC]->paths[n] == nullptr){
          break;
         }
         if(!(nodeMatrix[XC][YC]->paths[n]->is_exit)){
          continue;
         }
         if((pushpop.back()->x != nodeMatrix[XC][YC]->paths[n]->x)||(pushpop.back()->y != nodeMatrix[XC][YC]->paths[n]->y)){
          continue;
         }
         if(n == 3){
          //huhgubgjybf
         }
        }
       }
      }
     }
    }
 }
}
