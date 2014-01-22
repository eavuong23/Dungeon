#ifndef __ITEMFACTORY_H__
#define __ITEMFACTORY_H__
#include "consumable.h"
#include "gold.h"
#include "potion.h"

class ItemFactory{ 
  enum {NORM = 5, SM = 7, DRG = 8};
  enum {PATK = 1, NATK = 2, PDEF = 3, NDEF = 4, PHP = 5, NHP = 6};
public:    
  Gold *createGold(int row, int col);
  Potion *createPotion(int row, int col);
};

#endif // __ITEMFACTORY_H__
