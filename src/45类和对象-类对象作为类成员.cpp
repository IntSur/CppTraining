#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    string m_brand;
    string m_model;

    Phone(string brand, string model):m_brand(brand), m_model(model) {} 
};

class Person
{
public:
    string m_name;
    Phone m_phone;

    Person(string name, Phone phone):m_name(name), m_phone(phone) {} 
};

int main() {
    // 当其他类对象作为本类成员：
    // 构造时先构造类对象（phone），再构造自身（person）。
    // 析构时先析构自身（person），再析构类对象（phone）。
    
    Phone phone("Apple", "iPhone15Pro");
    Person person("fanjiahui", phone);
    cout << person.m_name << " holds " << phone.m_brand << " " << phone.m_model << endl;
    return 0;
}