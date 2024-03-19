#include <iostream>
#include <limits>
#include <stdexcept>

int readIntFromUser(int sentinel) {
    int num;
    while (true) {
        std::cout << "Enter an integer (or " << sentinel << " to stop): ";
        if (!(std::cin >> num)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            throw std::invalid_argument("Invalid input. Please enter an integer.");
        }
        if (num == sentinel) {
            return sentinel;
        }
        if (num < 0 || num > 100) {
            throw std::out_of_range("Out of range. Please enter an integer between 0 and 100.");
        }
        // Process valid input
        std::cout << "You entered: " << num << std::endl;
    }
}

int main() {
    const int sentinel = -1;
    try {
        while (true) {
            int num = readIntFromUser(sentinel);
            if (num == sentinel) {
                std::cout << "Sentinel value entered. Exiting..." << std::endl;
                break;
            }
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        // Optionally handle or log the exception further
    }

    return 0;
}

