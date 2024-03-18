#include <iostream>

class Shape {
public:
    virtual void draw() const = 0;
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Square" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Triangle" << std::endl;
    }
};

int main() {
    Square square;
    Circle circle;
    Triangle triangle;

    square.draw();
    circle.draw();
    triangle.draw();

    return 0;
}

