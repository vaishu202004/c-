#include <iostream>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 7;
    std::cout << "Sum: " << addNumbers(num1, num2) << std::endl;
    return 0;
}

