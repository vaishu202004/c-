#include <iostream>

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float real = 0, float imaginary = 0) : real(real), imaginary(imaginary) {}

    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend Complex operator*(const Complex &c1, const Complex &c2);
    friend Complex operator/(const Complex &c1, const Complex &c2);

    friend std::ostream& operator<<(std::ostream &out, const Complex &c);
};

Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

Complex operator-(const Complex &c1, const Complex &c2) {
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

Complex operator*(const Complex &c1, const Complex &c2) {
    return Complex(c1.real * c2.real - c1.imaginary * c2.imaginary,
                   c1.real * c2.imaginary + c1.imaginary * c2.real);
}

Complex operator/(const Complex &c1, const Complex &c2) {
    float denominator = c2.real * c2.real + c2.imaginary * c2.imaginary;
    return Complex((c1.real * c2.real + c1.imaginary * c2.imaginary) / denominator,
                   (c1.imaginary * c2.real - c1.real * c2.imaginary) / denominator);
}

std::ostream& operator<<(std::ostream &out, const Complex &c) {
    out << c.real;
    if (c.imaginary >= 0)
        out << " + " << c.imaginary << "i";
    else
        out << " - " << -c.imaginary << "i";
    return out;
}

int main() {
    Complex c1(2, 3);
    Complex c2(1, -2);

    Complex addition = c1 + c2;
    Complex subtraction = c1 - c2;
    Complex multiplication = c1 * c2;
    Complex division = c1 / c2;

    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;

    return 0;
}

