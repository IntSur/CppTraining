#include <iostream>
#include <string>
using namespace std;

int main() {
    //1.字符串比较
    string s1 = "hello";
    string s2 = "hello";

    int compare_resp = s1.compare(s2);
    if(compare_resp == 0) {
        cout << "字符串相等" << endl;
    } else {
        cout << "字符串不等" << endl;
    }

    //2.string单个字符存取 两种方式：1.[] 2.at()
    string s3 = "hello";
    s3[0] = 'x';
    s3.at(1) = 'a';
    cout << s3 << endl;

    return 0;
}