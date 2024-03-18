#include <iostream>

class Bird {
public:
    virtual void fly() const = 0;
};

class Eagle : public Bird {
public:
    void fly() const override {
        std::cout << "Eagle flies high" << std::endl;
    }
};

class Sparrow : public Bird {
public:
    void fly() const override {
        std::cout << "Sparrow flies low" << std::endl;
    }
};

int main() {
    Eagle eagle;
    Sparrow sparrow;

    eagle.fly();
    sparrow.fly();

    return 0;
}

