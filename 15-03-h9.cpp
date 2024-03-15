#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class BigInt {
private:
    string number;
public:
    // Constructor to initialize the integer with a string representation
    BigInt(const string& num) : number(num) {}

    // Overload the addition operator (+) to add two BigIntegers
    BigInt operator+(const BigInt& other) {
        string result;
        int carry = 0;

        // Make the lengths of both numbers equal by adding leading zeros
        int maxLength = max(number.length(), other.number.length());
        string num1 = string(maxLength - number.length(), '0') + number;
        string num2 = string(maxLength - other.number.length(), '0') + other.number;

        // Perform addition digit by digit
        for (int i = maxLength - 1; i >= 0; --i) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[i] - '0';
            int sum = digit1 + digit2 + carry;
            result += static_cast<char>('0' + sum % 10); // Append the digit to the result
            carry = sum / 10; // Update the carry
        }

        // If there's a carry left, append it to the result
        if (carry)
            result += static_cast<char>('0' + carry);

        // Reverse the result to get the correct order
        reverse(result.begin(), result.end());

        return BigInt(result);
    }

    // Display the BigInt
    void display() const {
        cout << number;
    }
};

int main() {
    // Create two BigIntegers
    BigInt num1("12345678901234567890");
    BigInt num2("98765432109876543210");

    // Add two BigIntegers
    BigInt result = num1 + num2;

    // Display the result
    cout << "Sum of BigIntegers: ";
    result.display();
    cout << endl;

    return 0;
}

