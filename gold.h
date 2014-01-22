#ifndef __GOLD_H__
#define __GOLD_H__
#include "consumable.h"
class Hero;

class Gold : public Consumable {
public:
  enum GoldType {NORMAL=1, SMALL=2, MERCHANT=4, DRAGON=6};
  Gold(int row, int col, GoldType goldType);
  virtual void consume(Hero *hero);
  GoldType getGoldType() const;
private:
  const GoldType goldType;
};

#endif // __GOLD_H__