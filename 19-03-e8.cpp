#include <iostream>
#include <stdexcept>

int main() {
    int num;
    std::cout << "Enter an integer between 1 and 100: ";
    std::cin >> num;

    try {
        if (num < 1 || num > 100) {
            //throw std::out_of_range("Integer
            throw std::out_of_range("Integer is not in the range [1, 100].");
        }
        std::cout << "Entered integer: " << num << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

