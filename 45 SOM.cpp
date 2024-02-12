#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int matrix1[maxSize][maxSize], matrix2[maxSize][maxSize], sum[maxSize][maxSize];
    int rows, cols;

    cout << "Enter the number of rows for matrices: ";
    cin >> rows;

    cout << "Enter the number of columns for matrices: ";
    cin >> cols;

    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

   
    cout << "Sum of matrices: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

