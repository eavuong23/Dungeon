#ifndef __DRAGON_H__
#define __DRAGON_H__
#include "enemy.h"
#include "gold.h"

class Dragon : public Enemy {
  Gold *horde;
  void sideEffect(Character *target);
public:
  Dragon(int row, int col, Gold *horde);
  virtual void move();
  virtual bool attack();
  virtual void modifyHealth(int delta);
};

#endif // __DRAGON_H__