#ifndef __GRID_H__
#define __GRID_H__
#include "object.h"
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

const int MAX_ROWS = 25;
const int MAX_COLS = 79;
const std::string DEFAULT_FILE = "./map.txt";
class Character;
class Enemy;
class EnemyFactory;
class Gold;
class Hero;
class ItemFactory;

class Grid {
public:
  // cardinal directions
  enum Direction {NW, NO, NE, EA, SE, SO, SW, WE};
  static Grid *getInstance(std::string mapFile=DEFAULT_FILE);
  void kill(Object *obj);
  void replace(Object *src, Object *dest);
  bool move(Object *obj, Direction dir);
  bool move(Object *obj, Object *dest);
  bool isInChamber(int row, int col);
  std::vector<Object *> getNeighbours(Object *obj);
  Object *getObjectAt(Object *obj, Direction dir);
  void nextFloor();
  void setHero(Hero *hero);
  void rescanEnemies();
  void enemiesAttackOrMove();
  void enemiesAttackAll();
  void enemiesMoveAll();
  int getFloorNum() const;
  
  // Used for printing out actions
  std::string dumpBuffer();
  std::stringstream buffer;

private:
  static Grid *instance;
  Object *grid[MAX_ROWS][MAX_COLS];
  // use to check whether a given coordinate is in any chamber
  bool inChamber[MAX_ROWS][MAX_COLS];
  std::vector<std::vector<Object *> > chambers;
  // sorted vector of enemies
  std::vector<Enemy *> enemies;
  Hero *hero;
  EnemyFactory *enemyfactory;
  ItemFactory *itemfactory;
  int floorNum;
  bool gameOver;
  bool userMap;

  explicit Grid(std::string mapFile=DEFAULT_FILE);
  ~Grid();
  static void cleanup();
  void determineChambers();
  void loadMap(std::string mapFile=DEFAULT_FILE);
  void clearChambers();
  void spawn();
  void spawnHeroAndStairs(std::vector<std::vector<Object *> > &validSpaces);
  void spawnPotions(std::vector<std::vector<Object *> > &validSpaces);
  void spawnGold(std::vector<std::vector<Object *> > &validSpaces);
  void spawnEnemies(std::vector<std::vector<Object *> > &validSpaces);
  bool placeDHoard(Gold *gold, int chamberID, int tileID, std::vector<std::vector<Object *> > &validSpaces);
  friend std::ostream &operator<<(std::ostream &out, const Grid &g);
};

std::ostream &operator<<(std::ostream &out, const Grid &g);
#endif // __GRID_H__
