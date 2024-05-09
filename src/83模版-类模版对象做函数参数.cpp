#include <iostream>
#include <string>
using namespace std;

template <class name_type, class age_type>
class Person {
public:
    Person(name_type name, age_type age) {
        this->name = name;
        this->age = age;
    }
    name_type name;
    age_type age;

    void showInfo() {
        cout << this->age << this->name << endl;
    }
};

//1.直接用类参数模版 最常用
void showPerson1(Person<string, int> &person) {
    person.showInfo();
}

//2.参数模版化
template <class T1, class T2>
void showPerson2(Person<T1, T2> &person) {
    person.showInfo();
}

//2.整个类模版化
template <class T>
void showPerson3(T &person) {
    person.showInfo();
}

int main() {
    Person<string, int> person1("fan", 25);
    Person<string, int> person2("lv", 25);
    Person<string, int> person3("shen", 25);
    showPerson1(person1);
    showPerson2(person2);
    showPerson3(person3);
    return 0;
}