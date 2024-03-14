#include <iostream>
#include <cmath>

// Function prototypes for rectangle
float area(float length, float width);
float perimeter(float length, float width);

// Function prototypes for circle
float area(float radius);
float perimeter(float radius);

// Function prototypes for triangle
float area(float side1, float side2, float side3);
float perimeter(float side1, float side2, float side3);

int main() {
    // Rectangle
    float length = 5.0, width = 3.0;
    std::cout << "Rectangle - Area: " << area(length, width) << ", Perimeter: " << perimeter(length, width) << std::endl;

    // Circle
    float radius = 2.5;
    std::cout << "Circle - Area: " << area(radius) << ", Circumference: " << perimeter(radius) << std::endl;

    // Triangle
    float side1 = 3.0, side2 = 4.0, side3 = 5.0;
    std::cout << "Triangle - Area: " << area(side1, side2, side3) << ", Perimeter: " << perimeter(side1, side2, side3) << std::endl;

    return 0;
}

// Rectangle area
float area(float length, float width) {
    return length * width;
}

// Rectangle perimeter
float perimeter(float length, float width) {
    return 2 * (length + width);
}

// Circle area
float area(float radius) {
    return M_PI * radius * radius;
}

// Circle circumference (perimeter)
float perimeter(float radius) {
    return 2 * M_PI * radius;
}

// Triangle area using Heron's formula
float area(float side1, float side2, float side3) {
    float s = (side1 + side2 + side3) / 2; // semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Triangle perimeter
float perimeter(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

