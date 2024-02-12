#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size, element, position;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert the element: ";
    cin >> position;

    if (position < 1 || position > size + 1) {
        cout << "Invalid position." << endl;
    } else {
        for (int i = size; i >= position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        size++;

        cout << "Array after insertion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

