#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size, sum = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum;

    return 0;
}

