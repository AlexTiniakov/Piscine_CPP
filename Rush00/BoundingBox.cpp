#include "BoundingBox.hpp"

BoundingBox::BoundingBox(double xMin, double yMin, double width, double height, double speedX, double speedY)
    : m_xMin(xMin)
    , m_yMin(yMin)
    , m_width(width)
    , m_height(height)
    , m_speedX(speedX)
    , m_speedY(speedY) {

}

BoundingBox::~BoundingBox() {

}

BoundingBox::BoundingBox(BoundingBox const& box) {
    *this = box;
}

BoundingBox& BoundingBox::operator=(BoundingBox const& box) {
    m_xMin = box.xMin();
    m_yMin = box.yMin();
    m_width = box.width();
    m_height = box.height();
    m_speedX = box.speedX();
    m_speedY = box.speedY();
    return *this;
}

bool BoundingBox::IntersectedBy(BoundingBox const& box) const {
    return !(xMax() < box.xMin() ||
             m_xMin > box.xMax() ||
             yMax() < box.yMin() ||
             m_yMin > box.yMax());
}

double& BoundingBox::speedX() {
    return m_speedX;
}

double& BoundingBox::speedY() {
    return m_speedY;
}

double const& BoundingBox::speedX() const {
    return m_speedX;
}

double const& BoundingBox::speedY() const {
    return m_speedY;
}

void BoundingBox::Move(double dt) {
    m_xMin += m_speedX * dt;
    m_yMin += m_speedY * dt;
}

double BoundingBox::width() const {
    return m_width;
}

double BoundingBox::height() const {
    return m_height;
}
double BoundingBox::xMin() const {
    return m_xMin;
}

double BoundingBox::yMin() const {
    return m_yMin;
}

double BoundingBox::xMax() const {
    return m_xMin + m_width;
}

double BoundingBox::yMax() const {
    return m_yMin + m_height;
}

double BoundingBox::center() const {
    return m_height / 2.0;
}
