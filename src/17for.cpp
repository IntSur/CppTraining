#include <iostream>
using namespace std;

int main() {
    int ToBecheckedNumber = 100;
    int unit, decade, hundred;

    do{
        unit = ToBecheckedNumber % 10;
        decade = ToBecheckedNumber / 10 % 10;
        hundred = ToBecheckedNumber / 100 % 10;
        if( (unit*unit*unit + decade*decade*decade + hundred*hundred*hundred) == ToBecheckedNumber ) {
            cout << ToBecheckedNumber << "是水仙花数。 " << endl;
        }
        ToBecheckedNumber++;
    }
    while (ToBecheckedNumber < 1000);
    
    return 0;
}