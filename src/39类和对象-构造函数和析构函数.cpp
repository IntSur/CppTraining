#include <iostream>
using namespace std;

class Person{
public:
    //1.构造函数:相当于是创建对象时初始化对象信息
    // 没有返回值 不用写void
    // 函数名 和类名相同
    // 构造函数可以有参数 可以发生重载
    // 创建对象时 构造函数会自动调用
    Person() {
        cout << "Person构造函数进入。" << endl;
    }

    //2.析构函数:相当于是结束对象时清空对象信息
    // 没有返回值 不用写void
    // 函数名 和类名相同
    // 构造函数可以有参数 可以发生重载
    // 创建对象时 构造函数会自动调用
    ~Person() {
        cout << "Person析构函数进入。" << endl;
    }
};

int main() {
    Person person1;

    return 0;
}