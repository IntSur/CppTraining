#include <iostream>
#include <string>
using namespace std;

int main() {
    //1.字符串查找find = 从左往右找 找第一个出现的
    int resp;
    string s1 = "abcdefghide";
    resp = s1.find("de");
    cout << resp << endl;//返回查找字符串位置 index从0开始算

    resp = s1.find("df");
    cout << resp << endl;//找不到就返回-1
    //字符串查找rfind = 从右往左找 找第一个出现的
    resp = s1.rfind("de");
    cout << resp << endl;

    //2.字符串替换replace 从index2的位置取3个字符换成5个1
    s1.replace(2, 0 ,"11111");
    cout << s1 << endl;

    //3.字符串增加insert
    s1.insert(2, "222");
    cout << s1 << endl;

    //4.字符串删除
    s1.erase(2, 8);
    cout << s1 << endl;
    
    //5.字符串截取
    string substr_resp = s1.substr(0, 4);
    cout << substr_resp << endl;
    //截取邮箱名称案例
    string email = "intsur@xxx.com";
    int EndOfName = email.find("@");
    string name = email.substr(0, EndOfName);
    cout << name << endl;

    return 0;
}