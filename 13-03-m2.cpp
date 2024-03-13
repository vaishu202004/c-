#include <iostream>
using namespace std;

int main() {
    int num1;
    float num2;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter a float: ";
    cin >> num2;

    if (num1 != 0) {
        float result = num2 / num1;
        cout << "Result of division: " << result << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }

    return 0;
}

