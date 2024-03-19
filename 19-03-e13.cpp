#include <iostream>

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int main() {
    int intSum = sum(3, 4);
    double doubleSum = sum(3.5, 4.5);

    std::cout << "Sum of integers: " << intSum << std::endl;
    std::cout << "Sum of doubles: " << doubleSum << std::endl;

    return 0;
}

