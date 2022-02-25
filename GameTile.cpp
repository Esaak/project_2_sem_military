//
// Created by derev on 18.02.2022.
//

#include "GameTile.h"

GameTile::GameTile(std::string textureName, float x, float y) {
    if (!setUpSprite(textureName)) {
        return;
    }
    pos = sf::Vector2f(x, y);
    sprite.setPosition(pos);

}

bool GameTile::setUpSprite(std::string textureName) {
    if (!texture.loadFromFile(textureName)) {
        return false;
    }
    sprite.setTexture((texture));
    sprite.setTextureRect(sf::IntRect(0, 0, 128, 128));
    return true;
}

