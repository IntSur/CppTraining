#include <iostream>
using namespace std;

int * test1() {
    //创建new变量
    int * p = new int(10);//这里用new创建指针能让数据保存在堆里。从而让main函数中其他地方也能获取该数值。
    return p;
}

void test2() {
    //创建new数组
    int * arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
}

int main() {
    int * p = test1();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    delete p;//手动删除在堆里的变量

    cout << *p << endl;

    test2();

    return 0;
}