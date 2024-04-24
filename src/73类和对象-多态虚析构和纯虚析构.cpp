#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal构造函数in" << endl;
    }

    virtual ~Animal() {//析构函数前加入virtual关键字可以让父类析构函数触发多态。
        cout << "Animal析构函数in" << endl;
    }

    virtual void speak() = 0;

    string* name;
};

//纯虚析构需要写在类的外面,并且需要写内容
//Animal::virtual animal{ cou << << endl}

class Cat: public Animal {
public:
    Cat(string name) {
        cout << "Cat构造函数in" << endl;
        this->name = new string(name);
    }

    void speak() {
        cout << *name << "在说话" << endl;
    }

    ~Cat() {
        if (name != NULL)
        {
            cout << "Cat析构函数in" << endl;
            delete name;
            name = NULL;
        }
    }
};

void somethingSpeak(Animal * animal) {
    animal->speak();
    delete animal;
}

int main() {
    somethingSpeak(new Cat("Tom"));
    
    return 0;
}