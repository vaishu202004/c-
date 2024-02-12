#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    const int maxSize = 100;
    int arr1[maxSize], size1, arr2[maxSize], size2;
    int mergedArr[2 * maxSize];

    cout << "Enter the size of the first array: ";
    cin >> size1;

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}

