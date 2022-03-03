#include <iostream>
using namespace std;
int a,b = 0;

void exchange()
{
    int p;
    p = a,a = b,b = p;
}

int main()
{
    cout << "a = ";
    cin >> a ;
    cout << "b = ";
    cin >> b ;
    exchange();
    cout << "Exchanged!\n" << "a = " << a << " b = " << b <<endl;
    return 0;
}