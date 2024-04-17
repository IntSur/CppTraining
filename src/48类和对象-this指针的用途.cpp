#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    int age;

    Person(int age) {
        this->age = age;//this指针用途 1.区分构造函数参数和成员变量
    }

    void showAge() {    
        cout << this->age << endl;
    }

    Person& personAddAge(Person &person) {//头部不加&将返回一份新的复制值
        this->age += person.age;
        return *this;//this指针用途 2.返回对象自身
    }
};

int main() {
    //this指针的本质：指针常量，指针的指向是不可以修改的。
    Person person1(10);
    Person person2(18);
    Person person3(24);
    person1.showAge();
    person1.personAddAge(person2).personAddAge(person3);//链式编程思想
    person1.showAge();
    
    return 0;
}