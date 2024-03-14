#include <iostream>
#include <string>

class Car {
private:
    std::string model;
    int year;
    float price;
public:
    Car(std::string model = "Unknown", int year = 0, float price = 0.0) : model(model), year(year), price(price) {}

    void displayDetails() {
        std::cout << "Model: " << model << ", Year: " << year << ", Price: " << price << std::endl;
    }
};

int main() {
    Car cars[3];
    cars[0].displayDetails(); // Default values
    cars[1] = Car("Toyota", 2022, 25000.0);
    cars[2] = Car("BMW", 2023, 50000.0);
    for (int i = 1; i < 3; ++i) {
        cars[i].displayDetails();
    }
    return 0;
}

