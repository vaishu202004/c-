#include <iostream>
using namespace std;

bool isHappyNumber(int num) {
    while (num != 1 && num != 4) {
        int sum = 0;
        while (num > 0) {
            sum += (num % 10) * (num % 10);
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHappyNumber(num)) {
        cout << num << " is a Happy number." << endl;
    } else {
        cout << num << " is not a Happy number." << endl;
    }
    return 0;
}

