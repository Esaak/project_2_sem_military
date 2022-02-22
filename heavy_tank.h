//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_HEAVY_TANK_H
#define MILITARY_HEAVY_TANK_H
#include "tanks.h"

class heavy_tank: public tanks {
private:
    std::string s = "../picture/heavy_tank1.png";
public:
    heavy_tank(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_HEAVY_TANK_H
