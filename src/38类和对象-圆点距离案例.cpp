#include <iostream>
#include <math.h>
using namespace std;
#include "../include/point.h"
#include "../include/circle.h"

void isInCircle(Circle &circle, Point &point) {
    int distance = 0;
    int circle_rr = 0;

    distance = pow((circle.getCenter().getX() - point.getX()), 2);
    cout << "distance = " << distance << endl;

    circle_rr = pow(circle.getR(), 2);
    cout << "circle_rr = " << circle_rr << endl;

    if (distance == circle_rr)
    {
        cout << "点在圆上" << endl;
    } else if (distance >= circle_rr) {
        cout << "点在圆外" << endl;
    } else {
        cout << "点在圆内" << endl;
    }
    
}

int main() {
    //创建圆
    Circle circle;
    Point circle_center;

    circle.setR(10);
    circle_center.setX(10);
    circle_center.setY(0);
    circle.setCenter(circle_center);

    //创建点
    Point point;
    point.setX(100);
    point.setY(0);

    //判断距离
    isInCircle(circle, point);
    return 0;
}