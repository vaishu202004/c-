#include <iostream>
using namespace std;

bool isHarshadNumber(int num) {
    int sum = 0;
    int originalNum = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return originalNum % sum == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHarshadNumber(num)) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }
    return 0;
}

