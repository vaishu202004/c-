#include <iostream>
#include <string>

class Car {
private:
    std::string model;

public:
    Car() : model("Unknown") {}

    void displayModel() {
        std::cout << "Car model: " << model << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.displayModel();
    return 0;
}

