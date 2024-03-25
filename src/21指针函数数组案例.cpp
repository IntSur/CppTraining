#include <iostream>
using namespace std;

void bubbleSort(int * array, int array_size) {
    int temp;
    int * ptr = NULL;
    ptr = array;

    for (int i = 0; i < array_size - 1; i++) {
        for (int j = 0; j < array_size - i -1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < array_size; i++) {
        cout << *ptr << endl;
        ptr++;
    }
    
}

int main() {
    int arr1[10] = {5, 2, 3, 7, 1, 0, 9, 4, 6, 8};
    int arr1_size = sizeof(arr1) / sizeof(arr1[0]);

    bubbleSort(arr1, arr1_size);

    return 0;
}