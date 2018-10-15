#ifndef BULLET_HPP
# define BULLET_HPP

# include "Drawable.hpp"

class Bullet : public Drawable {
public:
	Bullet(double xMin = 0.0, double yMin = 0.0, double width = 0.0, double height = 0.0, double speedX = 0.0, double speedY = 0.0, std::string shape = "*");
    Bullet(Bullet const& bul);
    Bullet &operator=(Bullet const& bul);
    ~Bullet();
};

#endif
