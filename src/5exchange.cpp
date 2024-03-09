#include <iostream>
using namespace std;
// int a,b = 0;

void exchange(int *number1, int *number2)
{
    int p;
    p = *number1, *number1 = *number2, *number2 = p;
}

int main()
{
    int a, b;
    cout << "请输入a和b的值："<<endl;
    cin >> a >> b;
    exchange(&a, &b);
    cout << "Exchanged!\n" << "a = " << a << " b = " << b <<endl;
    return 0;
}