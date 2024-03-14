#include <iostream>

int& largestElement(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return arr[maxIndex];
}

int main() {
    int arr[] = {3, 7, 2, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int &largest = largestElement(arr, size);
    std::cout << "Largest element: " << largest << std::endl;
    return 0;
}

