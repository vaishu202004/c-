#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    // Constructor to initialize the fraction with numerator and denominator
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    // Overload the division operator (/) to divide two fractions
    Fraction operator/(const Fraction& other) {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;

        return Fraction(num, denom);
    }

    // Display the fraction
    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    // Create two fractions
    Fraction frac1(3, 4);
    Fraction frac2(2, 5);

    // Divide two fractions
    Fraction result = frac1 / frac2;

    // Display the result
    cout << "Result of division: ";
    result.display();
    cout << endl;

    return 0;
}

