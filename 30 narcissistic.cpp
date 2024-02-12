#include <iostream>
#include <cmath>
using namespace std;

bool isNarcissisticNumber(int num) {
    int originalNum = num;
    int n = 0, digit, sum = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isNarcissisticNumber(num)) {
        cout << num << " is a Narcissistic number." << endl;
    } else {
        cout << num << " is not a Narcissistic number." << endl;
    }
    return 0;
}

