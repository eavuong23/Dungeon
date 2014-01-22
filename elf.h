#ifndef __ELF_H__
#define __ELF_H__
#include "hero.h"

class Elf : public Hero {
public:
  Elf(int row, int col);
  void consume(Potion *potion);
};

#endif // __ELF_H__
