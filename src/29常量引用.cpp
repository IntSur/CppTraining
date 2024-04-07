#include <iostream>
using namespace std;

void printNum(const int& num) {
    // num = 1000;//形参加了const，num就不能被改变。
    // 所以函数中一般利用常量引用防止误操作修改实参。
}

int main() {
    int a = 10;
    printNum(a);

    return 0;
}