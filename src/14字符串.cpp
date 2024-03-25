#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1.c风格写法
    char char1[] = "C style chars";
    cout << "char1 = " << char1 << endl;
    cout << "sizeof(char1) = " << sizeof(char1) << endl;

    // 2.c++风格写法
    string string1 = "C++ style string";
    cout << "string1 = " << string1 << endl;
    cout << "string1.size() = " << string1.size() << endl;
    cout << "sizeof(string1) = " << sizeof(string1) << endl;

    //c++风格的字符串增改查
    string string2 = " Be added C string"; 
    string result1 = string1 + string2;
    cout << "result1 = " << result1 << endl;
    cout << "sizeof(string2) = " << string2.size() << endl;

    string1 = string2;
    cout << "string1 = " << string1 << endl;
    
    cout << "size of result1 = " << result1.size() << endl;
    return 0;
}