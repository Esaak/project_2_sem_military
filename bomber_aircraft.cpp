//
// Created by п on 15.02.2022.
//

#include "bomber_aircraft.h"
bomber_aircraft::bomber_aircraft(int x, int y):planes(x,y,1,1200+rand()%1000, 1500+rand()%1500, 4) {}