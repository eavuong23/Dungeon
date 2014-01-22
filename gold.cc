#include "gold.h"
#include "hero.h"

Gold::Gold(int row, int col, GoldType goldType)
    : Consumable(row, col, 'G', goldType == DRAGON, Object::GOLD, goldType, "gold"), goldType(goldType) {}

// For hero to use gold
void Gold::consume(Hero *hero) {
  hero->consume(this);
}

Gold::GoldType Gold::getGoldType() const {
  return goldType;
}
