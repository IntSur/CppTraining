#include <iostream>
using namespace std;

class Person
{
private:
    int m_a;
    int m_b;
    int m_c;
public:
    Person(int a, int b, int c):m_a(a), m_b(b), m_c(c) {}//用构造函数初始化对象
    void printPerson() {
        cout << "------person.m_a-------" << m_a << endl;
        cout << "------person.m_b-------" << m_b << endl;
        cout << "------person.m_c-------" << m_c << endl;
    }
};

int main() {
    Person person1(10, 11, 12);
    person1.printPerson();

    return 0;
}