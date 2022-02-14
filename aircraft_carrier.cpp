//
// Created by п on 14.02.2022.
//

#include "aircraft_carrier.h"
aircraft_carrier::aircraft_carrier(int x, int y): ships(x,y, 3,2000+rand()%1000, 6000+rand()%6000, 10) {}