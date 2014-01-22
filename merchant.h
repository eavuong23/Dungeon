#ifndef __MERCHANT_H__
#define __MERCHANT_H__
#include "enemy.h"

class Merchant : public Enemy {
  static bool hostile;
  void sideEffect(Character *target);
public:
  Merchant(int row, int col);
  bool isHostile();
  void setHostile();
  virtual bool attack();
  virtual void modifyHealth(int delta);
};

#endif // __MERCHANT_H__