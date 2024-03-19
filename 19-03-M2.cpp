#include <iostream>
#include <stdexcept>

class TemperatureConverter {
public:
    double convertToFahrenheit(double celsius) {
        if (celsius < -273.15) {
            throw std::invalid_argument("Celsius temperature below absolute zero.");
        }
        return (celsius * 9 / 5) + 32;
    }
};

int main() {
    try {
        TemperatureConverter converter;
        double celsius;
        std::cout << "Enter Celsius temperature: ";
        std::cin >> celsius;
        
        double fahrenheit = converter.convertToFahrenheit(celsius);
        std::cout << "Fahrenheit temperature: " << fahrenheit << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}

