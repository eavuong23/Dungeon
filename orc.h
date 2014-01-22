#ifndef __ORC_H__
#define __ORC_H__
#include "hero.h"

class Orc : public Hero {
  double dGold;
public:
  Orc(int row, int col);
  void consume(Gold *gold);
  void modifyGold(int delta, double dGold);
  void modifyGold(int delta);
};

#endif // __ORC_H__
