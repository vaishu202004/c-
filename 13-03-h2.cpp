#include <iostream>
#include <cstdlib> // for NULL

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];
    if (arr == NULL) {
        std::cerr << "Memory allocation failed!" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    // Use the array here

    // Don't forget to deallocate memory when done
    delete[] arr;

    return 0;
}

