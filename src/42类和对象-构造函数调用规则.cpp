#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person() {
        cout << "------无参构造函数in-------" << endl;
    }
    Person(int a) {
        age = a;
        cout << "------有参构造函数in-------" << endl;
    }
    Person(const Person &p) {
        age = p.age;
        cout << "------拷贝构造函数in-------" << endl;
    }
    ~Person() {
        cout << "------析构函数in-------" << endl;
    }
};

int main() {
    //只要声明对象，编译器就会初始化三个函数：构造函数（无参） 析构函数（无参） 拷贝函数（值传递）
    //如果定义了有参构造函数，c++不再提供默认无参构造，但会提供拷贝构造
    //如果定义拷贝构造函数，c++不会再提供其他构造函数

    return 0;
}