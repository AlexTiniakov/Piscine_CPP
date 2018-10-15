#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "GameEntity.hpp"

class Enemy : public GameEntity {
public:
    Enemy(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape);
    Enemy(const Enemy &p);
    Enemy &operator=(const Enemy &p);
    ~Enemy();
};

#endif
