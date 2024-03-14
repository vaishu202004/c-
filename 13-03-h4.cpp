#include <iostream>

// Area of Rectangle
float rectangleArea(float length, float width) {
    return length * width;
}

// Area of Circle
float circleArea(float radius) {
    return 3.14159f * radius * radius;
}

// Area of Triangle
float triangleArea(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float length, width, radius, base, height;

    // Rectangle
    length = 5.0f;
    width = 3.0f;
    std::cout << "Area of Rectangle: " << rectangleArea(length, width) << std::endl;

    // Circle
    radius = 2.0f;
    std::cout << "Area of Circle: " << circleArea(radius) << std::endl;

    // Triangle
    base = 4.0f;
    height = 6.0f;
    std::cout << "Area of Triangle: " << triangleArea(base, height) << std::endl;

    return 0;
}

