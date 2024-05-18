#include <iostream>
#include <string>
using namespace std;

int main() {
    //1.创建一个空字符串
    string s1;
    cout << "s1 = " << s1 << endl;

    //2.使用字符串str初始化 string(const char* str)
    const char* str = "hello world";
    string s2(str);
    cout << "s2 = " << s2 << endl;

    //3.使用拷贝函数直接复制一个对象
    string s3(s2);
    cout << "s3 = " << s3 << endl;

    //4.使用n个字符初始化
    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;

    string s5;
    s5.assign("hello world", 5);
    cout << s5 << endl;

    return 0;
}