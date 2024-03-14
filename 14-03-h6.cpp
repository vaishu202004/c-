#include <iostream>

void factorial(int n, unsigned long long &result, int start = 1) {
    result = 1;
    for (int i = start; i <= n; ++i) {
        result *= i;
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    unsigned long long fact;
    factorial(num, fact);
    std::cout << "Factorial of " << num << ": " << fact << std::endl;

    return 0;
}

