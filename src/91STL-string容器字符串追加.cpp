#include <iostream>
#include <string>
using namespace std;

int main() {
    //1.重载+=
    string s1 = "hello";
    s1 += " world";
    cout << s1 << endl;

    //2.append
    string s2 = "hello";
    s2.append(" world");
    cout << s2 << endl;

    string s3 = "some string which to be insert";
    s2 += " +";
    s2.append(s3, 11, 19);
    cout << s2 << endl;

    return 0;
}