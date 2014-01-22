#ifndef __PASSAGE_H__
#define __PASSAGE_H__
#include "object.h"

// A class representing a passage (not collidable and of symbol '#')
class Passage : public Object {
public:
  Passage(int row, int col);
};

#endif // __PASSAGE_H__
