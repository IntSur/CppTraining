#include <iostream>
#include <string>
using namespace std;

class Group {
public: 
    int a;
    int b;

    //1.通过类内函数实现
    Group operator+(Group &group) {
        Group tmp;
        tmp.a = group.a + this->a;
        tmp.b = group.b + this->b;
        return tmp;
    }
    //运算符重载可以和函数重载结合使用
    Group operator+(int &number) {
        Group tmp;
        tmp.a = this->a + number;
        tmp.b = this->b + number;
        return tmp;
    }
};

//2.通过全局函数实现
// Group operator+(Group &group1, Group &group2) {
//     Group tmp;
//     tmp.a = group1.a + group2.a;
//     tmp.b = group1.b + group2.b;
//     return tmp;
// }

int main() {
    Group group1;
    group1.a = 10;
    group1.b = 10;
    Group group2;
    group2.a = 10;
    group2.b = 10;

    int number = 100;

    //1.通过类内函数实现的本质
    // cout << group1.operator+(group2).a << endl;
    // cout << group1.operator+(group2).b << endl;

    //2.通过全局函数实现的本质
    // cout << operator+(group1, group2) << endl;
    // cout << operator+(group1, group2) << endl;

    Group group3 = group1 + group2;

    //运算符重载可以和函数重载结合使用
    Group group4 = group1 + number;

    cout << group3.a << endl;
    cout << group3.b << endl;

    cout << group4.a << endl;
    cout << group4.b << endl;

    return 0;
}