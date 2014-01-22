#ifndef __WALL_H__
#define __WALL_H__
#include "object.h"

class Wall : public Object {
public:
  enum Orientation {VERTICAL = 0, HORIZONTAL};
  Wall(int row, int col, int orientation);
};

#endif // __WALL_H__
