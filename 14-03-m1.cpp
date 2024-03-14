#include <iostream>
#include <cmath>

// Function to calculate volume of a cube
float volume(float side) {
    return std::pow(side, 3);
}

// Function to calculate volume of a rectangle
float volume(float length, float width, float height) {
    return length * width * height;
}

// Function to calculate volume of a cylinder
float volume(float radius, float height) {
    return M_PI * std::pow(radius, 2) * height;
}

int main() {
    int choice;
    std::cout << "Choose shape (1: Cube, 2: Rectangle, 3: Cylinder): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            float side;
            std::cout << "Enter side length of cube: ";
            std::cin >> side;
            std::cout << "Volume of cube: " << volume(side) << std::endl;
            break;
        }
        case 2: {
            float length, width, height;
            std::cout << "Enter length, width, and height of rectangle: ";
            std::cin >> length >> width >> height;
            std::cout << "Volume of rectangle: " << volume(length, width, height) << std::endl;
            break;
        }
        case 3: {
            float radius, height;
            std::cout << "Enter radius and height of cylinder: ";
            std::cin >> radius >> height;
            std::cout << "Volume of cylinder: " << volume(radius, height) << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}

