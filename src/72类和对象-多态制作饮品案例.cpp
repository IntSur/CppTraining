#include <iostream>
#include <string>
using namespace std;

class Base {
    friend class Tea;
    friend void doDrink(Base * base);

    virtual void water() = 0;
    virtual void putInSomething() = 0;
    virtual void hot() = 0;
    virtual void down() = 0;

    void makeDrink() {
        water();
        putInSomething();
        hot();
        down();
    }
};

class Tea: public Base {
    void water() {
        cout << "加水" << endl;
    }
    void putInSomething() {
        cout << "加入茶叶" << endl;
    }
    void hot() {
        cout << "加热" << endl;
    }
    void down() {
        cout << "完成" << endl;
    }
};

class Coffee: public Base {
    void water() {
        cout << "加水" << endl;
    }
    void putInSomething() {
        cout << "加入咖啡" << endl;
    }
    void hot() {
        cout << "加热" << endl;
    }
    void down() {
        cout << "完成" << endl;
    }
};

void doDrink(Base * base) {
    base->makeDrink();
    delete base;
}

int main() {
    doDrink(new Tea);
    cout << "------------------" << endl;
    doDrink(new Coffee);

    return 0;
}