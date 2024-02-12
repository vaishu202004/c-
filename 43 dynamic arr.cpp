#include <iostream>
using namespace std;

int main() {
    int* dynamicArray;
    int size;

    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    dynamicArray = new int[size];

    cout << "Enter the elements of the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        cin >> dynamicArray[i];
    }

    cout << "Dynamic array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }

    delete[] dynamicArray;

    return 0;
}

