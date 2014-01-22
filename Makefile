CXX = g++
CXXFLAGS = -Wall -MMD 
EXEC = cc3k
OBJECTS = elf.o wall.o dragon.o stairs.o passage.o vampire.o potion.o merchant.o gameController.o blank.o consumable.o gold.o phoenix.o enemy.o troll.o floor.o goblin.o itemfactory.o object.o enemyfactory.o cc3k.o werewolf.o character.o grid.o dwarf.o orc.o human.o door.o hero.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
