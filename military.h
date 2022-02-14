//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_MILITARY_H
#define MILITARY_MILITARY_H
#include<iostream>
#include<cstdlib>
class military {
protected:
    int x;
    int y;
    int size;
    int firepower;
    int hp;
    int distance;

public:

    virtual ~military()=0;
    military(int x, int y,  int size, int firepower, int hp, int distance);
};


#endif //MILITARY_MILITARY_H
