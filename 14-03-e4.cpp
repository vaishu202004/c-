#include <iostream>

int& modifyValue(int &x) {
    x *= 2;
    return x;
}

int main() {
    int num = 5;
    std::cout << "Before modification: " << num << std::endl;
    modifyValue(num) = 10;
    std::cout << "After modification: " << num << std::endl;
    return 0;
}

