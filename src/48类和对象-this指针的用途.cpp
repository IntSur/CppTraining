#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    int age;

    void showAge(int age) {
        this->age = age;//用途1.区分构造函数参数和成员变量
        cout << this->age << endl;
    }
};

int main() {
    Person person1;
    person1.showAge(10);
    return 0;
}