class Solve{
//EVIL MAZE SOLVER USING JEROO LIKE PATH FINDING.
bool SolveMaze(Node target){
Node* win = target;
  bool deadend = false;
  int direction = 0;
  int right = 1;
  // direction is which cardinal its pointing and how it wants to go forward 
  // right is the direction to the right of where its pointing
while(!win->is_exit){ // keep going till your ontop of the exit;
while(win->paths[right] == nullptr && win->paths[direction] != nullptr){ //checking if you can turn to the right and move forward;
win = wins->paths[direction];
}
win = wins->paths[right]; // turning to the right 
direction = right;

if(direction == 3){
  right = 0;     // techbichanly i could use a temp int but i think if statements take less memmory and looks better to me. 
}
else{
right++;
  }
// when a wall is reached it turns enough times to keep moving. 
 while(win->paths[direction] == nullptr){
   // keep turning till you can keep rolling rolling rolling.
 right = direction; 
direction--;
   if (direction < 0){ // skip to north from west because yeah
     direction = 3;
    
   }
  }
  
}
return true;
}
}
