#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    swap(arr1, arr2, size);
    std::cout << "After swap: ";
    for (int i = 0; i < size; ++i) {
        std::cout << "arr1[" << i << "] = " << arr1[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}

