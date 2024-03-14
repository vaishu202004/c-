#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Square: " << square(num) << std::endl;
    return 0;
}

