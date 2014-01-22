#include "grid.h"
#include "gameController.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Sets seed so game is random
  srand(static_cast<unsigned int>(time(NULL)));
  GameController *gcr = new GameController;
  gcr->execute();
  delete gcr;
}  // end main
