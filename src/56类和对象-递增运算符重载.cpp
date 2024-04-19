#include <iostream>
#include <string>
using namespace std;

class MyInt {
    
public:
    friend ostream & operator<<(ostream& cout, MyInt &myint);
    MyInt() {
        number = 0;
    }
    //重置前置++运算符
    MyInt& operator++() {// 前置传递的得是引用
        number++;
        return *this;
    }

    //重置后置++运算符 这里的int是个占位参数，用于区分前置和后置递增
    MyInt operator++(int) {// 后置传递的得是值
        MyInt tmp_myint = *this;
        number++;
        return tmp_myint;
    }
private:
    int number; 
};

ostream & operator<<(ostream& cout, MyInt &myint) {
    cout << myint.number;
    return cout;
}

int main() {
    MyInt myint;

    // cout << ++(++myint) << endl;
    cout << myint << endl;
    cout << myint++ << endl;
    

    return 0;
}