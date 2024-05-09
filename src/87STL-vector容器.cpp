#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVectorElements(int value) {
    cout << value << endl;
}

int main() {
    //创建容器 并指定容器内存储的数据类型
    vector<int> v;
    //往容器中塞入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //1.第一种遍历写法
    //讲指针指向容器的头尾
    //vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
    // vector<int>::iterator pBegin = v.begin();//头：容器的第一个元素
    // vector<int>::iterator pEnd = v.end();//尾：容器的最后一个元素的后一格
    
    // while (pBegin != pEnd) {
    //     cout << *pBegin << endl;
    //     pBegin++;
    // }

    //2.第二种遍历写法
    // for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    
    //3.第三种遍历写法 利用STL提供遍历算法
    for_each(v.begin(), v.end(), printVectorElements);
    return 0;
}