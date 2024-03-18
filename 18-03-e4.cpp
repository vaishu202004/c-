#include <iostream>

class Shape {
public:
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Square" << std::endl;
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Triangle" << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;
    Triangle triangle;

    circle.draw();
    square.draw();
    triangle.draw();

    return 0;
}

