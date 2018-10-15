#include "Drawable.hpp"
#include <ncurses.h>

Drawable::Drawable(double xMin, double yMin, double width, double height, double speedX, double speedY, std::string shape) : BoundingBox(xMin, yMin, width, height, speedX, speedY), m_shape(shape) {
    
}

Drawable::Drawable(Drawable const& draw) {
    *this = draw;
}

Drawable::~Drawable() {

}

Drawable &Drawable::operator=(Drawable const &draw) {
    m_shape = draw.shape();

    return *this;
}

std::string const& Drawable::shape() const {
    return m_shape;
}

void Drawable::Draw() const {
    int i = -1;
    int x = xMin();
    int y = yMin();

    while (m_shape[++i] != '\0') {
        if (m_shape[i] == '\n') {
            y++;
            x = xMin();
            i++;
        }
        mvprintw(y, x, "%c", m_shape[i]);
        x++;
    }
}
