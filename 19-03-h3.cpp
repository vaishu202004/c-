#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>

int sumIntegersFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file.");
    }

    int sum = 0;
    int num;
    while (file >> num) {
        sum += num;
        if (sum < 0) {
            file.close();
            throw std::overflow_error("Arithmetic overflow occurred while calculating sum.");
        }
    }

    if (file.bad()) {
        file.close();
        throw std::runtime_error("Error reading from file.");
    }

    file.close();
    return sum;
}

int main() {
    try {
        std::string filename = "input.txt"; // Provide the name of the input file
        int result = sumIntegersFromFile(filename);
        std::cout << "Sum of integers in the file: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

