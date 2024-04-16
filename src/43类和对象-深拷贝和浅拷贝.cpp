#include <iostream>
using namespace std;

class Person
{
public:
    int m_age;
    int* m_height = NULL;
    Person() {
        cout << "------无参构造函数in-------" << endl;
    }
    Person(int a, int height) {
        m_age = a;
        m_height = new int(height);
        cout << "------有参构造函数in-------" << endl;
        cout << "------m_height = " << *m_height << endl;
    }
    //深拷贝：自定义拷贝函数，把默认赋值推数据的代码，换成重新分配出一块新堆。
    Person(const Person &person) {
        m_age = person.m_age;
        // m_height = person.m_height;这行是编译器默认执行的代码，为浅拷贝操作。
        m_height = new int(*person.m_height);//这是深拷贝操作。
    }
    ~Person() {
        cout << "------析构函数in-------" << endl;
        //以下四行代码没错，是很标准的消除堆数据和防止野指针的操作。
        //但问题在于浅拷贝会让堆区的内存重复释放。深拷贝解决了这个问题。
        if(m_height == NULL) {
            delete m_height;
            m_height = NULL;
        }
    }
};

int main() {
    Person person1(18, 180);
    Person person2(person1);//使用默认拷贝函数时，我们就是操作了浅拷贝。
    cout << "------person1.m_age = " << person1.m_age << endl;
    cout << "------person2.m_age = " << person2.m_age << endl;
    return 0;
}