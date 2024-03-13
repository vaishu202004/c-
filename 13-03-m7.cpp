#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159;
    float radius;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    float volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << "Volume of the sphere: " << volume << endl;

    return 0;
}

