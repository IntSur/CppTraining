#include <iostream>
using namespace std;

int& test1() {
    //返回局部变量引用
    int num = 10;
    return num;
}

int& test2() {
    //返回静态变量引用
    static int num = 10;
    return num;
}

int main() {
    //不要返回局部变量引用
    int& num1 = test1();
    cout << num1 << endl;//第一次返回10
    cout << num1 << endl;//第二次会返回乱值

    //返回静态变量引用
    int& num2 = test2();
    cout << num2 << endl;//第一次返回10
    cout << num2 << endl;//第二次返回10

    //如果函数作为左值，必须返回引用
    test2() = 1000;
    cout << num2 << endl;//第二次返回10

    return 0;
}