//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_DESTROYER_H
#define MILITARY_DESTROYER_H
#include "ships.h"

class destroyer:public ships {
private:
    std::string s = "../picture/destroyer1.png";
public:
    destroyer(int x, int y, char direction);
    std::string get_link() final;
    std:: pair<int,int> get_coordinates() final;
};


#endif //MILITARY_DESTROYER_H
