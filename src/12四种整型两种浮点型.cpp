#include <iostream>
using namespace std;

int main() {
    short int number1 = 10;// -32768～32767
    int number2 = 10;
    long number3 = 10;
    long long number4 = 10;

    float fnumber1 = 3.14f;
    double fnumber2 = 3.14;
    float fnumber3 = 3e2;
    float fnumber4 = 3e-2;

    cout << "number1 = " << number1 << " number2 = " << number2
    << " number3 = " << number3 << " number4 = " << number4 << endl;
    cout << "size of number1 = " << sizeof(number1) << endl;
    cout << "size of number2 = " << sizeof(number2) << endl;
    cout << "size of number3 = " << sizeof(number3) << endl;
    cout << "size of number4 = " << sizeof(number4) << endl;

    cout << "fnumber1 = " << fnumber1 << " fnumber2 = " << fnumber2
    << " fnumber3 = " << fnumber3 << " fnumber4 = " << fnumber4 << endl;

    return 0;
}