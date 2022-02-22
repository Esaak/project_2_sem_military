//
// Created by п on 15.02.2022.
//

#include "attack_aircraft.h"
attack_aircraft::attack_aircraft(int x, int y): planes(x,y,1,1000+rand()%1000, 1200+rand()%1000, 8, 0){}
std::string attack_aircraft::get_link() {
    return s;
}
std::pair<int,int> attack_aircraft::get_coordinates() {
    return coordinates;
}