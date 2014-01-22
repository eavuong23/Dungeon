#ifndef __GOBLIN_H__
#define __GOBLIN_H__
#include "enemy.h"

class Goblin : public Enemy {
  virtual void sideEffect(Character *target);
public:
  Goblin(int row, int col);
};

#endif // __GOBLIN_H__