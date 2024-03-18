#include <iostream>

class Shape {
public:
    virtual double getArea() const = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect(5, 4);
    Circle circle(3);

    std::cout << "Area of Rectangle: " << rect.getArea() << std::endl;
    std::cout << "Area of Circle: " << circle.getArea() << std::endl;

    return 0;
}

