#include <iostream>

class Complex {
private:
    float real;
    float imaginary;

public:
    Complex(float real = 0, float imaginary = 0) : real(real), imaginary(imaginary) {}

    float getReal() const {
        return real;
    }

    float getImaginary() const {
        return imaginary;
    }

    void display() const {
        std::cout << real;
        if (imaginary >= 0)
            std::cout << " + " << imaginary << "i";
        else
            std::cout << " - " << -imaginary << "i";
    }

    friend class Matrix;
};

class Matrix {
public:
    static Complex multiplyWithConstant(const Complex &c, float constant) {
        return Complex(c.real * constant, c.imaginary * constant);
    }
};

int main() {
    Complex c1(2, 3);
    float constant = 2;
    Complex result = Matrix::multiplyWithConstant(c1, constant);
    
    std::cout << "Result: ";
    result.display();
    std::cout << std::endl;
    
    return 0;
}

