#include <iostream>
#include <string>
using namespace std;

//c++至少给一个类添加4个函数：构造函数，析构函数，拷贝构造函数，赋值运算符operator，对属性进行值拷贝
class Person {
public:
    Person(int age) {
        this->age = new int(age);
    }

    ~Person() {
        if (this->age != NULL)
        {
            delete this->age;
            this->age = NULL;
        }
    }

    //重载赋值运算符
    Person & operator=(Person &person) {
        if (this->age != NULL)
        {
            delete this->age;
            this->age = NULL;
        }
        this->age = new int(*person.age);
        return *this;
    }

    int* age;
};

int main() {
    Person person1(18);
    Person person2(20);
    Person person3(30);

    person1 = person2 = person3;
    //普通赋值将person1的指针也给复制到person2上了，析构时重复释放内存区域，导致程序崩溃。
    //所以需要自己重载赋值运算符

    cout << *person1.age << endl;
    cout << *person2.age << endl;

    return 0;
}