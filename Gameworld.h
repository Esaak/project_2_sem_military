//
// Created by derev on 18.02.2022.
//

#ifndef MILITARY_GAMEWORLD_H
#define MILITARY_GAMEWORLD_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>
#include <vector>
#include "GameTile.h"
#include <iostream>

class Gameworld {
private:
    int x = -1, y = -1;
    std::string fileName;

    void setUpTilesinsert(int x, int y, std::string fileName);

    void setUpTilesbasic();

    sf::Vector2i exitPos;
    sf::Vector2i playerPos;

public:
    std::vector<std::vector<GameTile *> > tiles;
    int gridLength;

    void setUpInitialStatebasic();

    void setUpInitialStateinsert();

    void set(int x, int y, std::string fileName);
};



#endif //MAP_PROJECT_MILITARY_GAMEWORLD_H
