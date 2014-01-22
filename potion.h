#ifndef __POTION_H__
#define __POTION_H__
#include "consumable.h"
#include <string>
class Hero;

class Potion : public Consumable {
public:
  enum PotionType {PATK, NATK, PDEF, NDEF, PHEALTH, NHEALTH};
  Potion(int row, int col, PotionType type, int value);
  PotionType getPotionType() const;
  virtual void consume(Hero *hero);
private:
  const PotionType potionType;
};

#endif // __POTION_H__