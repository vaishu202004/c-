#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    if (divisor != 0) {
        float quotient = static_cast<float>(dividend) / divisor;
        cout << "Quotient: " << quotient << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }

    return 0;
}

