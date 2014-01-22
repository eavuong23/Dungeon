#include "orc.h"
#include "gold.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

Orc::Orc(int row, int col) : Hero(row, col, 180, 30, 25) {dGold = 0;}

// Overwritten method for when orc kills enemy
void Orc::modifyGold(int delta){
  dGold += delta / 2.0;
  if (dGold > getGold())
    Character::modifyGold(ceil(delta/2.0));
}

// Overloaded method for when orc picks up gold
void Orc::modifyGold(int delta, double dGold) {
  if (dGold > getGold())
    Character::modifyGold(ceil(delta/2.0));
}

// Orc picks up gold
void Orc::consume(Gold *gold) {
  dGold += gold->getValue() / 2.0;
    modifyGold(gold->getValue(), dGold);

  grid->buffer << "and picked up " << gold->getValue()/2.0 << " gold ";
  Object *onBottom = gold->getOnBottom();
  gold->setOnBottom(0);
  delete gold;
  this->setOnBottom(onBottom);
}
