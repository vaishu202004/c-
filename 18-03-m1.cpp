#include <iostream>
#include <string>

class Vehicle {
protected:
    int speed;
    int fuel;
public:
    Vehicle(int s, int f) : speed(s), fuel(f) {}

    virtual void displayInfo() const = 0;
};

class Car : public Vehicle {
public:
    Car(int s, int f) : Vehicle(s, f) {}

    void displayInfo() const override {
        std::cout << "Car - Speed: " << speed << " km/h, Fuel: " << fuel << " liters" << std::endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(int s, int f) : Vehicle(s, f) {}

    void displayInfo() const override {
        std::cout << "Bike - Speed: " << speed << " km/h, Fuel: " << fuel << " liters" << std::endl;
    }
};

int main() {
    Car car(100, 30);
    Bike bike(60, 10);

    car.displayInfo();
    bike.displayInfo();

    return 0;
}

