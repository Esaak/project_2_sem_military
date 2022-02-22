//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_PLANES_H
#define MILITARY_PLANES_H
#include<iostream>
#include "military.h"
class planes: public military {
public:
    planes(int x,int y, int size, int firepower, int hp, int distance, char direction);

};


#endif //MILITARY_PLANES_H
