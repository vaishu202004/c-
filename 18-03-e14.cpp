#include <iostream>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing Shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

int main() {
    Shape* ptr = new Circle();
    ptr->draw();

    delete ptr;
    return 0;
}

