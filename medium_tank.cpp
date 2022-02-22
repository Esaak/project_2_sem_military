//
// Created by п on 15.02.2022.
//

#include "medium_tank.h"
medium_tank::medium_tank(int x, int y): tanks(x,y, 1, 1500+rand()%1500, 1500+rand()%1500, 6,0){}
std::string medium_tank::get_link() {
    return s;
}
std::pair<int,int> medium_tank::get_coordinates() {
    return coordinates;
}