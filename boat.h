//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_BOAT_H
#define MILITARY_BOAT_H
#include "ships.h"

class boat:public ships {
private:
    std::string s = "../picture/boat1.png";
public:
    boat(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_BOAT_H
