//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_AIRCRAFT_CARRIER_H
#define MILITARY_AIRCRAFT_CARRIER_H
#include "ships.h"

class aircraft_carrier:public ships {
private:
    std::string s = "../picture/air_carrier1.png";
public:
    aircraft_carrier(int x, int y,char direction);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_AIRCRAFT_CARRIER_H
