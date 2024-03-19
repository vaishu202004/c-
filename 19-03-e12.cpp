#include <iostream>

class Base {
public:
    virtual void display() const {
        std::cout << "Base class display()" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() const override {
        std::cout << "Derived class display()" << std::endl;
    }
};

int main() {
    Base* ptr;

    Base baseObj;
    Derived derivedObj;

    ptr = &baseObj;
    ptr->display(); // Calls Base class display()

    ptr = &derivedObj;
    ptr->display(); // Calls Derived class display()

    return 0;
}

