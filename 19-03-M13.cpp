#include <iostream>
#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Negative number not allowed.");
    }
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    try {
        int num;
        std::cout << "Enter a positive number: ";
        std::cin >> num;
        
        int result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}

