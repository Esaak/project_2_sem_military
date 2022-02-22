//
// Created by п on 14.02.2022.
//

#include "aircraft_carrier.h"
aircraft_carrier:: aircraft_carrier(int x, int y,char direction): ships(x,y, 3,2000+rand()%1000, 6000+rand()%6000, 10, direction) {}
std::string aircraft_carrier::get_link() {
    return s;
}
std::pair<int,int> aircraft_carrier::get_coordinates() {
    return coordinates;
}