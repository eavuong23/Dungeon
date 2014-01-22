#ifndef __ENEMYFACTORY_H__
#define __ENEMYFACTORY_H__
#include "enemy.h"

class EnemyFactory {
  enum EnemyType {WEREWOLF = 4, VAMPIRE = 7, GOBLIN = 12, TROLL = 14, PHOENIX = 16, MERCHANT = 18};
public:    
  Enemy *createEnemy(int row, int col);
};

#endif // __ENEMYFACTORY_H__