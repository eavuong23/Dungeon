#include "dragon.h"
#include <vector>
using namespace std;

Dragon::Dragon(int row, int col, Gold *horde)
    : Enemy(row, col, 'D', 150, 20, 20, 0, "Dragon"), horde(horde){}

// does not move - empty implementation
void Dragon::move() {}

// attacks only when the hero is near its gold horde
bool Dragon::attack() {
  vector<Object *> neighbours = grid->getNeighbours(horde);
  for (vector<Object *>::iterator i = neighbours.begin(); i != neighbours.end(); ++i) {
    if ((*i)->getType() == Object::HERO) {
      // will attack (if possible) if the hero is near the gold
      return Enemy::attack();
    }
  }
  return false;
}

void Dragon::sideEffect(Character *target) {}

void Dragon::modifyHealth(int delta) {
  // frees the gold beore being slain
  if (getHp() + delta <= 0) {
    horde->setCollidable(false);
  }
  Enemy::modifyHealth(delta);
}