//
// Created by п on 15.02.2022.
//

#include "light_tank.h"
light_tank::light_tank(int x, int y):tanks(x,y,1,1000+rand()%1000, 1000+rand()%1000,6,0){}
std::string light_tank::get_link() {
    return s;
}
std::pair<int,int> light_tank::get_coordinates() {
    return coordinates;
}