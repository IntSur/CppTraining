#include <iostream>
using namespace std;
//注意事项1:函数重载的参数是引用时，调用参数不一致。
void function(int& num) {
    cout << "function(int& num)" << endl;
}

void function(const int& num) {
    cout << "function(const int& num)" << endl;
}
//注意事项2:重载和默认参数不要一起用
void function2(int a, int b = 10) {
    cout << "function(int a, int b = 10)" << endl;
}

void function2(int a) {
    cout << "function(int a)" << endl;
}

int main() {
    int a = 10;
    function(a);

    function(10);
    
    //function2(10);//编译器不知道该走哪个function2

    return 0;
}