#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

enum FUNC{
    QUIT,
    ADD_CONTACT,
    SHOW_CONTACT,
    DEL_CONTACT,
    SEARCH_CONTACT,
    MODIFY_CONTACT,
    CLEAN_CONTACT,
};

void showMainInfo() {
    cout << "****************************************************" << endl;
    cout << "*                 欢迎来到MyContact                 *" << endl;
    cout << "*                 1.添加联系人                      *" << endl;
    cout << "*                 2.显示联系人                      *" << endl;
    cout << "*                 3.删除联系人                      *" << endl;
    cout << "*                 4.查找联系人                      *" << endl;
    cout << "*                 5.修改联系人                      *" << endl;
    cout << "*                 6.清空联系人                      *" << endl;
    cout << "*                 0.退出Mycontact                   *" << endl;
    cout << "****************************************************" << endl;
}


int main() {
    int select_func;
    showMainInfo();

    cin >> select_func;

    switch (select_func)
    {
        case ADD_CONTACT:
            cout << "ADD_CONTACT" << endl;
            break;
        case SHOW_CONTACT:
            cout << "SHOW_CONTACT" << endl;
            break;
        case DEL_CONTACT:
            cout << "DEL_CONTACT" << endl;
            break;
        case SEARCH_CONTACT:
            cout << "SEARCH_CONTACT" << endl;
            break;
        case MODIFY_CONTACT:
            cout << "MODIFY_CONTACT" << endl;
            break;
        case CLEAN_CONTACT:
            cout << "CLEAN_CONTACT" << endl;
            break;
        case QUIT:
            cout << "Bye :)" << endl;
            return 0;
            break;
        default:
            break;
    }

    return 0;
}