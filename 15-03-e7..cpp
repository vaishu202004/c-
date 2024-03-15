#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int _x, int _y) : x(_x), y(_y) {}

    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);
    Point p3 = p1 + p2;
    p3.display();

    return 0;
}

