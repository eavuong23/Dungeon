#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include "object.h"
#include "grid.h"
#include "floor.h"
#include <string>

class Character : public Object {
public:
  Character(int row, int col, char REPR, Object::Type type, int BASE_HP, 
            int BASE_ATK, int BASE_DEF, int gold, std::string name);
  virtual ~Character() = 0;
  virtual int getHp() const;
  virtual int getAtk() const;
  virtual int getDef() const;
  virtual int getGold() const;
  virtual std::string getName() const;
  virtual void modifyHealth(int delta);
  virtual void modifyGold(int delta);
protected:
  Grid *grid;
  virtual void attack(Character *target);
private:
  const int BASE_HP, BASE_ATK, BASE_DEF;
  int hp, atk, def, gold;
  const std::string name;
  // For DLC (special abilities)
  virtual void sideEffect(Character *target) = 0;
};

#endif // __CHARACTER_H__