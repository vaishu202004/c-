#include <iostream>
#include <cmath>
using namespace std;

bool isAbundantNumber(int num) {
    int sum = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum > num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isAbundantNumber(num)) {
        cout << num << " is an Abundant number." << endl;
    } else {
        cout << num << " is not an Abundant number." << endl;
    }
    return 0;
}

