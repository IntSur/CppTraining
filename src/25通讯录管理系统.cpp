#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

#define MAX_PERSON_NUM 3

enum FUNC{
    QUIT,
    ADD_CONTACT,
    SHOW_CONTACT,
    DEL_CONTACT,
    SEARCH_CONTACT,
    MODIFY_CONTACT,
    CLEAN_CONTACT,
};

struct Person
{
    string name;
    int gender;
    int age;
    string tel;
    string address;
};

struct Addressbook
{
    Person persons[MAX_PERSON_NUM];
    int person_num;
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

int searchContact(Addressbook *paddressbook, string contact_name) {
    for (int i = 0; i < paddressbook->person_num; i++)
    {
        if (paddressbook->persons[i].name == contact_name)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int select_func;
    int contact_index;
    int delete_index;
    int modify_index;
    string search_contact_name = "";
    string delete_contact_name = "";
    string modify_contact_name = "";

    Addressbook addressbook;
    addressbook.person_num = 0;

    while (1)
    {
        showMainInfo();

        cin >> select_func;

        switch (select_func)
        {
            case ADD_CONTACT:
                if (addressbook.person_num == MAX_PERSON_NUM)
                {
                    cout << "通讯录已满，无法继续添加。" << endl;
                } else {
                    cout << "请输入联系人姓名：";
                    cin >> addressbook.persons[addressbook.person_num].name;
                    cout << "请选择联系人性别：1.男 2.女" << endl;
                    cin >> addressbook.persons[addressbook.person_num].gender;
                    cout << "请输入联系人年龄：";
                    cin >> addressbook.persons[addressbook.person_num].age;
                    cout << "请输入联系人联系电话：";
                    cin >> addressbook.persons[addressbook.person_num].tel;
                    cout << "请输入联系人地址：" ;
                    cin >> addressbook.persons[addressbook.person_num].address;
                    addressbook.person_num++;
                    cout << "添加成功"<< endl;
                    usleep(500*1000);
                    system("clear");
                }
                break;
            case SHOW_CONTACT:
                if (addressbook.person_num == 0)
                {
                    cout << "当前暂无联系人。" << endl;
                    usleep(5000*1000);
                } else {
                    for (int i = 0; i < addressbook.person_num; i++)
                    {
                        cout << "联系人姓名：" << addressbook.persons[i].name << endl;
                        cout << "\t性别：" << (addressbook.persons[i].gender == 1 ? "男" : "女") << endl;
                        cout << "\t年龄：" << addressbook.persons[i].age << endl;
                        cout << "\t联系电话：" << addressbook.persons[i].tel << endl;
                        cout << "\t联系地址：" << addressbook.persons[i].address << endl;
                    }
                    usleep(5000*1000);
                }
                system("clear");
                break;
            case DEL_CONTACT:
                cout << "请输入要删除的联系人姓名: ";
                cin >> delete_contact_name;
                delete_index = searchContact(&addressbook, delete_contact_name);
                if (delete_index == -1){
                    cout << "没有该联系人。" << endl;
                    usleep(1000*1000);
                } else {
                    for (int i = delete_index; i < addressbook.person_num; i++)
                    {
                        addressbook.persons[i] = addressbook.persons[i + 1];
                    }
                    addressbook.person_num--;
                    cout << "已删除该联系人。" << endl;
                };
                system("clear");
                break;
            case SEARCH_CONTACT:
                cout << "请输入要查找的联系人姓名: ";
                cin >> search_contact_name;
                contact_index = searchContact(&addressbook, search_contact_name);

                if (contact_index == -1){
                    cout << "没有该联系人。" << endl;
                    usleep(1000*1000);
                } else {
                    cout << "查找到联系人：" << addressbook.persons[contact_index].name << endl;
                    cout << "\t性别：" << (addressbook.persons[contact_index].gender == 1 ? "男" : "女") << endl;
                    cout << "\t年龄：" << addressbook.persons[contact_index].age << endl;
                    cout << "\t联系电话：" << addressbook.persons[contact_index].tel << endl;
                    cout << "\t联系地址：" << addressbook.persons[contact_index].address << endl;
                    usleep(5000*1000);
                };

                system("clear");
                break;
            case MODIFY_CONTACT:
                cout << "请输入要修改的联系人姓名: ";
                cin >> modify_contact_name;
                modify_index = searchContact(&addressbook, modify_contact_name);

                if (modify_index == -1)
                {
                    cout << "没有该联系人。" << endl;
                    usleep(1000*1000);
                } else {
                    cout << "请输入联系人的新姓名：";
                    cin >> addressbook.persons[modify_index].name;
                    cout << "请选择联系人性别：1.男 2.女" << endl;
                    cin >> addressbook.persons[modify_index].gender;
                    cout << "请输入联系人年龄：";
                    cin >> addressbook.persons[modify_index].age;
                    cout << "请输入联系人联系电话：";
                    cin >> addressbook.persons[modify_index].tel;
                    cout << "请输入联系人地址：" ;
                    cin >> addressbook.persons[modify_index].address;
                    cout << "修改成功"<< endl;
                    usleep(500*1000);
                }
                system("clear");
                break;
            case CLEAN_CONTACT:
                usleep(1000*1000);
                addressbook.person_num = 0;
                cout << "已清空联系人。" << endl;
                break;
            case QUIT:
                cout << "Bye :)" << endl;
                return 0;
                break;
            default:
                cout << "没有 " << select_func << " 的对应功能。" << endl;
                break;
        }
    }

    return 0;
}