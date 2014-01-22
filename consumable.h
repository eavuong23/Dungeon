#ifndef __CONSUMABLE_H__
#define __CONSUMABLE_H__
#include "object.h"
#include <string>
class Hero;

// Call that will be inherited by potion and gold
class Consumable : public Object {
public:
  Consumable(int row, int col, char REPR, bool collidable, Object::Type type, int value, std::string name);
  virtual ~Consumable() = 0;
  
  // For hero to get and use/take potion/gold
  virtual void consume(Hero *hero) = 0;
  int getValue();
  std::string getName() const;
protected:
  std::string name;
  void setName(std::string newName);
private:
  int value;
};

#endif // __CONSUMABLE_H__
