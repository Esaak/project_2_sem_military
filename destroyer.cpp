//
// Created by п on 14.02.2022.
//

#include "destroyer.h"
destroyer::destroyer(int x, int y, char direction):ships(x,y,2, 1500+rand()%1000, 3000+rand()%3000, 6, direction) {}
std::string destroyer::get_link() {
    return s;
}
std::pair<int,int> destroyer::get_coordinates() {
    return coordinates;
}