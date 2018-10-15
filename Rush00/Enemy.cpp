#include "Enemy.hpp"

Enemy::Enemy(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape) : GameEntity(xMin, yMin, width, height, speedX, speedY, shape) {

}

Enemy::Enemy(const Enemy &p) : GameEntity() {
    *this = p;
}

Enemy &Enemy::operator=(const Enemy &p) {
    (void)p;
    return *this;
}

Enemy::~Enemy() {

}
