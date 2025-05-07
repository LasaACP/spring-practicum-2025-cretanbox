#ifndef LIBRARY
#define LIBRARY
struct Node{
Node* paths = Node*[4]; // [0] = north [1] = east [2] = south [3] = west
int x;
int y;
string tags;
};


// 
class lib{

// lib functions 
public:
static void getNode(int x, int y); 
static void setNode(Node set); 

static void display(Node s);

static void retagN(*Node s, string tag);
static bool untagN(*Node s, string tag);
static bool tagN(*Node s, string tag);


};
#endif
