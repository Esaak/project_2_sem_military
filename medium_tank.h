//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_MEDIUM_TANK_H
#define MILITARY_MEDIUM_TANK_H
#include "tanks.h"

class medium_tank: public tanks {
private:
    std::string s = "../picture/medium_tank1.png";
public:
    medium_tank(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_MEDIUM_TANK_H
