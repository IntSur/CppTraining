#include <iostream>
using namespace std;

void swap(int &swap1, int &swap2) {
    int temp = swap2;
    swap2 = swap1;
    swap1 = temp;
}

int main() {
    //引用的本质：指针常量

    //引用的初始化和注意事项（C没有引用）
    int a = 0;
    int &b = a;//引用必须要被初始化

    b = 10;
    cout << a << endl;
    cout << b << endl;

    int c = 20;
    b = c;//这是c给b的赋值操作，而不是让b引用c。一旦一个引用被指定就不能修改。
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    //用引用做形参可以修饰实参，和用指针传递地址修改实参一致。
    int num1 = 100;
    int num2 = 200;

    swap(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}