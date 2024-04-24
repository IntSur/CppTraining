#include <iostream>
#include <string>
using namespace std;

class Caculator {
public:
    virtual int caculate() {
    }
    int num1;
    int num2;
};

class AddCaculator:public Caculator {
public:
    int caculate() {
        return num1 + num2;
    }
};

class MinCaculator:public Caculator {
public:
    int caculate() {
        return num1 - num2;
    }
};

class MulCaculator:public Caculator {
public:
    int caculate() {
        return num1 * num2;
    }
};

int main() {
    //用多态有利于后期维护代码，可读性高
    //多态触发条件：父类指针或者引用指向子类对象
    Caculator* addcaculator = new AddCaculator;
    addcaculator->num1 = 100;
    addcaculator->num2 = 100;
    cout << addcaculator->caculate() << endl;
    delete addcaculator;

    Caculator* mincaculator = new MinCaculator;
    mincaculator->num1 = 100;
    mincaculator->num2 = 100;
    cout << mincaculator->caculate() << endl;
    delete mincaculator;

    Caculator* mulcaculator = new MulCaculator;
    mulcaculator->num1 = 100;
    mulcaculator->num2 = 100;
    cout << mulcaculator->caculate() << endl;
    delete mulcaculator;

    return 0;
}