#include <iostream>
using namespace std;

void change(int a,int b)
{
    a = 30,b = 50;
}

int main()
{
    int a[2] = {3,5};
    // int a[] = {3,5}; 数组也可以这么声明
    change(a[0],a[1]);
    cout << a[0] << " " << a[1] << endl;
}