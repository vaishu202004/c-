#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float r, float i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.6, 2.8);

    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    Complex difference = c1 - c2;
    cout << "Difference: ";
    difference.display();

    return 0;
}

