#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    static int a;
};
int Base::a = 100;

class Son: public Base {
public:
    static int a;
};
int Son::a = 200;

int main() {
    //同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式。（对象和类名）
    Son son;
    //1.通过对象访问
    cout << son.a << endl;
    cout << son.Base::a << endl;

    //2.通过类名访问
    cout << Son::a << endl;
    cout << Son::Base::a << endl;

    return 0;
}