#include <iostream>
#include <cmath>

class Shape {
public:
    virtual float calculateArea() const = 0;
    virtual float calculatePerimeter() const = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float length, float width) : length(length), width(width) {}

    virtual float calculateArea() const override {
        return length * width;
    }

    virtual float calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float radius) : radius(radius) {}

    virtual float calculateArea() const override {
        return M_PI * radius * radius;
    }

    virtual float calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Triangle : public Shape {
private:
    float side1, side2, side3;

public:
    Triangle(float side1, float side2, float side3) : side1(side1), side2(side2), side3(side3) {}

    virtual float calculateArea() const override {
        // Heron's formula for calculating the area of a triangle
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    virtual float calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Creating instances of shapes
    Rectangle rectangle(5, 3);
    Circle circle(2);
    Triangle triangle(3, 4, 5);

    // Calculating and displaying area and perimeter of each shape
    std::cout << "Rectangle:" << std::endl;
    std::cout << "Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "\nCircle:" << std::endl;
    std::cout << "Area: " << circle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "\nTriangle:" << std::endl;
    std::cout << "Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}

