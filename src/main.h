#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
struct player {
    int dX;
    int dY;
    int x;
    int y;
    int width;
    int height;
};

struct wall {
    int x;
    int y;
    int width;
    int height;
};

struct zone {
    int x;
    int y;
    int width;
    int height;
};

struct state {
  struct player player;
  struct zone endZone;
};

void createWalls(void);
void clearWalls(void);

extern struct wall gameWalls[100];

#endif
