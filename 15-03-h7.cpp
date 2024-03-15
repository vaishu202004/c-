#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;
public:
    // Parameterized constructor to initialize the array with a specified size
    DynamicArray(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor to release the memory allocated for the array
    ~DynamicArray() {
        delete[] arr;
    }

    // Other member functions for array manipulation can be added here
};

int main() {
    // Create a DynamicArray object with a specified size
    DynamicArray arr(5);

    // Perform operations on the array...

    return 0;
}

