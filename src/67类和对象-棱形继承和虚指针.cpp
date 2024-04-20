#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    int age;
};

class Sheep:virtual public Animal {//给父类1加virtual就是指明虚继承
};

class Tuo:virtual public Animal {//给父类2加virtual就是指明虚继承
};

class SheepTuo: public Sheep, public Tuo {
};

int main() {
    SheepTuo sheeptuo;

    sheeptuo.Sheep::age = 10;
    sheeptuo.Tuo::age = 20;

    cout << sheeptuo.Sheep::age << endl;
    cout << sheeptuo.Tuo::age << endl;
    cout << sheeptuo.age << endl;//如果不用虚继承的形式sheeptuo就会出现二义性

    return 0;
}