#ifndef __DWARF_H__
#define __DWARF_H__
#include "hero.h"

class Dwarf : public Hero {
public:
  Dwarf(int row, int col);
  void consume(Gold *gold);
  void modifyGold(int delta);
};

#endif // __DWARF_H__
