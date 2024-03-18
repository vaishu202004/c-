#include <iostream>

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(5);
    Circle* ptr = &c;

    std::cout << "Area of the circle: " << ptr->getArea() << std::endl;

    return 0;
}

