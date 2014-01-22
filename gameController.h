#ifndef __GAMECONTROLLER_H__
#define __GAMECONTROLLER_H__
#include "grid.h"
#include <string>
class Hero;

class GameController {
  Grid *grid;
  Hero *hero;
  bool gameStarted;
  std::string race;
public:
  // Types of heroes that can be chosen by player
  enum HeroType {HUMAN, ORC, ELF, DWARF};
  
  // Initializes game controller with optional parameter
  GameController(std::string mapFile=DEFAULT_FILE);
  void startGame(HeroType herotype);
  void outputMap();
  bool mainProg();
  void execute();
  Grid::Direction parseDirection(std::string dir);
  bool checkWin();
  bool checkLose();
};

#endif // __GAMECONTROLLER_H__
