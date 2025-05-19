#include <iostream>
#include "lib.h"
#include "mazeGen.h"
#include "mazeSolvent.h"
using namespace std;



int main() {
    std::cout<<"Bye World!"<<std::endl;
    //Mazegen maze = new mazegen();


    std::cout<<"how wide do you want your maze"<<std::endl;
    //cin >> maze->x;
    std::cout<<"how tall do you want your maze?"<<std::endl;
    //cin >> maze->y;
    
    mazeGen amazeing;
    Node* theMaze = amazeing.Generate();
    mazeDisplay(theMaze);
    
    return 0;
}


void mazeDisplay(Node* start) {
    Node* maze[10][10] = {nullptr}; //assuming maze is 10x10 update later if this gets changed.
    cout << " ";

    //building the top wall first
    for (int x = 0; x < 10; ++x) {
        cout << (x == 0 ? "  " : " _");
    }


    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 10; ++x) {
            Node* current = start;

            
            if (current->paths[3] == nullptr) {//left wall
                cout << "|";
            } else {
                cout << " ";
            }

            
            if (current->paths[2] == nullptr) { //bottom wall
                cout << "_";
            } else {
                cout << " ";
            }

            
            cout << "|" << endl; //right border
}
