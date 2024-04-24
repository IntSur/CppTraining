#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual void func() = 0;// 纯虚函数语法
    // 只要有一个纯虚函数，那这个类就是个抽象类
    // 抽象类特点:
    // 1.无法实例化对象
    // 2.抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类。
};

class Son: public Base {
public:
    void func() {
        cout << "son func in" << endl;
    }
};

int main() {
    Base base;// 无法实例化对象
    Son son;// 子类重写后能够实例化对象
    return 0;
}