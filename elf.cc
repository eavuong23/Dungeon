#include "elf.h"
#include "grid.h"
#include "potion.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// 140 HP, 30 ATK, 10 DEF
Elf::Elf(int row, int col) : Hero(row, col, 140, 30, 10) {}

// consumes a potion; replaces the potion with what is under it
void Elf::consume(Potion *potion) {
  grid->buffer << getName() << " uses " << potion->getName() << ", changing +" << (int)abs((double)potion->getValue()) << " points! ";
  // makes sure potion stats have a positive effect
  int modifier = (int)abs((double)potion->getValue());
  
  // Checks type of potion and applies effects accordingly
  Potion::PotionType ptype = potion->getPotionType();
  switch (ptype) {
    case Potion::PATK:
    case Potion::NATK:
      attackModifier += modifier;
      break;
    case Potion::PDEF:
    case Potion::NDEF:
      defenceModifier += modifier;
      break;
    case Potion::PHEALTH:
    case Potion::NHEALTH:
      modifyHealth(modifier);
      break;
  }
  
  // Potion will now be known the next time player is near one
  learned.push_back(ptype);
  grid->kill(potion);
}
