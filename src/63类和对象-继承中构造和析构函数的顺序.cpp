#include <iostream>
#include <string>
using namespace std;

class BasePart {
public:
    BasePart() {
        cout << "base构造函数in" << endl;
    }
    ~BasePart() {
        cout << "base析构函数in" << endl;
    }
};

class Son: public BasePart {
public:
    Son() {
        cout << "son构造函数in" << endl;
    }
    ~Son() {
        cout << "son析构函数in" << endl;
    }
};

int main() {
    //顺序：
    //1.base构造
    //2.son构造
    //3.son析构
    //4.base析构
    Son son1;
    return 0;
}