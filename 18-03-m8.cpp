#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Rectangle rect(5, 4);
    Circle circle(3);

    std::cout << "Area of Rectangle: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rect.calculatePerimeter() << std::endl;
    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    std::cout << "Circumference of Circle: " << circle.calculatePerimeter() << std::endl;

    return 0;
}

