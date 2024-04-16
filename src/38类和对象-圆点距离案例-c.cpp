#include "../include/circle.h"

int Circle::getR() {
    return circle_r;
}
void Circle::setR(int set_R) {
    circle_r = set_R;
}

Point Circle::getCenter() {
    return m_center;
}
void Circle::setCenter(Point center) {
    m_center = center;
}