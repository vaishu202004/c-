#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 12; ++i) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}

