#include <iostream>

float calculateArea(float length = 1.0, float width = 1.0);
float calculatePerimeter(float length = 1.0, float width = 1.0);

int main() {
    float length, width;
    std::cout << "Enter length and width of rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area: " << calculateArea(length, width) << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter(length, width) << std::endl;
    return 0;
}

float calculateArea(float length, float width) {
    return length * width;
}

float calculatePerimeter(float length, float width) {
    return 2 * (length + width);
}

