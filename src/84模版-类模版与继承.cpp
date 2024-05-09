#include <iostream>
#include <string>
using namespace std;

template <class T>
class Base {
public:
    T number1;
};

//1.直接写明参数模版 但这样就不够灵活
// class Son : public Base<int> {
// };

//2.将子类也写成类模版，可以灵活指定父类中的T类型
template <class T1, class T2>
class Son : public Base<T2> {
public:
    Son() {
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }
    T1 number;
};

int main() {
    // Son son1;
    Son<int, char> son1;
    return 0;
}