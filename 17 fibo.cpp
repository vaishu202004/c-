#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    int first = 0, second = 1, next;
    cout << "Fibonacci series:\n";
    for (int i = 0; i < n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}

