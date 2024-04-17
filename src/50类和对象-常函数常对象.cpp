#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(){

    }
    void constFunction() const{ //此处加const就是声明这是个常函数，相当于const Person * const person
        // this->age = 10; 1.常函数和常对象不能修改正常成员变量
        this->age1 = 100;// 但可以修改mutable成员变量
    }
    int age;
    mutable int age1;
};

int main() {
    const Person person1;
    //person1.age = 100; 1.常对象不能修改正常成员变量
    person1.age1 = 100;// 但可以修改mutable成员变量
    person1.constFunction();// 常对象只能调用常函数
    
    return 0;
}