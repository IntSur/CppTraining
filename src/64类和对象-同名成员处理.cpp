#include <iostream>
#include <string>
using namespace std;

class BasePart {
public:
    BasePart() {
        a = 100;
    }
    void func() {
        cout << "Base func in" << endl;
    }
    void func(int number) {
        cout << number << endl;
    }

    int a;
};

class Son: public BasePart {
public:
    Son() {
        a = 200;
    }
    void func() {
        cout << "Son func in" << endl;
    }
    int a;
};

int main() {
    Son son;
    cout << son.a << endl;
    cout << son.BasePart::a << endl;//通过标定作用域以访问父类的同名函数
    son.func();
    son.BasePart::func();
    //如果子类中出现和父类同名的成员函数，子类会隐藏父类中的同名函数。
    //可以通过添加父类作用域以调用
    son.BasePart::func(100);
    
    return 0;
}