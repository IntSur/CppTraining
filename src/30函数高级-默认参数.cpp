#include <iostream>
using namespace std;

//如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值。
int function1(int a, int b = 10, int c = 10) {
    return a + b + c;
}

//声明和函数主题不能同时设置参数默认值
int function2(int a = 10, int b = 10);
int function2(int a, int b) {
    return a + b;
}

int main() {
    cout << function1(10) << endl;
    cout << function2() << endl;

    return 0;
}