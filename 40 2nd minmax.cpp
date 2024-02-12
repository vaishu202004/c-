#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize], size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array size should be at least 2." << endl;
        return 1;
    }

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        cout << "There is no second-largest element in the array." << endl;
    } else {
        cout << "The second-largest element in the array is: " << secondMax << endl;
    }

    return 0;
}

