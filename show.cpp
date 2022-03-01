#include <iostream>
using namespace std;

void show()
{
    cout<<"* * * * * * * * * * * * * *"<<endl;
    cout<<"* *     Hello World     * *"<<endl;
    cout<<"* * * * * * * * * * * * * *"<<endl;
}

int main()
{
    int Flag = 0;
    cout << "Enter 1 to say hello." << endl;
    cin >> Flag;
    if(Flag == 1)
    {
        show();
    }
    return 0;
}