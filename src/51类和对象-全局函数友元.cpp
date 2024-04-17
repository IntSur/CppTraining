#include <iostream>
#include <string>
using namespace std;

class Home {
    //开头加friend,告诉Home类可以让全局函数friendFunction进入类访问private变量.
    friend void friendFunction(Home &rooms);
public:
    string meeting_room;
private:
    string bedroom;
};

void friendFunction(Home &rooms) {
    cout << rooms.meeting_room << endl;
    cout << rooms.bedroom << endl;
}

int main() {
    Home fan_home;
    return 0;
}