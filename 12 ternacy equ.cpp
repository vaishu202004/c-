#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    string result = (num1 == num2) ? "Numbers are equal." : "Numbers are not equal.";

    cout << result << endl;

    return 0;
}
