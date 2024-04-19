#include <iostream>
#include <string>
using namespace std;

class Person {
    friend ostream & operator<<(ostream &cout, Person &person);
public:
    Person() {
        a = 10;
        b = 10;
    }
private:
    int a;
    int b;
};

ostream & operator<<(ostream &cout, Person &person) {
    cout << person.a << " " << person.b;
    return cout;
}

int main() {
    //左移运算符重载只能使用全局函数实现 用成员函数实现顺序会颠倒
    Person p1;
    cout << p1 << endl;
    return 0;
}