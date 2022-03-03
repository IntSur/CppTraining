#include <iostream>
using namespace std;

int absolute(int m)
{
    if(m<0)
    {
        return (-m);
    }
    else
    {
        return m;
    }
}

int main()
{
    int m = -5;
    int result = 0;
    result = absolute(m);
    cout<<result<<endl;
    return 0;
}