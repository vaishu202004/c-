#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

