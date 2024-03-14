#include <iostream>

class Rectangle {
private:
    float length;
    float width;
    int coordinates[2]; // Array to store coordinates
    static int count;  // Static member to count objects

public:
    Rectangle() {
        count++;
    }

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

    static int getCount() {
        return count;
    }
};

// Initializing static member
int Rectangle::count = 0;

int main() {
    Rectangle rect1, rect2;
    std::cout << "Total rectangles: " << Rectangle::getCount() << std::endl;
    return 0;
}

