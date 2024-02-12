#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the 2D array: ";
    cin >> rows;

    cout << "Enter the number of columns for the 2D array: ";
    cin >> cols;

    int** dynamic2DArray = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        dynamic2DArray[i] = new int[cols];
    }

    cout << "Enter the elements of the 2D array: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> dynamic2DArray[i][j];
        }
    }

    cout << "2D array elements: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamic2DArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] dynamic2DArray[i];
    }
    delete[] dynamic2DArray;

    return 0;
}

