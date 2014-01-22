#ifndef __TROLL_H__
#define __TROLL_H__
#include "enemy.h"

class Troll : public Enemy {
  virtual void sideEffect(Character *target);
public:
  Troll(int row, int col);
};

#endif // __TROLL_H__