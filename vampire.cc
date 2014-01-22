#include "vampire.h"

Vampire::Vampire(int row, int col) : Enemy(row, col, 'V', 50, 25, 25, 1, "Vampire") {}
void Vampire::sideEffect(Character *target) {}
