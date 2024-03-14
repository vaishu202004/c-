#include <iostream>

class Vector3D {
private:
    float x, y, z;

public:
    Vector3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    Vector3D operator*(float scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    Vector3D crossProduct(const Vector3D& other) const {
        return Vector3D(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector3D vec1(1, 2, 3);
    Vector3D vec2(4, 5, 6);

    Vector3D addition = vec1 + vec2;
    Vector3D subtraction = vec1 - vec2;
    Vector3D scalarMult = vec1 * 2;
    Vector3D crossProduct = vec1.crossProduct(vec2);

    std::cout << "Vector 1: ";
    vec1.display();
    std::cout << std::endl;

    std::cout << "Vector 2: ";
    vec2.display();
    std::cout << std::endl;

    std::cout << "Addition: ";
    addition.display();
    std::cout << std::endl;

    std::cout << "Subtraction: ";
    subtraction.display();
    std::cout << std::endl;

    std::cout << "Scalar Multiplication: ";
    scalarMult.display();
    std::cout << std::endl;

    std::cout << "Cross Product: ";
    crossProduct.display();
    std::cout << std::endl;

    return 0;
}

