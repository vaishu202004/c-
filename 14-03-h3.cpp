#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int **data;

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0;  // Initialize all elements to 0
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Copy constructor
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = other.data[i][j];
            }
        }
    }

    // Overload addition operator
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Matrices must have the same dimensions for addition." << std::endl;
            return *this;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Overload subtraction operator
    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            std::cerr << "Matrices must have the same dimensions for subtraction." << std::endl;
            return *this;
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Overload multiplication operator
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Number of columns in the first matrix must match the number of rows in the second matrix for multiplication." << std::endl;
            return *this;
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Display matrix
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // Test matrix addition
    Matrix A(2, 2);
    A.display();
    std::cout << std::endl;
    Matrix B(2, 2);
    B.display();
    std::cout << std::endl;
    Matrix C = A + B;
    std::cout << "A + B:" << std::endl;
    C.display();
    std::cout << std::endl;

    // Test matrix subtraction
    Matrix D = A - B;
    std::cout << "A - B:" << std::endl;
    D.display();
    std::cout << std::endl;

    // Test matrix multiplication
    Matrix E(2, 3);
    E.display();
    std::cout << std::endl;
    Matrix F(3, 2);
    F.display();
    std::cout << std::endl;
    Matrix G = E * F;
    std::cout << "E * F:" << std::endl;
    G.display();

    return 0;
}

