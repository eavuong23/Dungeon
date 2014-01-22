#ifndef __PHOENIX_H__
#define __PHOENIX_H__
#include "enemy.h"

class Phoenix : public Enemy {
  virtual void sideEffect(Character *target);
public:
  Phoenix(int row, int col);
};

#endif // __PHOENIX_H__