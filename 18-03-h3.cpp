#include <iostream>

class Shape {
public:
    virtual void draw() = 0;
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void draw() override {
        std::cout << "Drawing Rectangle" << std::endl;
    }

    double calculateArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    void draw() override {
        std::cout << "Drawing Triangle" << std::endl;
    }

    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 4);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
        std::cout << "Area: " << shapes[i]->calculateArea() << std::endl;
        delete shapes[i];
    }

    return 0;
}

