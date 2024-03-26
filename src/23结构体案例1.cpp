#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

struct Student
{
    string name;
    int score;
};
struct Teacher 
{
    string name;
    Student student[5];
};

void allocateSpace(Teacher teacher[], int teacher_number, int student_number) {
    string nameSeed = "ABCDE";

    for (int i = 0; i < teacher_number; i++)
    {
        teacher[i].name = "teacher_";
        teacher[i].name += nameSeed[i];
        for (int j = 0; j < student_number; j++)
        {
            teacher[i].student[j].name = "student_";
            teacher[i].student[j].name += nameSeed[j];
            teacher[i].student[j].score = rand() % 41 + 60;//随机数生成范围是:60+0 ~ 60+40
        }
    }
}

void printName(Teacher teacher[], int teacher_number, int student_number) {
    
    for (int i = 0; i < teacher_number; i++)
    {
        cout << "老师名字: " << teacher[i].name << endl;
        for (int j = 0; j < student_number; j++)
        {
            cout << "\t" << "学生名字: " << teacher[i].student[j].name << "\t成绩: " << teacher[i].student[j].score << endl;
        }
    }
}

int main() {
    Teacher teacher[3];
    int teacher_number = sizeof(teacher) / sizeof(teacher[0]);
    int student_number = sizeof(teacher[0].student) / sizeof(teacher[0].student[0]);


    srand((unsigned int)time(NULL));
    allocateSpace(teacher, teacher_number, student_number);
    printName(teacher, teacher_number, student_number);

    return 0;
}