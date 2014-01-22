#ifndef __WEREWOLF_H__
#define __WEREWOLF_H__
#include "enemy.h"

class Werewolf : public Enemy {
  virtual void sideEffect(Character *target);
public:
  Werewolf(int row, int col);
};

#endif // __WEREWOLF_H__