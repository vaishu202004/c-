#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;
public:
    DynamicArray(int sz) : size(sz) {
        arr = new int[size];
    }
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray arr(5);
    return 0;
}

