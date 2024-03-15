#include <iostream>
#include <vector>
#include <algorithm> // Include <algorithm> header for std::max
using namespace std;

class Polynomial {
private:
    vector<int> coefficients;
public:
    // Constructor to initialize the polynomial with a list of coefficients
    Polynomial(initializer_list<int> coeffs) : coefficients(coeffs) {}

    // Overload the addition operator to add two polynomials
    Polynomial operator+(const Polynomial& other) {
        int maxSize = max(coefficients.size(), other.coefficients.size()); // Use std::max
        vector<int> resultCoeffs(maxSize, 0);

        for (size_t i = 0; i < coefficients.size(); ++i) {
            resultCoeffs[i] += coefficients[i];
        }

        for (size_t i = 0; i < other.coefficients.size(); ++i) {
            resultCoeffs[i] += other.coefficients[i];
        }

        return Polynomial(resultCoeffs);
    }

    // Display the polynomial
    void display() const {
        for (int i = coefficients.size() - 1; i >= 0; --i) {
            cout << coefficients[i] << "x^" << i << " ";
            if (i != 0) {
                cout << "+ ";
            }
        }
        cout << endl;
    }
};

int main() {
    // Create two polynomials using brace-enclosed initializer lists
    Polynomial poly1({2, 0, 1}); // 2x^2 + 1
    Polynomial poly2({-1, 3, 4}); // -x^2 + 3x + 4

    // Add two polynomials
    Polynomial result = poly1 + poly2;

    // Display the result
    cout << "Resultant Polynomial: ";
    result.display();

    return 0;
}

