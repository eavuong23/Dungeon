#include "passage.h"
#include "object.h"

Passage::Passage(int row, int col) : Object('#', false, row, col, PASSAGEWAY) {}