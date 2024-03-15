#include <iostream>

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 4);
    std::cout << "Rectangle Area: " << rect.calculateArea() << std::endl;
    return 0;
}

