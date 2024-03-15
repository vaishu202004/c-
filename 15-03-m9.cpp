#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];
public:
    Matrix(int a, int b, int c, int d) {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }
    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    // Overload multiplication operator
};

int main() {
    Matrix mat(1, 2, 3, 4);
    mat.displayMatrix();
    return 0;
}

