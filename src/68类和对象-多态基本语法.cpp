#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "animal speak" << endl;
    }
};

class Cat:public Animal {
public:
    void speak() {
        cout << "cat meaon" << endl;
    }
};

class Dog:public Animal {
public:
    void speak() {
        cout << "dog bark" << endl;
    }
};

void somethingSpeak(Animal &animal) {
    animal.speak();
}

int main() {
    // 多态有两种：
    // 静态多态：函数重载和运算符重载，复用函数名。
    // 动态多态：用子类调用父类虚函数，使函数在运行时才分配地址。子类重写父类函数。
    // 两者的区别：
    // 静态多态函数地址早绑定 - 编译阶段确定函数地址
    // 动态多态函数地址晚绑定 - 运行阶段确定函数地址
    Cat cat;
    Dog dog;

    somethingSpeak(cat);
    somethingSpeak(dog);

    return 0;
}