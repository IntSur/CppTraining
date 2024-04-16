#include <iostream>
#include <string>
using namespace std;

class EmptyClass
{

};

class Person
{
public:
    string m_gender;//非静态成员变量 属于类对象上

    static string m_name;//静态成员变量 不属于类对象上

    void genderFunc() {//非静态成员函数 不属于类对象上
        cout << m_gender << endl;
    }
    static void nameFunc() {//静态成员函数 不属于类对象上
        cout << m_name << endl;
    }
};
string Person::m_name = "fan";

int main() {
    EmptyClass emptyclass;
    Person person1;
    cout << sizeof(emptyclass) << endl;// 1byte 存储的是对象的内存地址
    cout << sizeof(person1) << endl;// 8byte 存储的是对象的内存地址
    return 0;
}