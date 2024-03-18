#include <iostream>
#include <string>

class Vehicle {
protected:
    int speed;
    int fuel;
public:
    Vehicle(int s, int f) : speed(s), fuel(f) {}
    virtual void printDetails() const = 0;
};

class Car : public Vehicle {
public:
    Car(int s, int f) : Vehicle(s, f) {}
    void printDetails() const override {
        std::cout << "Car Details: Speed: " << speed << " km/h, Fuel: " << fuel << " liters" << std::endl;
    }
};

class Bike : public Vehicle {
public:
    Bike(int s, int f) : Vehicle(s, f) {}
    void printDetails() const override {
        std::cout << "Bike Details: Speed: " << speed << " km/h, Fuel: " << fuel << " liters" << std::endl;
    }
};

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car(100, 30);
    vehicles[1] = new Bike(60, 10);

    for (int i = 0; i < 2; ++i) {
        vehicles[i]->printDetails();
        delete vehicles[i]; // Freeing memory
    }

    return 0;
}

