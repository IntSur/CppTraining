#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector< vector<int> > v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 1);
        v3.push_back(i + 2);
        v4.push_back(i + 3);
        v5.push_back(i + 4);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    
    for (vector< vector<int> >::iterator i = v.begin(); i < v.end(); i++)
    {
        for (vector<int>::iterator it = (*i).begin(); it < (*i).end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}