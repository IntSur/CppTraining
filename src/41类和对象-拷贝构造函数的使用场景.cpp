#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person() {
        cout << "------无参构造函数in-------" << endl;
    }
    Person(int a) {
        age = a;
        cout << "------有参构造函数in-------" << endl;
    }
    Person(const Person &p) {
        age = p.age;
        cout << "------拷贝构造函数in-------" << endl;
    }
    ~Person() {
        cout << "------析构函数in-------" << endl;
    }
};

void test1(Person person) {
    cout << "------test1 in-------" << endl;
}

Person test2() {
    Person person1;
    return person1;
}

int main() {
    //使用场景：
    //1.用已有的对象创建新的对象
    Person person1;
    Person person2(person1);
    Person person3;
    //2.作为参数用值传递的方式传入函数
    test1(person1);
    //3.用值传递的方式返回函数
    person3 = test2();
    cout << person3.age << endl;

    return 0;
}