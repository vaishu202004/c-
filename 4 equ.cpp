#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "Numbers are equal." << endl;
    } else {
        cout << "Numbers are not equal." << endl;
    }

    return 0;
}

