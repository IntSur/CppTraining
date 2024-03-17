#include <iostream>
using namespace std;

void findTheFatestPiggy();
void arrReverse();
void bubbleSort();

int main() {
    int arr1[10] = {1, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    int arr3[20];
    

    cout << "sizeof(arr1) = " << sizeof(arr1) << endl;
    cout << "sizeof(arr1[0]) = " << sizeof(arr1[0]) << endl;
    cout << "sizeof(arr1)/sizeof(arr1[0]) = " << sizeof(arr1)/sizeof(arr1[0]) << endl;
    
    cout << "addrof(arr1) = " << arr1 << endl;
    cout << "addrof(arr1[0]) = " << &arr1[0] << endl;
    cout << "addrof(arr1[1]) = " << &arr1[1] << endl;

    findTheFatestPiggy();
    arrReverse();
    bubbleSort();

    return 0;
}

void findTheFatestPiggy() {
    int PiggysWeights[] = {300, 350, 200, 400, 250};
    int MaxWeight = 0;

    for(int i = 0; i < (sizeof(PiggysWeights) / sizeof(PiggysWeights[0])); i++) {
        if(PiggysWeights[i] > MaxWeight) {
            MaxWeight = PiggysWeights[i];
        }
    } 
    cout << "最重的小猪是" << MaxWeight << endl;
}

void arrReverse() {
    int arr4[] = {1, 2, 3, 4};
    int tmp = 0;
    int lenthOfArr4 = sizeof(arr4) / sizeof(arr4[0]);

    for (int i = 0; i < lenthOfArr4 / 2; i++) {
        tmp = arr4[i];
        arr4[i] = arr4[(lenthOfArr4 - 1) - i];
        arr4[(lenthOfArr4 - 1) - i] = tmp;
    }

    cout << "[";
    for (int i = 0; i < lenthOfArr4; i++) {
        cout << arr4[i] << " ";
    }
    cout << "]" << endl;
    
}

void bubbleSort() {
    int arr5[] = {4, 5, 2, 3, 1, 6, 9, 7, 8, 21, 22};
    int lenthOfArr5 = sizeof(arr5) / sizeof(arr5[0]);
    int tmp;

    //冒泡排序：
    //外层排序轮数为：元素个数 - 1
    for (int i = 0; i < lenthOfArr5 - 1; i++) {
        //内层排序轮数为：元素个数 - 当前轮数 - 1
        for (int j = 0; j < (lenthOfArr5 - 1) - i; j++) {
            if(arr5[j] > arr5[j + 1]) {
                tmp = arr5[j];
                arr5[j] = arr5[j + 1];
                arr5[j + 1] = tmp;
            }
        }
    }
    
    cout << "[";
    for (int i = 0; i < lenthOfArr5; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << "]" << endl;
}