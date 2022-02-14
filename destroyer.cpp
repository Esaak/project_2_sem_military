//
// Created by п on 14.02.2022.
//

#include "destroyer.h"
destroyer::destroyer(int x, int y):ships(x,y,2, 1500+rand()%1000, 3000+rand()%3000, 6) {}