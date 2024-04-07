#include <iostream>
using namespace std;

void function1(int a, int) {//函数声明时声明一个占位参数，在调用函数时必须填入这个参数
    cout << "this is a test function" << endl;
}

int main() {
    function1(10, 10);

    return 0;
}