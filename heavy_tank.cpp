//
// Created by п on 15.02.2022.
//

#include "heavy_tank.h"
heavy_tank::heavy_tank(int x, int y): tanks(x,y,1,2000+rand()%2000, 2000+rand()%2000, 6) {}