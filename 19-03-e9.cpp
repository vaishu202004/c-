#include <iostream>
#include <cmath>
#include <stdexcept>

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    try {
        if (num < 0) {
            throw std::invalid_argument("Negative number entered.");
        }
        std::cout << "Square root of " << num << " is: " << sqrt(num) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

