//
// Created by п on 14.02.2022.
//

#include "boat.h"
boat:: boat(int x, int y): ships(x,y, 1,1000+rand()%1000, 1000+rand()%1000, 4,0){}
std::string boat::get_link() {
    return s;
}
std::pair<int,int> boat::get_coordinates() {
    return coordinates;
}