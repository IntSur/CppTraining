#include <iostream>
#include <vector>
using namespace std;


class Person {
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

int main() {
    //1.存放Person类
    // vector<Person> v;

    // Person person1("fan", 25);
    // Person person2("jia", 25);
    // Person person3("hui", 25);
    // Person person4("liang", 25);
    // Person person5("van", 25);

    // v.push_back(person1);
    // v.push_back(person2);
    // v.push_back(person3);
    // v.push_back(person4);
    // v.push_back(person5);

    // for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
    // {
    //     cout << it->age << " " << it->name << endl;
    // }
    
    //2.存放指针
    vector<Person *> v;

    Person person1("fan", 25);
    Person person2("jia", 25);
    Person person3("hui", 25);
    Person person4("liang", 25);
    Person person5("van", 25);

    v.push_back(&person1);
    v.push_back(&person2);
    v.push_back(&person3);
    v.push_back(&person4);
    v.push_back(&person5);

    for (vector<Person*>::iterator i = v.begin(); i < v.end(); i++)
    {
        cout << (*i)->age << " " << (*i)->name << endl;
    }
    
    return 0;
}