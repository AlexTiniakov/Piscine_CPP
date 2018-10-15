#include "GameEntity.hpp"

GameEntity::GameEntity(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape) : Drawable(xMin, yMin, width, height, speedX, speedY, shape) {

}

GameEntity::~GameEntity() {

}
