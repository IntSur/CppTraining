#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    //利用不断变化的时间系统 生成不同的随机数
    srand((unsigned int)time(NULL));
    //生成0+1~99+1区间的随机数
    int randomnumber = rand() % 100 + 1;
    int inputnumber = 0;
    
    while (1)
    {
        cout << "输入一个数字，猜对就能退出程序，否则循环：";
        cin >> inputnumber;
        if(inputnumber == randomnumber) {
            cout << "猜对了，现在退出程序。" << endl;;
            return 0;
        } else {
            if(inputnumber <= randomnumber) {
                cout << "猜小了，现在继续循环..." << endl;
            } else if (inputnumber >= randomnumber) {
                cout << "猜大了，现在继续循环..." << endl;
            }
            
            
        }
    }
}