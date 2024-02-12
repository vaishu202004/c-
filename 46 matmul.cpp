#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int matrix1[maxSize][maxSize], matrix2[maxSize][maxSize], product[maxSize][maxSize];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;

    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;

    cout << "Enter the elements of the first matrix: ";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;

    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }

    cout << "Enter the elements of the second matrix: ";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            product[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Product of matrices: " << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

