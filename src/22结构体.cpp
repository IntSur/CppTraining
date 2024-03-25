#include <iostream>
using namespace std;

int main() {
    struct Student
    {
        string name;
        int age;
        int score;
    };
    
    Student student1;
    student1.name = "张三";
    student1.age = 18;
    student1.score = 100;

    cout << "学生姓名是：" << student1.name << " 年龄是：" << 
    student1.age << " 成绩是：" << student1.score << endl;

    Student student_arr[3] = {
        {"张三", 18, 80},
        {"李四", 19, 90},
        {"王五", 20, 100}
    };

    for (int i = 0; i < sizeof(student_arr) / sizeof(student_arr[0]); i++)
    {
        cout << "学生姓名是：" << student_arr[i].name 
            << " 年龄是：" << student_arr[i].age 
            << " 成绩是：" << student_arr[i].score << endl;
    }
    //将函数中的形参改为指针，可以减少内存空间，不会复制新的副本出来。
    //用const修饰函数中的结构体地址参数，可以保护元数据不被修改。

    return 0;
}