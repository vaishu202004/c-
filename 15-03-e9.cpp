#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;

    std::cout << "Sum: ";
    sum.display();
    std::cout << "Difference: ";
    diff.display();
    std::cout << "Product: ";
    product.display();

    return 0;
}

