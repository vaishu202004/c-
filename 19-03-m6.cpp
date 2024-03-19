#include <iostream>
#include <fstream>
#include <stdexcept>

void displayFileContents(const std::string& filename) {
    std::ifstream file(19-03-e1.c++);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file.");
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}

int main() {
    try {
        std::string filename;
        std::cout << "Enter filename: ";
        std::cin >> filename;

        displayFileContents(filename);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

