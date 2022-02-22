//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_SHIPS_H
#define MILITARY_SHIPS_H
#include "military.h"

class ships:public military {
public:
    ships(int x,int y, int size, int firepower,int hp, int distance, char direction);
};


#endif //MILITARY_SHIPS_H
