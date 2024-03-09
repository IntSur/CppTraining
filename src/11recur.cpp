#include <iostream>
using namespace std;

int recur()
{
    char c;
    c = cin.get();
    if( c != '\n' )
    {
        recur();
        cout << c << endl;
    }
    return 0;
}

int main()
{
    recur();
    return 0;
}