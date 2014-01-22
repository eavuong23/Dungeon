#ifndef __VAMPIRE_H__
#define __VAMPIRE_H__
#include "enemy.h"

class Vampire : public Enemy {
  virtual void sideEffect(Character *target);
public:
  Vampire(int row, int col);
};

#endif // __VAMPIRE_H__