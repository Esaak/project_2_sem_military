//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_LIGHT_TANK_H
#define MILITARY_LIGHT_TANK_H
#include "tanks.h"

class light_tank:public tanks {
private:
    std::string s = "../picture/light_tank1.png";
public:
    light_tank(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_LIGHT_TANK_H
