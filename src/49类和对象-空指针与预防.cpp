#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    int age;

    void showOK() {    
        cout << "ok" << endl;
    }

    void showAge() {    
        if (this == NULL)//预防this为空指针 导致代码失效
        {
            return;
        }
        
        cout << this->age << endl;
    }
};

int main() {
    Person * person = NULL;
    person->showAge();
    person->showOK();
    return 0;
}