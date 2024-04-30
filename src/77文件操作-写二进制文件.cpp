#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    char name[32];
    int age;
};

void writeBinFile() {
    fstream ofs;
    ofs.open("person.txt", ios::out | ios::binary);
    Person person = {"张三", 18};
    ofs.write((const char*)&person, sizeof(person));
    ofs.close();
}

int main() {
    writeBinFile();
    return 0;
}