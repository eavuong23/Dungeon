#include "stairs.h"
#include "floor.h"

Stairs::Stairs(int row, int col) : Object('\\', false, row, col, STAIRS, new Floor(row, col)) {}