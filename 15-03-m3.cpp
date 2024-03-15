#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r, double i) : real(r), imaginary(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    Complex comp1(1, 2), comp2(3, 4);
    Complex sum = comp1 + comp2;
    return 0;
}

