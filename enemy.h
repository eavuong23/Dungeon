#ifndef __ENEMY_H__
#define __ENEMY_H__
#include "character.h"
#include "grid.h"
#include "object.h"
#include <string>

class Enemy : public Character {
  // whether attacked for the turn or not
  bool attacked;
public:
  Enemy(int row, int col, char REPR, int BASE_HP, int BASE_ATK, int BASE_DEF, int gold, std::string name);
  virtual ~Enemy() = 0;
  virtual bool attack();
  virtual void move();
  virtual void modifyHealth(int delta);
  bool getAttacked() const;
  void setAttacked(bool attacked);
};

#endif // __ENEMY_H__