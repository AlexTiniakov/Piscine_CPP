#include "Player.hpp"

Player::Player(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape) : GameEntity(0, yMin, 4, 4, 30.0, 30.0, "**\n*  *\n*   *\n*****") {
    
}

Player::~Player() {
    
}

void Player::move_up()
{
    if (_y > 0)
        _y--;
}

void Player::move_down()
{
    if (_y < 50)
    _y--;
}