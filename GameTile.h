//
// Created by derev on 18.02.2022.
//

#ifndef MILITARY_GAMETILE_H
#define MILITARY_GAMETILE_H
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

class GameTile {
public:
    sf::Vector2f pos;
    sf::Texture texture;
    sf::Sprite sprite;
    GameTile(std::string, float, float);
    bool setUpSprite(std::string);
};


#endif //MAP_PROJECT_MILITARY_GAMETILE_H
