#include <iostream>
#include <stdexcept>

int calculateAverage(int array[], int size) {
    if (size == 0) {
        throw std::invalid_argument("Array size is zero.");
    }
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    try {
        int average = calculateAverage(arr, size);
        std::cout << "Average: " << average << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

