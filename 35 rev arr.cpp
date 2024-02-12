#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    return 0;
}

