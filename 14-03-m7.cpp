#include <iostream>
#include <cmath>

class Circle {
private:
    float radius;
    float area;
public:
    void setRadius(float r) {
        radius = r;
    }

    float calculateArea() {
        area = M_PI * radius * radius;
        return area;
    }

    void displayDetails() {
        std::cout << "Radius: " << radius << ", Area: " << area << std::endl;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5.0);
    circle.calculateArea();
    circle.displayDetails();
    return 0;
}

