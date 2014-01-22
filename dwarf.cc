#include "dwarf.h"
#include "gold.h"
#include <iostream>
#include <string>
using namespace std;

// 100 HP, 20 ATK, 30 DEF
Dwarf::Dwarf(int row, int col) : Hero(row, col, 100, 20, 30) {}

// Dwarves earn twice the normal amount of gold
void Dwarf::modifyGold(int delta) {
  Character::modifyGold(2*delta);
}

// Overloaded function to get gold
void Dwarf::consume(Gold *gold) {
  modifyGold(gold->getValue());
  grid->buffer << "and picked up " << 2 * gold->getValue() << " gold ";
  Object *onBottom = gold->getOnBottom();
  gold->setOnBottom(0);
  delete gold;
  this->setOnBottom(onBottom);
}
