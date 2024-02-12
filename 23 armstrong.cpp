#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int num) {
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
    if (isArmstrongNumber(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}

