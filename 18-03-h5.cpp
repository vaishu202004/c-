#include <iostream>

class Vector2D {
private:
    double x, y;
public:
    Vector2D(double _x, double _y) : x(_x), y(_y) {}

    Vector2D operator+(const Vector2D& vec) const {
        return Vector2D(x + vec.x, y + vec.y);
    }

    Vector2D operator-(const Vector2D& vec) const {
        return Vector2D(x - vec.x, y - vec.y);
    }

    Vector2D operator*(double scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector2D vec1(2, 3), vec2(4, 5);

    Vector2D addition = vec1 + vec2;
    std::cout << "Addition: " << addition << std::endl;

    Vector2D subtraction = vec1 - vec2;
    std::cout << "Subtraction: " << subtraction << std::endl;

    Vector2D scalarMultiplication = vec1 * 2;
    std::cout << "Scalar Multiplication: " << scalarMultiplication << std::endl;

    return 0;
}

