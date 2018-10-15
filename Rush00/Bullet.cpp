#include "Bullet.hpp"

Bullet::Bullet(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape) : Drawable(xMin, yMin, width, height, speedX, speedY, shape) {
}

Bullet::Bullet(const Bullet &p) : Drawable() {
    *this = p;
}

Bullet &Bullet::operator=(const Bullet &p) {
    (void)p;
    return *this;
}

Bullet::~Bullet() {

}

