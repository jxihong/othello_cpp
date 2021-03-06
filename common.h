#ifndef __COMMON_H__
#define __COMMON_H__

#include <vector>
#include <unordered_map>
#include <string>
#include <future>
#include <ctime>
#include <utility>
#include <iostream>
#include <algorithm>

enum Side { 
    WHITE, BLACK
};

class Move {
   
public:
    int x, y;
    Move(int x, int y) {
        this->x = x;
        this->y = y;        
    }
    ~Move() {}

    int getX() { return x; }
    int getY() { return y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
};

#endif
