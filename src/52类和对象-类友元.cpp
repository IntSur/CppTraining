#include <iostream>
#include <string>
using namespace std;

class Building {
    //开头加friend,告诉Building类可以让GoodFriend类进入Building类访问private变量.
    friend class GoodFriend;
public:
    Building() {
        meeting_room = "会议室";
        bedroom = "卧室";
    }
public:
    string meeting_room;
private:
    string bedroom;
};

class GoodFriend {
public:
    Building* fan_rooms;

    GoodFriend() {
        fan_rooms = new Building;
    }

    void visitRooms() {
        cout << "好朋友正在访问" << fan_rooms->meeting_room << endl;
        cout << "好朋友正在访问" << fan_rooms->bedroom << endl;
    }

};

int main() {
    GoodFriend gf;
    gf.visitRooms();
    return 0;
}