//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_MILITARY_H
#define MILITARY_MILITARY_H
#include<cstdlib>
#include <iostream>
class military {
protected:
    std::pair<int, int>coordinates;
    int size;
    int firepower;
    int hp;
    int distance;
    char direction;
public:

     ~military(){};
    military(int x, int y,  int size, int firepower, int hp, int distance, char direction);
    //virtual get_components()=0;
    virtual std::string get_link()=0;
    virtual std::pair<int,int> get_coordinates()=0;
};


#endif //MILITARY_MILITARY_H
