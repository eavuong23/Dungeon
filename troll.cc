#include "troll.h"

Troll::Troll(int row, int col) : Enemy(row, col, 'T', 120, 25, 15, 1, "Troll") {}
void Troll::sideEffect(Character *target) {}
