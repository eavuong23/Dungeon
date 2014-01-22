#ifndef __FLOOR_H__
#define __FLOOR_H__
#include "object.h"

// A class representing an empty floor tile (not collidable and of symbol '.')
class Floor : public Object {
public:
  Floor(int row, int col);
};

#endif // __FLOOR_H__
