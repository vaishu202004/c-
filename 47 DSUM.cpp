#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int matrix[maxSize][maxSize];
    int rows, cols;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    if (rows != cols) {
        cout << "The matrix must be square to find the sum of diagonals." << endl;
        return 1;
    }

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    int sumDiagonals = 0;
    for (int i = 0; i < rows; ++i) {
        sumDiagonals += matrix[i][i];  
        sumDiagonals += matrix[i][cols - 1 - i];  
    }

    cout << "Sum of diagonals: " << sumDiagonals << endl;

    return 0;
}

