#include <iostream>

void printMessage(std::string message = "Hello") {
    std::cout << message << std::endl;
}

int main() {
    printMessage(); // Calling without passing any argument
    return 0;
}

