#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}

