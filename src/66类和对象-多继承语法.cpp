#include <iostream>
#include <string>
using namespace std;

class Base1 {
public:
    Base1() {
        b = 100;
    }

    static int a;
    int b;
};
int Base1::a = 100;

class Base2 {
public:
    Base2() {
        c = 100;
    }

    static int a;
    int c;
};
int Base2::a = 100;


class Son: public Base1, public Base2 {
public:
Son() {
    d = 100;
    e = 100;
}
public:
    int d;
    int e;
};

int main() {
    //正式开发过程中不要轻易使用
    Son son;
    cout << son.Base1::a << " " << son.b << " " << son.c << " " << son.d << " "  << son.e << " " << sizeof(son) << endl;
    return 0;
}