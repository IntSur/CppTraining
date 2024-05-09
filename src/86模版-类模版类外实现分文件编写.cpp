#include <iostream>
#include <string>
#include "86.hpp"
using namespace std;

int main() {
    Person<string, int> person1("fan", 25);
    person1.printPerson();
    return 0;
}