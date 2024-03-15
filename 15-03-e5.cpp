#include <iostream>
class DynamicArray {
private:
    int* arr;
    int size;

public:
    DynamicArray(int s) : size(s) {
        arr = new int[size];
        // Initialize elements (for demonstration)
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1;
        }
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void displayElements() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray myArray(5);
    myArray.displayElements();

    return 0;
}

