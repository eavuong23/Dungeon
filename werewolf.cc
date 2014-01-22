#include "werewolf.h"

Werewolf::Werewolf(int row, int col) : Enemy(row, col, 'W', 120, 30, 5, 1, "Werewolf") {}
void Werewolf::sideEffect(Character *target) {}
