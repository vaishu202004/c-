#include <iostream>
#include <stdexcept>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    try {
        if (age < 0 || age > 150) {
            throw std::out_of_range("Age out of valid range.");
        }
        std::cout << "Your age: " << age << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

