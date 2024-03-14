#include <iostream>
#include <cmath>

// Area of rectangle
float area(float length, float width) {
    return length * width;
}

// Area of circle
float area(float radius) {
    return M_PI * radius * radius;
}

int main() {
    float length = 5.0, width = 3.0, radius = 2.5;
    std::cout << "Area of rectangle: " << area(length, width) << std::endl;
    std::cout << "Area of circle: " << area(radius) << std::endl;
    return 0;
}

