#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    try {
        if (b == 0) {
            throw std::runtime_error("Division by zero error.");
        }
        std::cout << "Result of division: " << a / b << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

