#include <iostream>
using namespace std;

void function(int a, int b) {
    cout << "调用了普通函数" << endl;
}

template <typename T>
void function(T a, T b) {
    cout << "调用了函数模版" << endl;
}

template <typename T>
void function(T a, T b, T c) {
    cout << "调用了函数模版重载" << endl;
}

int main() {
    // 普通函数和函数模版的调用规则
    // 1.如果函数模版和普通函数都可以实现，优先调用普通函数。
    // 2.函数模版可以发生重载。
    // 3.通过空模版参数列表来调用函数模版。
    // 4.如果函数模版可以产生更好的匹配，优先调用函数模版。
    int a = 10;
    int b = 20;
    int c = 30;
    // function(a, b);
    // function(a, b, c);
    // function<>(a, b);
    char char1 = 'a';
    char char2 = 'c';
    function(char1, char2);
    
    return 0;
}