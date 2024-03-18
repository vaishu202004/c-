#include <iostream>

class Rectangle {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(4, 5);
    Rectangle* ptr = &rect;

    std::cout << "Perimeter of the rectangle: " << ptr->getPerimeter() << std::endl;

    return 0;
}

