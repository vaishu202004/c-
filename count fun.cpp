#include <iostream>
#include <string>

int countElements(const std::string& str) {
    return str.length();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Number of elements in the string: " << countElements(input) << std::endl;
    return 0;
}

