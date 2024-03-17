#include <iostream>
using namespace std;

void printStarTable() {
    for (int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 10; i++) {
            cout << "* " ;    
        }
        cout << endl;
    }
}

void print9x9MultiplyTable() {
    for (int j = 1; j < 10; j++)
    {
        for(int i = 1; i <= j; i++) {
            cout << i << "x" << j << "=" << i*j << " ";    
        }
        cout << endl;
    }
}

void printDebugLine() {
    cout << "------------------------------------------------------------------------" << endl;    

}

int main() {
    
    printStarTable();
    printDebugLine();
    print9x9MultiplyTable();
    
    return 0;
}