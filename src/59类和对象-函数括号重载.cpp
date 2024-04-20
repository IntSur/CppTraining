#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void operator()(string strings) {
        cout << strings << endl;
    }
};

class OEMAdd {
public:
    int operator()(int number1, int number2) {
        int sum;
        sum = number1 + number2;
        return sum;
    }
};

int main() {
    Print logs;
    logs("hello world");

    OEMAdd add;
    int sum = add(1,2);
    cout << sum << endl;

    return 0;
}