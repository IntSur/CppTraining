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
    //有参构造和拷贝构造函数的三种调用方法
    //1.括号法
    // Person person1;
    // Person person2(18);
    // Person person3(person2);

    //Person p1();编译器会认为是一个函数的声明
    // cout << person2.age << endl;
    // cout << person3.age << endl;

    //2.显示法
    Person person1;
    Person person2 = Person(18);
    Person person3 = Person(person2);
    //Person(18)；匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象。
    //不要利用拷贝构造函数 初始化匿名对象 编译器会认为Person(person3) === Person person3

    //3.隐式转换法
    Person person4 = 18; //相当于Person person4 = Person(18);
    Person person5 = person4;
    return 0;
}