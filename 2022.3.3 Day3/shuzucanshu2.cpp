#include <iostream>
using namespace std;

void exchange(int a[])
{
    a[0] = 30,a[1] = 50;
}

int main()
{
    int a[] = {3,5};
    exchange(a);
    cout << a[0] << " " << a[1] << endl;
    return 0;
}