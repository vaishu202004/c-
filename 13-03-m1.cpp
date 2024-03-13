#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = PI * radius * radius;
    cout << "Area of the circle: " << area << endl;

    return 0;
}

