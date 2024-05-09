#include <iostream>
#include <string>
using namespace std;

template <class Name_type, class Age_type = int>
class Person {
public:
    Person(Name_type name, Age_type age) {
        this->name = name;
        this->age = age;
    }

    void showInfo() {
        cout << this->age << this->name << endl;
    }

    Name_type name;
    Age_type age;
};

int main() {
    //1.类模版不会自动识别类型，一定要指明模版参数列表
    //2.类模版在模版参数列表中可以有默认参数
    //3.类模版中的成员函数并不是一写好就创建，只有在被调用时才去创建。
    Person<string, int> person1("fan", 25);
    Person<string> person1("lv", 25);
    person1.showInfo();
    
    return 0;
}