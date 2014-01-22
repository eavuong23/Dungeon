#include "goblin.h"

Goblin::Goblin(int row, int col) : Enemy(row, col, 'N', 70, 5, 10, 1, "Goblin") {}
void Goblin::sideEffect(Character *target) {}
