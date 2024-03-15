#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0), width(0) {}
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }

    Rectangle operator+(const Rectangle& other) {
        double newLength = length + other.length;
        double newWidth = width + other.width;
        return Rectangle(newLength, newWidth);
    }
};

int main() {
    Rectangle rect1(2.0, 3.0);
    Rectangle rect2(4.0, 5.0);
    Rectangle rect3 = rect1 + rect2;
    std::cout << "Combined area: " << rect3.area() << std::endl;

    return 0;
}

