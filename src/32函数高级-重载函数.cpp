#include <iostream>
using namespace std;

void function(int a) {
    //重载函数的三个条件：1.在同一作用域下 2.函数名相同 3.参数的类型、个数、顺序不同。
    cout << "this is function1" << endl;
}

void function() {
    cout << "this is function2" << endl;   
}

int main() {
    function(1);
    function();

    return 0;
}