//
// Created by п on 15.02.2022.
//

#ifndef MILITARY_BOMBER_AIRCRAFT_H
#define MILITARY_BOMBER_AIRCRAFT_H
#include "planes.h"

class bomber_aircraft: public planes {
private:
    std::string s ="../picture/bomber_aircraft1.png";
public:
    bomber_aircraft(int x, int y);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_BOMBER_AIRCRAFT_H
