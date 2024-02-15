#include <iostream>

int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << std::endl;
    return 0;
}

