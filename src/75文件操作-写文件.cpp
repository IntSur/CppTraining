#include <iostream>
#include <fstream>
using namespace std;

void writeFile() {
    fstream ofs;
    ofs.open("text.txt", ios::out);
    ofs << "这是写入文件的第一行" << endl;
    ofs << "这是写入文件的第二行" << endl;
    ofs << "这是写入文件的第三行" << endl;
    ofs.close();
}

int main() {
    writeFile();
    return 0;
}