#include <iostream>
#include <string>
using namespace std;

//c++至少给一个类添加4个函数：构造函数，析构函数，拷贝构造函数，赋值运算符operator，对属性进行值拷贝
class Person {
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    bool operator==(Person &person) {
        if(this->age != person.age) {
            return false;
        } else {
            return true;
        }
    }

    bool operator!=(Person &person) {
        if(this->age != person.age) {
            return true;
        } else {
            return false;
        }
    }

    string name;
    int age;
};

int main() {
    Person person1("fan", 20);
    Person person2("lv", 20);
    Person person3("jiang", 20);

    if (person1 == person2) {
        cout << "相等" << endl;
    }

    if (person1 != person2) {
        cout << "不相等" << endl;
    }
    

    return 0;
}