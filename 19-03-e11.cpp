#include <iostream>

class Vehicle {
public:
    virtual void move() const = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void move() const override {
        std::cout << "Car moves on four wheels." << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    void move() const override {
        std::cout << "Bicycle moves on two wheels." << std::endl;
    }
};

int main() {
    Car car;
    Bicycle bicycle;

    car.move();
    bicycle.move();

    return 0;
}

