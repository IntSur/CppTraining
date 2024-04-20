#include <iostream>
#include <string>
using namespace std;

class BasePart {
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Son: public BasePart {
public:
    int d;
};

int main() {
    //可以利用vsstudio开发者工具查看类模型
    //查看命令：cl /dl reportSingleClassLayoutSon
    Son son1;
    cout << sizeof(son1) << endl;//子类完完全全继承了父类的所有成员，不管父类里的是私有还是保护。
    return 0;
}