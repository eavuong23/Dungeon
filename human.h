#ifndef __HUMAN_H__
#define __HUMAN_H__
#include "hero.h"

class Human : public Hero {
public:
  Human(int row, int col);
};

#endif // __HUMAN_H__