#include <iostream>
using namespace std;

struct struct1 //结构体默认为公有权限
{
    /* data */
};

class Father //类默认为私有权限
{
public://类内可以访问 类外可以访问
    string f_name;
protected://类内可以访问 类外可以访问 子类可以访问
    string f_car;
private://类内可以访问 类外不可以访问 子类不能访问
    string f_password;
};

int main() {
    Father father;
    father.f_name = "father";
    // father.f_car = ;//

    return 0;
}