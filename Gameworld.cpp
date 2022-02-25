//
// Created by derev on 18.02.2022.
//

#include "Gameworld.h"

void Gameworld::set(int x, int y, std::string fileName) {
    this->x = x * 128;
    this->y = y * 128;
    this->fileName = fileName;

    //std::cout << this->x;
}

void Gameworld::setUpInitialStateinsert() {
    //exitPos = sf::Vector2i(1, 0);
    //playerPos = sf::Vector2i(gridLength - 1, gridLength - 1);
    //std::cout << this->fileName;
    setUpTilesinsert(this->x, this->y, this->fileName);
}

void Gameworld::setUpInitialStatebasic() {
    //exitPos = sf::Vector2i(1, 0);
    //playerPos = sf::Vector2i(gridLength - 1, gridLength - 1);
    //std::cout << this->fileName;
    setUpTilesbasic();
}


void Gameworld::setUpTilesbasic() {
    tiles.clear();
    std::vector<GameTile *> firstRow;
    firstRow.push_back(new GameTile("../picture/grass.png", 0, 0));
    firstRow.push_back(new GameTile("../picture/water.png", 128, 0));
    firstRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 0));
    firstRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 0));
    firstRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 0));
    firstRow.push_back(new GameTile("../picture/water.png", 128 * 5, 0));
    firstRow.push_back(new GameTile("../picture/grass.png", 128 * 6, 0));
    firstRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 0));
    tiles.push_back(firstRow);

    std::vector<GameTile *> secondRow;
    secondRow.push_back(new GameTile("../picture/grass.png", 0, 128));
    secondRow.push_back(new GameTile("../picture/water.png", 128, 128));
    secondRow.push_back(new GameTile("../picture/water.png", 128 * 2, 128));
    secondRow.push_back(new GameTile("../picture/water.png", 128 * 3, 128));
    secondRow.push_back(new GameTile("../picture/water.png", 128 * 4, 128));
    secondRow.push_back(new GameTile("../picture/water.png", 128 * 5, 128));
    secondRow.push_back(new GameTile("../picture/grass.png", 128 * 6, 128));
    secondRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 128));
    tiles.push_back(secondRow);

    std::vector<GameTile *> thirdRow;
    thirdRow.push_back(new GameTile("../picture/grass.png", 0, 256));
    thirdRow.push_back(new GameTile("../picture/grass.png", 128, 256));
    thirdRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 256));
    thirdRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 256));
    thirdRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 256));
    thirdRow.push_back(new GameTile("../picture/water.png", 128 * 5, 256));
    thirdRow.push_back(new GameTile("../picture/water.png", 128 * 6, 256));
    thirdRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 256));
    tiles.push_back(thirdRow);

    std::vector<GameTile *> fourthRow;
    fourthRow.push_back(new GameTile("../picture/grass.png", 0, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/grass.png", 128, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/water.png", 128 * 5, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/water.png", 128 * 6, 128 * 3));
    fourthRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 128 * 3));
    tiles.push_back(fourthRow);

    std::vector<GameTile *> fifthRow;
    fifthRow.push_back(new GameTile("../picture/grass.png", 0, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/grass.png", 128, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/water.png", 128 * 5, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/water.png", 128 * 6, 128 * 4));
    fifthRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 128 * 4));
    tiles.push_back(fifthRow);

    std::vector<GameTile *> sixthRow;
    sixthRow.push_back(new GameTile("../picture/grass.png", 0, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/grass.png", 128, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/water.png", 128 * 5, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/water.png", 128 * 6, 128 * 5));
    sixthRow.push_back(new GameTile("../picture/water.png", 128 * 7, 128 * 5));
    tiles.push_back(sixthRow);

    std::vector<GameTile *> seventhRow;
    seventhRow.push_back(new GameTile("../picture/grass.png", 0, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 5, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 6, 128 * 6));
    seventhRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 128 * 6));
    tiles.push_back(seventhRow);

    std::vector<GameTile *> eighthRow;
    eighthRow.push_back(new GameTile("../picture/grass.png", 0, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 2, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 3, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 4, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 5, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 6, 128 * 7));
    eighthRow.push_back(new GameTile("../picture/grass.png", 128 * 7, 128 * 7));
    tiles.push_back(eighthRow);
}


void Gameworld::setUpTilesinsert(int x, int y, std::string str) {
    tiles.clear();
    std::vector<GameTile *> firstRow;
    firstRow.push_back(new GameTile(str, x, y));
    tiles.push_back(firstRow);
    //std::cout << this->x;
}
