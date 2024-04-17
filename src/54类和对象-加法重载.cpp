#include <iostream>
#include <string>
using namespace std;

class Group {
public: 
    int a;
    int b;

    
};

int main() {
    Group group1;
    group1.a = 10;
    group1.b = 10;
    Group group2;
    group2.a = 10;
    group2.b = 10;

    Group group3 = group1 + group2;

    return 0;
}