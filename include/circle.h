#pragma once//只声明一次，避免重复声明
#include <iostream>
#include "point.h"
using namespace std;

class Circle {
public:
    int getR();
    void setR(int set_R);

    Point getCenter();
    void setCenter(Point center);

private:
    Point m_center;
    int circle_r;
};