#include <iostream>
using namespace std;

bool isBuzzNumber(int num) {
    return num % 7 == 0 || num % 10 == 7;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isBuzzNumber(num)) {
        cout << num << " is a Buzz number." << endl;
    } else {
        cout << num << " is not a Buzz number." << endl;
    }
    return 0;
}

