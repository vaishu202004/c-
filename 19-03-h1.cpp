#include <iostream>
#include <vector>

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {} // Making the base class destructor virtual for polymorphic behavior
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() const {
        std::cout << "Drawing Circle with radius " << radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void draw() const {
        std::cout << "Drawing Rectangle with length " << length << " and width " << width << std::endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void draw() const {
        std::cout << "Drawing Triangle with sides " << side1 << ", " << side2 << ", " << side3 << std::endl;
    }
};

void drawShapes(const std::vector<Shape*>& shapes) {
    for (size_t i = 0; i < shapes.size(); ++i) {
        shapes[i]->draw();
    }
}

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Triangle(3.0, 4.0, 5.0));

    drawShapes(shapes);

    // Clean up dynamically allocated memory
    for (size_t i = 0; i < shapes.size(); ++i) {
        delete shapes[i];
    }

    return 0;
}

