#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    char name[32];
    int age;
};

void readBinFile() {
    ifstream ifs;
    ifs.open("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }
    Person person;
    ifs.read((char* )&person, sizeof(person));
    cout << person.name << person.age << endl;
    ifs.close();
}

int main() {
    readBinFile();
    return 0;
}