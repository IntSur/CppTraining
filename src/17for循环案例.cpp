#include <iostream>
using namespace std;

int main() {
    int Number = 1;
    int unit, decade;

    for(int i = 0; i < 101; i++) {
        if((Number / 10 % 10 == 7) || (Number % 10 == 7) || (Number % 7 == 0)) {
            cout << Number << "敲桌子" << endl;
        } else {
            cout << "数字" << Number << "正常" << endl;
        }
        Number++;
    }

    return 0;
}