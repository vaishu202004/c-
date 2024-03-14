#include <iostream>

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float l) {
        length = l;
    }

    void setWidth(float w) {
        width = w;
    }

    float getLength() {
        return length;
    }

    float getWidth() {
        return width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    std::cout << "Length: " << rect.getLength() << ", Width: " << rect.getWidth() << std::endl;
    return 0;
}

