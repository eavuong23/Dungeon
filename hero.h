#ifndef __HERO_H__
#define __HERO_H__
#include "character.h"
#include "gold.h"
#include "potion.h"
#include <string>
#include <vector>

class Hero : public Character {
protected:
  int attackModifier, defenceModifier;
  std::vector<Potion::PotionType> learned;  // which potions learned
public:
  Hero(int row, int col, int BASE_HP, int BASE_ATK, int BASE_DEF);
  virtual ~Hero() = 0;
  virtual void sideEffect(Character *target);
  virtual void attack(Grid::Direction dir);
  virtual void move(Grid::Direction dir);
  virtual void usePotion(Grid::Direction dir);
  virtual void consume(Gold *gold);
  virtual void consume(Potion *potion);
  virtual int getAtk() const;
  virtual int getDef() const;
  void resetModifiers();
};

#endif // __HERO_H__