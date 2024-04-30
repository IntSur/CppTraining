#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile() {
    ifstream ifs;
    ifs.open("text.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }
    //第一种读取文件的方法
    // char buffer[1024] = {0};
    // while(ifs >> buffer) {
    //     cout << buffer << endl;
    // }

    //第二种读取文件的方法
    // char buffer[1024] = {0};
    // while(ifs.getline(buffer, sizeof(buffer))) {
    //     cout << buffer << endl;
    // }

    //第三种读取文件的方法
    // string buffer;
    // while(getline(ifs, buffer)) {
    //     cout << buffer << endl;
    // }

    //第四种读取文件的方法
    char c;
    while((c = ifs.get()) != EOF) {
        cout << c ;
    }

    ifs.close();
}

int main() {
    readFile();
    return 0;
}