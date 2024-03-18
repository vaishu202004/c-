#include <iostream>

class Vehicle {
protected:
    int speed;
    int fuel;
public:
    Vehicle(int s, int f) : speed(s), fuel(f) {}
};

class Car : public Vehicle {
public:
    Car(int s, int f) : Vehicle(s, f) {}
};

class Bike : public Vehicle {
public:
    Bike(int s, int f) : Vehicle(s, f) {}
};

int main() {
    Car car(100, 50);
    Bike bike(80, 30);

    return 0;
}

