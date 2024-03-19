#include <iostream>

class Shape {
public:
    virtual double displayArea() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double displayArea() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double displayArea() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Rectangle(5, 3);
    shapes[1] = new Circle(4);

    for (int i = 0; i < 2; ++i) {
        std::cout << "Area: " << shapes[i]->displayArea() << std::endl;
        delete shapes[i];
    }

    return 0;
}

