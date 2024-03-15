#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0), width(0) {}
    Rectangle(double l, double w) : length(l), width(w) {}

    void displayDimensions() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    Rectangle rect1; // Default constructor
    rect1.displayDimensions();

    Rectangle rect2(5.0, 3.0); // Parameterized constructor
    rect2.displayDimensions();

    return 0;
}

