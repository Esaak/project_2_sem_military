//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_FIGHTER_AIRCRAFT_H
#define MILITARY_FIGHTER_AIRCRAFT_H
#include "planes.h"

class fighter_aircraft:public planes {
private:
    std::string s = "../picture/fighter_aircraft1.png";
public:
    fighter_aircraft(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_FIGHTER_AIRCRAFT_H
