#ifndef MGEN_H
#define MGEN_H

class mazeGen{
  public:
  int x; 
  int y; 
    mazeGen();
    ~mazeGen();
    Node* generate(); 
};
#endif
