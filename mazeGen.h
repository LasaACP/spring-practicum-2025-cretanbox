#ifndef MGEN_H
#define MGEN_H
#include <list>
#include <vector>

class mazeGen{
  public:
  int x; 
  int y; 
    mazeGen();
    ~mazeGen();
    Node* generate(); 
};
#endif
