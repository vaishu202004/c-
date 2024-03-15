#include <iostream>
#include <string>

class Car {
private:
    std::string model;

public:
    Car() : model("Unknown") {}
    Car(const std::string& m) : model(m) {}

    void displayModel() {
        std::cout << "Car model: " << model << std::endl;
    }
};

int main() {
    std::string inputModel;
    std::cout << "Enter the car model: ";
    std::cin >> inputModel;

    Car myCar(inputModel);
    myCar.displayModel();

    return 0;
}

