#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a,T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void mySort(T arr[], int arr_len) {
    for (int i = 0; i < arr_len; i++) {
        int max_index = i;
        for (int j = i + 1; j < arr_len; j++) {
            if (arr[max_index] < arr[j]) {
                max_index = j;
            }
        }
        if (max_index != i) {
            mySwap(arr[max_index], arr[i]);
        }
    }
}

template <typename T>
void myPrint(T arr[], int arr_len) {
    for (int i = 0; i < arr_len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr1[] = {2,3,5,1,4,8,7,6,9};
    int sizeOfArr1 = sizeof(arr1) / sizeof(arr1[0]);
    mySort(arr1, sizeOfArr1);
    myPrint(arr1, sizeOfArr1);

    char arr2[] = "adcbhgf";
    char sizeOfArr2 = sizeof(arr2);
    mySort(arr2, sizeOfArr2);
    myPrint(arr2, sizeOfArr2);
    return 0;
}