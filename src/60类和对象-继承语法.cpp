#include <iostream>
#include <string>
using namespace std;

class BasePart {
public:
    void header() {
        cout << "header" << endl;
    }
    void content() {
        cout << "content" << endl;
    }
    void footer() {
        cout << "footer" << endl;
    }
};

// 继承语法：class 子类（派生类）:继承方式 夫类（基类）
class CPP: public BasePart {
public:
    void oemContent() {
        cout << "CPP" << endl;
    }
};

class Java: public BasePart {
public:
    void oemContent() {
        cout << "Java" << endl;
    }
};

int main() {
    CPP cpp1;
    Java java1;
    cpp1.header();
    cpp1.content();
    cpp1.footer();
    cpp1.oemContent();
    java1.oemContent();



    return 0;
}