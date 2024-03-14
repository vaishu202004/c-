#include <iostream>
#include <fstream>
#include <stdexcept>

double calculateAverage(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) {
        throw std::runtime_error("Failed to open file.");
    }

    double sum = 0.0;
    int count = 0;
    double num;
    while (file >> num) {
        sum += num;
        ++count;
    }

    if (count == 0) {
        throw std::runtime_error("No data found in the file.");
    }

    return sum / count;
}

int main() {
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;

    try {
        double average = calculateAverage(filename);
        std::cout << "Average: " << average << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

