#include "potion.h"
#include "hero.h"
using namespace std;

Potion::Potion(int row, int col, PotionType type, int value) 
    : Consumable(row, col, 'P', true, Object::POTION, value, ""), potionType(type) {
  string newName = "";
  
  // Potion types
  switch (potionType) {
    case Potion::PATK:
      newName = "+Attack";
      break;
    case Potion::NATK:
      newName = "-Attack";
      break;
    case Potion::PDEF:
      newName = "+Defence";
      break;
    case Potion::NDEF:
      newName = "-Defence";
      break;
    case Potion::PHEALTH:
      newName = "+Health";
      break;
    case Potion::NHEALTH:
      newName = "-Health";
      break;
  }
  setName(newName);
}

void Potion::consume(Hero *hero) {
  hero->consume(this);
}

Potion::PotionType Potion::getPotionType() const {
  return potionType;
}
