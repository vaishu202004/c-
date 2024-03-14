#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
public:
    Matrix(const std::vector<std::vector<int>>& d) : data(d) {}

    Matrix operator+(const Matrix& other) const {
        if (data.size() != other.data.size() || data[0].size() != other.data[0].size()) {
            throw std::invalid_argument("Matrix dimensions do not match for addition.");
        }
        Matrix result(*this);
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result.data[i][j] += other.data[i][j];
            }
        }
        return result;
    }

    // Implement other operators similarly

    void display() const {
        for (const auto& row : data) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m1({{1, 2}, {3, 4}});
    Matrix m2({{5, 6}, {7, 8}});
    try {
        Matrix m3 = m1 + m2;
        std::cout << "Matrix addition result:" << std::endl;
        m3.display();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

