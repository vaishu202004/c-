#include <iostream>
#include <cstring>

void reverseString(const char* str) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    std::cout << "Reverse of the string: ";
    reverseString(str);
    return 0;
}

