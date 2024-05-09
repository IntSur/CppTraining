#include <iostream>
using namespace std;

//模版语法
//告诉编译器后面代码中 包含T关键字的函数声明不要报错
//注意事项：使用模版时必须确定出通用数据类型T,并且能够推导出一致的类型。

//普通函数和函数模版的区别
//普通函数：自动类型转换（隐式类型转换）
//函数模版：只有显示指定类型func_name<int>()才会发生类型转换
template <typename T>

void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    //模版启用方式1
    mySwap(a, b);
    //模版启用方式2
    mySwap<int>(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}