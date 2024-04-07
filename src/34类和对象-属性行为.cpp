#include <iostream>
#include <cmath>
using namespace std;

class Circle {
//访问权限
public:
    //属性
    int r;

    //行为
    double perimeter() {
        return 2 * M_PI * r;
    }
};


class Student {
public:
    string s_name;
    int s_number;

    void setName(string name) {
        s_name = name;
    }

    void setNumber(int number) {
        s_number = number;
    }
};

int main() {
    Circle circle1;
    circle1.r = 10;
    cout << circle1.r << " " << circle1.perimeter() << endl;

    Student student1;
    student1.s_name = "none";
    student1.s_number = 0;
    cout << student1.s_name << " " << student1.s_number << endl;

    student1.setName("fanjiahui");
    student1.setNumber(36);

    cout << student1.s_name << " " << student1.s_number << endl;

    return 0;
}