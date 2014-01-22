#ifndef __OBJECT_H__
#define __OBJECT_H__
#include <iostream>

class Object {
public:
  enum Type {FLOOR=0, BLANK, PASSAGEWAY, DOOR, WALL, STAIRS, HERO, ENEMY, POTION, GOLD};
  Object(char repr, bool collidable, int row, int col, Type type, Object *onBottom=0);
  virtual ~Object() = 0;
  bool isCollidable() const;
  void setCollidable(bool newState);
  Type getType() const;
  int getRow() const;
  void setRow(int newRow);
  int getCol() const;
  void setCol(int newCol);
  Object *getOnBottom() const;
  void setOnBottom(Object *newOnBottom);
private:
  const char REPR;
  bool collidable;
  int row, col;
  const Type type;
  // the object that this is "floating" on top of
  Object *onBottom;
  friend std::ostream &operator<<(std::ostream &out, const Object &object);
};

std::ostream &operator<<(std::ostream &out, const Object &object);

#endif // __OBJECT_H__