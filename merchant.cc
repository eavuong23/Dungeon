#include "merchant.h"
#include "gold.h"

bool Merchant::hostile = false;

Merchant::Merchant(int row, int col) : Enemy(row, col, 'M', 30, 70, 5, 0, "Merchant") {}

bool Merchant::isHostile() {
  return hostile;
}

// sets the static variable to true (all Merchants will be hostile)
void Merchant::setHostile() {
  hostile = true;
}

// attacks only if hostile
bool Merchant::attack() {
  if (hostile) {
    return Enemy::attack();
  }
  return false;
}

// Was to be used with DLC
void Merchant::sideEffect(Character *target) {}

void Merchant::modifyHealth(int delta) {
  if (getHp() + delta <= 0) {
    Object *onBottom = getOnBottom();
    setOnBottom(new Gold(getRow(), getCol(), Gold::MERCHANT));
    delete onBottom;
  }
  hostile = true;
  Enemy::modifyHealth(delta);
  
}
