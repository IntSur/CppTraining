#include <iostream>
using namespace std;

int q(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return (n + q(n-1));
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << q(n) << endl;
    return 0;
}