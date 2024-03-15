#include <iostream>
using namespace std;

int main() {
    char char1 = 'a';

    cout << "sizeof(char1) = " << sizeof(char1) << endl;
    cout << "ASCII d of(char1) = " << (int)char1 << endl;
    cout << "ASCII h of(char1) = " << std::hex << (int)char1 << std::endl;
    return 0;
}