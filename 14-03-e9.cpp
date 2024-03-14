#include <iostream>

class Rectangle {
private:
    float length;
    float width;
    int coordinates[2]; // Array to store coordinates

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    void setCoordinates(int x, int y) {
        coordinates[0] = x;
        coordinates[1] = y;
    }

    float getLength() {
        return length;
    }

    float getWidth() {
        return width;
    }

    void getCoordinates(int &x, int &y) {
        x = coordinates[0];
        y = coordinates[1];
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    rect.setCoordinates(2, 4);
    int x, y;
    rect.getCoordinates(x, y);
    std::cout << "Length: " << rect.getLength() << ", Width: " << rect.getWidth() << ", Coordinates: (" << x << ", " << y << ")" << std::endl;
    return 0;
}

