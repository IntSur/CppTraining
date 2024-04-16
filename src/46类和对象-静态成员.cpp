#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // 1.静态成员变量为所有对象公用
    // 2.在编译阶段分配内存
    // 3.类内声明，类外初始化
    static string m_name;

    //1.静态成员函数只能调用静态成员变量
    //2.静态成员函数为所有对象公用
    static void func() {
        cout << m_name << endl;
    }
};
string Person::m_name = "fan";

int main() {
    //静态成员变量的两种访问方式
    //1：通过对象person1.m_name
    Person person1;
    person1.m_name = "fan";    
    cout << person1.m_name << endl;
    //2：通过类名Person::m_name
    Person person2;
    Person::m_name = "jia";    
    cout << Person::m_name << endl; 

    //静态成员函数的两种访问方式
    //1：通过对象person1.func()
    person1.func();

    //2：通过类名Person::func()
    Person::func();

    return 0;
}