//
// Created by п on 14.02.2022.
//

#ifndef MILITARY_TANKS_H
#define MILITARY_TANKS_H
#include "military.h"

class tanks: public military {
public:
    tanks(int x, int y, int size, int firepower, int hp, int distance, char direction);

};


#endif //MILITARY_TANKS_H
