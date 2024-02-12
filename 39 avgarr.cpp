#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size;
    double sum = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / size;
    cout << "Average of array elements: " << average;

    return 0;
}

