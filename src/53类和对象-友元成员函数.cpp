#include <iostream>
#include <string>
using namespace std;

class GoodFriend {
public:
    Building* fan_rooms;

    GoodFriend();

    void visit();
    void visit2();
};

GoodFriend::GoodFriend() {
    fan_rooms = new Building;
}

class Building {
    friend void GoodFriend::visit();
public:
    Building();
    string meeting_room;
private:
    string bedroom;
};

Building::Building() {
    meeting_room = "会议室";
    bedroom = "卧室";
}

void GoodFriend::visit() {
    cout << "好朋友正在访问" << fan_rooms->meeting_room << endl;
    cout << "好朋友正在访问" << fan_rooms->bedroom << endl;
}
void GoodFriend::visit2() {
    cout << "好朋友正在访问" << fan_rooms->meeting_room << endl;
    cout << "好朋友正在访问" << fan_rooms->bedroom << endl; 
}

int main() {
    GoodFriend gf;
    gf.visit2();
    return 0;
}