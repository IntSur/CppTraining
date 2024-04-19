#include <iostream>
#include <string>
using namespace std;

//c++至少给一个类添加4个函数：构造函数，析构函数，拷贝构造函数，赋值运算符operator，对属性进行值拷贝
class Person {
public:
    Person() {
        
    }

    string name;
    int age;
};

int main() {
    Person person1;
    Person person2;
    Person person3;

    return 0;
}