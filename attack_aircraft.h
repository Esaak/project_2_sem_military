//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_ATTACK_AIRCRAFT_H
#define MILITARY_ATTACK_AIRCRAFT_H
#include "planes.h"

class attack_aircraft: public planes {
private:
    //std::string s = "../picture/attack_aircraft1.png";
    std::string s = "../picture/air_carrier1.png";
public:
    attack_aircraft(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_ATTACK_AIRCRAFT_H
