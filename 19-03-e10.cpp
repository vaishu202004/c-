#include <iostream>
#include <vector>
#include <stdexcept>

int findElement(const std::vector<int>& vec, int target) {
    if (vec.empty()) {
        throw std::invalid_argument("Vector is empty.");
    }
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return i;
        }
    }
    return -1; // If target not found
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;

    try {
        int index = findElement(vec, target);
        if (index != -1) {
            std::cout << "Target found at index: " << index << std::endl;
        } else {
            std::cout << "Target not found." << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

