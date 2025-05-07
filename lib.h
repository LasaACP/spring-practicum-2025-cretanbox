struct Node{
Node* paths = Node*[4]; // [0] = north [1] = east [2] = south [3] = west
int x;
int y;
bool if_Found;
}


// 
class lib{

// lib functions 
public:
static void getNode(int x, int y); 
static void setNode(Node set); 

static void display(Node s);


}
