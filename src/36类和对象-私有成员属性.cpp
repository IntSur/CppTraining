#include <iostream>
#include <string>
using namespace std;
//私有成员属性结合公有成员方法可以：1.自定义类各属性行为的权限 2.设置赋值方法的参数范围
class Account {
public:
    string getName() {
        return name;
    }
    void setName(string modify_name) {
        name = modify_name;
    }

    string getPassword() {
        return password;
    }

    void setData(string modify_data) {
        if (modify_data.size() >= 6)
        {
            cout << "录入的数据超过了6个字节" << endl;
            return;
        }
        
        data = modify_data;
    }
    
private:
    string name;// 自定义权限为可读可写
    string password = "123456";// 自定义权限为只读
    string data;// 自定义权限为只写
};

int main() {
    Account account1;
    account1.setName("default");

    cout << account1.getName() << endl;
    account1.setName("fanjiahui");
    cout << account1.getName() << endl;

    cout << account1.getPassword() << endl;

    account1.setData("random data");

    return 0;
}