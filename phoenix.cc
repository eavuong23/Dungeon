#include "phoenix.h"

Phoenix::Phoenix(int row, int col) : Enemy(row, col, 'X', 50, 35, 20, 1, "Phoenix") {}
void Phoenix::sideEffect(Character *target) {}
