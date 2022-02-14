//
// Created by п on 15.02.2022.
//

#include "fighter_aircraft.h"
fighter_aircraft::fighter_aircraft(int x, int y): planes(x,y,1,1400+rand()%1000, 1700+rand()%1700, 10) {}