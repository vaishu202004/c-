#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Original Number: " << num << endl;
    cout << "Rounded to the nearest integer (floor): " << floor(num) << endl;
    cout << "Rounded to the nearest integer (ceil): " << ceil(num) << endl;

    return 0;
}

