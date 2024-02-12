#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the position to delete the element: ";
    cin >> position;

    if (position < 1 || position > size) {
        cout << "Invalid position." << endl;
    } else {
        for (int i = position - 1; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;

        cout << "Array after deletion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

