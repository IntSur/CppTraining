#include <iostream>
using namespace std;

void DToB(int d)
{
    if(d/2 != 0)
    {
        DToB(d/2);
        cout << d%2;
    }
}

int main()
{
    int d;
    cin >> d;
    DToB(d);
    return 0;
}