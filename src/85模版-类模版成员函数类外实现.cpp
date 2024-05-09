#include <iostream>
#include <string>
using namespace std;

template <class name_type, class age_type>
class Person{
public:
    name_type name;
    age_type age;
    Person(name_type name, age_type age);
    void printPerson();
};

//成员函数写在类外时，需要加上参数模版
template <class name_type, class age_type>
Person<name_type, age_type>::Person(name_type name, age_type age) {
    this->name = name;
    this->age = age;
}

template <class name_type, class age_type>
void Person<name_type, age_type>::printPerson() {
    cout << this->name << this->age << endl;
}

int main() {
    Person<string, int> person1("fan", 25);
    person1.printPerson();
    return 0;
}