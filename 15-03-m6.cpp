#include <iostream>
using namespace std;

class Vector2D {
private:
    double x;
    double y;
public:
    Vector2D(double xx, double yy) : x(xx), y(yy) {}
    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }
};

int main() {
    Vector2D vec1(1, 2), vec2(3, 4);
    Vector2D sumVec = vec1 + vec2;
    return 0;
}

