#include <iostream>
#include <stdexcept>

class Array {
private:
    int* elements;
    int size;
public:
    Array(int size) : size(size) {
        elements = new int[size];
    }

    ~Array() {
        delete[] elements;
    }

    void insert(int index, int value) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Invalid index.");
        }
        elements[index] = value;
    }

    int retrieve(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Invalid index.");
        }
        return elements[index];
    }
};

int main() {
    try {
        Array arr(5);
        arr.insert(0, 10);
        arr.insert(1, 20);
        arr.insert(2, 30);

        std::cout << "Element at index 1: " << arr.retrieve(1) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}

