#include "wall.h"

Wall::Wall(int row, int col, int orientation) 
    : Object(orientation == VERTICAL ? '|' : '-', true, row, col, WALL) {}