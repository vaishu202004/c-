#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int> > mat;

    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols, 0));
    }

    void setElement(int i, int j, int val) {
        if (i >= 0 && i < rows && j >= 0 && j < cols) {
            mat[i][j] = val;
        }
    }

    int getElement(int i, int j) const {
        if (i >= 0 && i < rows && j >= 0 && j < cols) {
            return mat[i][j];
        }
        return -1; // Return -1 for out-of-bounds access
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("Matrix dimensions do not match for addition");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols)
            throw std::invalid_argument("Matrix dimensions do not match for subtraction");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows)
            throw std::invalid_argument("Matrix dimensions do not match for multiplication");

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                os << matrix.mat[i][j] << " ";
            }
            os << std::endl;
        }
        return os;
    }
};

int main() {
    Matrix m1(2, 3);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(0, 2, 3);
    m1.setElement(1, 0, 4);
    m1.setElement(1, 1, 5);
    m1.setElement(1, 2, 6);

    Matrix m2(3, 2);
    m2.setElement(0, 0, 7);
    m2.setElement(0, 1, 8);
    m2.setElement(1, 0, 9);
    m2.setElement(1, 1, 10);
    m2.setElement(2, 0, 11);
    m2.setElement(2, 1, 12);

    std::cout << "Matrix 1:" << std::endl << m1 << std::endl;
    std::cout << "Matrix 2:" << std::endl << m2 << std::endl;

    try {
        Matrix addition = m1 + m2;
        std::cout << "Addition:" << std::endl << addition << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Matrix subtraction = m1 - m2;
        std::cout << "Subtraction:" << std::endl << subtraction << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Matrix multiplication = m1 * m2;
        std::cout << "Multiplication:" << std::endl << multiplication << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

