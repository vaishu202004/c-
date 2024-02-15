#include <iostream>

void findMinMax(const int arr[], int size, int &min, int &max) {
    if (size > 0) {
        min = max = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) min = arr[i];
            if (arr[i] > max) max = arr[i];
        }
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, size, min, max);

    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}

