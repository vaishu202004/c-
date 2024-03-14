#include <iostream>

inline float calculateArea(float length = 1.0, float width = 1.0) {
    return length * width;
}

int main() {
    float length, width;
    std::cout << "Enter length and width of rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area of rectangle: " << calculateArea(length, width) << std::endl;
    return 0;
}

