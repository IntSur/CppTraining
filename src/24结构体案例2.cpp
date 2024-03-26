#include <iostream>
#include <string>

using namespace std;

struct Hero
{
    string name;
    int age;
    string gender;
};

void bubbleSort(Hero hero[], int number) {
    Hero temp_hero;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number - i -1; j++)
        {
            if(hero[j].age < hero[j+1].age) {
                temp_hero = hero[j+1];
                hero[j+1] = hero[j];
                hero[j] = temp_hero;
            }
        }
    }
}

void printHero(Hero hero[], int number) {
    for (int i = 0; i < number; i++)
    {
        cout << "英雄名字: " << hero[i].name << "\t年龄: " << hero[i].age << "\t性别: " << hero[i].gender << endl;
    }
}

int main() {
    Hero hero[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };

    int len = sizeof(hero) / sizeof(hero[0]);

    bubbleSort(hero, len);
    printHero(hero, len);

    return 0;
}