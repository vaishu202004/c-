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

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Rectangle" << std::endl;
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Triangle" << std::endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Triangle();

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
        delete shapes[i]; // Freeing memory
    }

    return 0;
}

