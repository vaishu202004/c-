#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Rectangle rect(4, 5);
    Circle circle(3);

    std::cout << "Rectangle Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << std::endl;
    std::cout << "Circle Area: " << circle.area() << ", Circumference: " << circle.perimeter() << std::endl;

    return 0;
}

