#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    float area = length * width;
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

