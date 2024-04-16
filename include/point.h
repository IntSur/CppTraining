#pragma once//只声明一次，避免重复声明
#include <iostream>
using namespace std;

class Point {
public:
    int getX();
    void setX(int set_x);

    int getY();
    void setY(int set_Y);

private:
    int x;
    int y;
}; 