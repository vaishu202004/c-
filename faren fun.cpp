#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double tempCelsius, tempFahrenheit;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> tempCelsius;

    tempFahrenheit = celsiusToFahrenheit(tempCelsius);
    std::cout << "Temperature in Fahrenheit: " << tempFahrenheit << "°F" << std::endl;

    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> tempFahrenheit;

    tempCelsius = fahrenheitToCelsius(tempFahrenheit);
    std::cout << "Temperature in Celsius: " << tempCelsius << "°C" << std::endl;

    return 0;
}

